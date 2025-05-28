from PipeQLParser import PipeQLParser
from PipeQLVisitor import PipeQLVisitor
import json

class JSONPipeQLVisitor(PipeQLVisitor):
    def __init__(self, data_map):
        self.data = data_map
        self.table_name = ""

    def visitSelectOperator(self, ctx, rows):
        columns = [select_expr.expression().getText() for select_expr in ctx.selectExpression()]

        result = []
        for row in rows:
            tmp = {column: row[column] for column in columns if column in row}
            result.append(tmp)

        for row in result:
            print(json.dumps(row, indent=1))

        return None

    def visitQuery(self, ctx):
        if ctx.fromClause():
            self.table_name = self.visitFromClause(ctx.fromClause())

        filtered_rows = self.data[self.table_name]

        for pipe_op in ctx.pipeOperator():
            if pipe_op.whereOperator():
                filtered_rows = self.visitWhereOperator(pipe_op.whereOperator(), filtered_rows)

        for pipe_op in ctx.pipeOperator():
            if pipe_op.selectOperator():
                self.visitSelectOperator(pipe_op.selectOperator(), filtered_rows)

        return None

    def visitWhereOperator(self, ctx, rows):
        boolean_expr = ctx.booleanExpression()
        where_expression = boolean_expr.getText()

        if "BETWEEN" in where_expression:
            column = boolean_expr.expression(0).getText()
            lower_bound = int(boolean_expr.expression(1).getText())
            upper_bound = int(boolean_expr.expression(2).getText())

            print(f"Filtering rows where {column} BETWEEN {lower_bound} AND {upper_bound}")

            filtered_rows = [row for row in rows if column in row and lower_bound <= row[column] <= upper_bound]
            return filtered_rows

        elif ">" in where_expression:
            column = boolean_expr.expression(0).getText()
            expr_value = int(boolean_expr.expression(1).getText())
            print(f"Filtering rows where {column} > {expr_value}")

            filtered_rows = [row for row in rows if column in row and row[column] > expr_value]
            return filtered_rows

        elif "==" in where_expression:
            column = boolean_expr.expression(0).getText()
            expr_value = int(boolean_expr.expression(1).getText())
            print(f"Filtering rows where {column} == {expr_value}")

            filtered_rows = [row for row in rows if column in row and row[column] == expr_value]
            return filtered_rows

        elif "<" in where_expression:
            column = boolean_expr.expression(0).getText()
            expr_value = int(boolean_expr.expression(1).getText())
            print(f"Filtering rows where {column} < {expr_value}")

            filtered_rows = [row for row in rows if column in row and row[column] < expr_value]
            return filtered_rows

        return rows

    def visitFromClause(self, ctx):
        table_name = ctx.IDENTIFIER().getText()

        if table_name not in self.data:
            print(f"Error: Table '{table_name}' not found in data map.")

        return table_name

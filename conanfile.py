from conan import ConanFile
from conan.tools.cmake import CMake, CMakeToolchain, CMakeDeps, cmake_layout

class AntLR4Example(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    license = "MIT"
    author = "harish876"
    description = "PipeQL"
    homepage = "https://github.com/harish876/PipeQL"

    testing = []
    generators = ("CMakeToolchain","CMakeDeps")

    requires = (
        "antlr4-cppruntime/4.13.1",
        "antlr4/4.13.1",
        "openjdk/21.0.1",
    )

    def layout(self):
        cmake_layout(self)

    def build_requirements(self):
        self.tool_requires("cmake/[>=3.22]")

    def package_info(self):
        self.cpp_info.system_libs = ["dl", "rt", "pthread"]

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
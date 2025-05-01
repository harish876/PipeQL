from conan import ConanFile
from conan.tools.cmake import CMake, CMakeToolchain, CMakeDeps, cmake_layout
from conan.tools.files import get

class PipeQLConan(ConanFile):
    name = "pipeql"
    version = "1.0"
    settings = "os", "compiler", "build_type", "arch"
    license = "MIT"
    author = "harish876"
    description = "PipeQL"
    homepage = "https://github.com/harish876/PipeQL"

    generators = ("CMakeToolchain", "CMakeDeps")
    requires = (
        "antlr4-cppruntime/4.13.1",
        "antlr4/4.13.1",
        "openjdk/21.0.1",
        "nlohmann_json/3.10.5"
    )

    # Add docstore as a dependency
    def source(self):
        get(self, "https://github.com/harish876/docstore/archive/refs/heads/main.zip", strip_root=True, destination="docstore")

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
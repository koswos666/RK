cmake_minimum_required(VERSION 3.10)
project(DesignPatterns)

set(CMAKE_CXX_STANDARD 17)


enable_testing()
find_package(GTest REQUIRED)
find_package(Threads REQUIRED) 

# Adapter Pattern
add_library(adapter_lib STATIC
    "Adapter Design Pattern/CrappyArrayInventory.cpp"
    "Adapter Design Pattern/ModernInventory.cpp"
)
target_include_directories(adapter_lib PUBLIC "Adapter Design Pattern")

add_executable(adapter_example "Adapter Design Pattern/main.cpp")
target_link_libraries(adapter_example adapter_lib)

# Adapter Tests
add_executable(adapter_tests
    "Adapter Design Pattern/tests/CrappyArrayTest.cpp"
    "Adapter Design Pattern/tests/ModernInventoryTest.cpp"
)
target_link_libraries(adapter_tests adapter_lib GTest::GTest GTest::Main)
add_test(NAME adapter_tests COMMAND adapter_tests)

cmake_minimum_required(VERSION 3.5)

project(product_library)

############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(product_library SHARED 
    src/Product.cpp
)
add_library(product::library ALIAS product_library)

target_include_directories(product_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(product_binary
    src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( product_binary
    PRIVATE 
       product::library
)

cmake_minimum_required(VERSION 3.10)
project(MultiFolderProjects)

set(CMAKE_CXX_STANDARD 17)

# Path to the folder containing all subfolders
set(PROBLEMS_DIR "${CMAKE_SOURCE_DIR}/Problems")

# Collect all subdirectories under Problems/
file(GLOB SUBFOLDERS RELATIVE ${PROBLEMS_DIR} ${PROBLEMS_DIR}/*)

foreach(SUBFOLDER ${SUBFOLDERS})
    if (EXISTS ${PROBLEMS_DIR}/${SUBFOLDER}/main.cpp)
        # Create an executable for each folder with a main.cpp
        add_executable(${SUBFOLDER} ${PROBLEMS_DIR}/${SUBFOLDER}/main.cpp)

        # Set the working directory to its respective folder
        set_target_properties(${SUBFOLDER} PROPERTIES
                RUNTIME_OUTPUT_DIRECTORY ${PROBLEMS_DIR}/${SUBFOLDER}
        )
    endif()
endforeach()

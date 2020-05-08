find_package(OGRE REQUIRED COMPONENTS Bites)

set(CONTROL_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include CACHE PATH "Control include dir")
list(APPEND CONTROL_INCLUDE_DIRS 
            ${MODEL_INCLUDE_DIR}
            ${CONTROL_INCLUDE_DIR}
            ${OGRE_INCLUDE_DIRS})

include_directories(${CONTROL_INCLUDE_DIRS})

file(GLOB CONTROL_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)
file(GLOB CONTROL_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp)

add_library(Control STATIC ${CONTROL_HEADERS} ${CONTROL_SOURCES})
target_link_libraries(Control ${OGRE_LIBRARIES} Model)

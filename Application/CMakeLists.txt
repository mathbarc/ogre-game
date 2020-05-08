find_package(OGRE REQUIRED)

set(APPLICATION_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include CACHE PATH "Application include dir")
list(APPEND APPLICATION_INCLUDE_DIRS
            ${MODEL_INCLUDE_DIR}
            ${CONTROL_INCLUDE_DIR}
            ${OGRE_INCLUDE_DIRS})

include_directories(${APPLICATION_INCLUDE_DIRS})

file(GLOB APPLICATION_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)
file(GLOB APPLICATION_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp)

add_executable(Application ${APPLICATION_HEADERS} ${APPLICATION_SOURCES})
target_link_libraries(Application ${OGRE_LIBS} Model Control)

find_package(OGRE REQUIRED)

set(VIEW_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include CACHE PATH "View include dir")
list(APPEND VIEW_INCLUDE_DIRS 
            ${OGRE_INCLUDE_DIRS})

include_directories(${VIEW_INCLUDE_DIRS})

file(GLOB VIEW_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)
file(GLOB VIEW_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp)

add_library(View STATIC ${VIEW_HEADERS} ${VIEW_SOURCES})
target_link_libraries(View ${OGRE_LIBS})
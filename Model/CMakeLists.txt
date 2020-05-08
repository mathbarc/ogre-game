find_package(OGRE REQUIRED)

set(MODEL_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include CACHE PATH "Model include dir")
list(APPEND MODEL_INCLUDE_DIRS 
            ${MODEL_INCLUDE_DIR}
            ${OGRE_INCLUDE_DIRS})

include_directories(${MODEL_INCLUDE_DIRS})

file(GLOB MODEL_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)
file(GLOB MODEL_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp)

add_library(Model STATIC ${MODEL_HEADERS} ${MODEL_SOURCES})
target_link_libraries(Model ${OGRE_LIBS})

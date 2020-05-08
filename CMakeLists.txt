cmake_policy(SET CMP0048 NEW)
project(MyOGREGame VERSION 0.0.0)

cmake_minimum_required(VERSION 3.11)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Model)
#add_subdirectory(View)
add_subdirectory(Control)
add_subdirectory(Application)

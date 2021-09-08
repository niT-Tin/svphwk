cmake_minimum_required(VERSION 3.20)
project(summerVacationProgramHomeWork)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/include/Crow/include)

include_directories(/home/liuzehao/Downloads/boost_1_70_0)
include_directories(/usr/include)

link_directories(/home/liuzehao/Downloads/boost_1_70_0/stage/lib)

find_package(Threads)
find_package(ZLIB)
find_package(OpenSSL)



set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -Wreturn-type")
set(Boost_INCLUDE_DIR /home/liuzehao/Downloads/boost_1_70_0)
if(OPENSSL_FOUND)
    include_directories(${OPENSSL_INCLUDE_DIR})
endif()

if (NOT CMAKE_BUILD_TYPE)
    message(STATUS "No build type selected, default to Release")
    set(CMAKE_BUILD_TYPE "Release")
endif()

if (MSVC)
    set(Boost_USE_STATIC_LIBS "On")
    find_package( Boost 1.70 COMPONENTS system thread regex REQUIRED )
else()
    find_package( Boost 1.70 COMPONENTS system thread REQUIRED )
endif()

add_executable(summerVacationProgramHomeWork main.cpp envreader/readenv.cpp models/models.h db/sqlite/autoMigrate.cpp)
target_link_libraries(summerVacationProgramHomeWork PRIVATE sqlite_orm::sqlite_orm)
find_package(SqliteOrm CONFIG REQUIRED)


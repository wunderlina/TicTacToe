cmake_minimum_required(VERSION 3.29)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 14)

add_executable(TicTacToe
    main.cpp
        Piece.h
        Piece.cpp
        Game.cpp
        Grid.cpp)

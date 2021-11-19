cmake_minimum_required(VERSION 3.20)
project (StructuralImprovements)

set(CMAKE_CXX_STANDARD 14)

add_executable(StructuralImprovements ShapesBad.cpp ShapesBad.h TestBadShapes.cpp TestGoodShapes.cpp ShapesGood.cpp ShapesGood.h)

cc = gcc

cpp = g++

graph: graphs.cpp
    $(cpp) graphs.cpp -g -o graph

ll: linkedlist.cpp
    $(cpp) linkedlist.cpp -g -o ll

tree: tree.c
    $(cc) tree.c -g -o tree


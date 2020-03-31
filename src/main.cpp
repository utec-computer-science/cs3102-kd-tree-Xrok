#include <iostream>
#include "tree.cpp"
int main(int argc, char const *argv[])
{

    Tree<int> kdTree;
    
    kdTree.insert(2,3);
    kdTree.insert(5,4);
    kdTree.insert(9,6);
    kdTree.insert(4,7);
    kdTree.insert(8,1);
    kdTree.insert(7,2);

    kdTree.print();

    return 0;
}

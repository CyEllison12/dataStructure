//
//  BinaryTreeTester.hpp
//  dataStructure
//
//  Created by Ellison, Cy on 4/12/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.h"
#include "../Model/nonLinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void treeStuff();
};

#endif /* BinaryTreeTester_hpp */

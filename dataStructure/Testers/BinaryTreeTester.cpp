//
//  BinaryTreeTester.cpp
//  dataStructure
//
//  Created by Ellison, Cy on 4/12/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(1);
    testTree.insert(1289);
    testTree.insert(18);
    testTree.insert(78);
    testTree.insert(76);
    testTree.insert(235);
    testTree.insert(742);
    testTree.insert(-12);
    testTree.insert(93);
    
    testTree.inOrderTraversal();
    testTree.postOrderTraversal();
    testTree.preOrderTraversal();
    
}

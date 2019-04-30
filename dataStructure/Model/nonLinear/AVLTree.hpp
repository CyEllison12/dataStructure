//
//  AVLTree.hpp
//  dataStructure
//
//  Created by Ellison, Cy on 4/30/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp


#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remvoe(Type value);
};

template <class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}



#endif /* AVLTree_hpp */

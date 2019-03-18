//
//  GraphTester.hpp
//  dataStructure
//
//  Created by Ellison, Cy on 3/18/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include "../Model/nonLinear/Graph.hpp"
#include <iostream>

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
    
public:
    void testGraphs();
};



#endif /* GraphTester_hpp */

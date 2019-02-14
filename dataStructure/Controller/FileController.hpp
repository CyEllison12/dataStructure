//
//  FileController.hpp
//  dataStructure
//
//  Created by Ellison, Cy on 2/5/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"


using namespace std;

class FileController
{
public:
    static Array<Music> musicDataToArray(string filename);
    
    static LinkedList<CrimeData> readDataToList(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
    
};

#endif /* FileController_hpp */

//
//  LinearTester.cpp
//  dataStructure
//
//  Created by Ellison, Cy on 2/13/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/cell7422/Documents/MyDogAteMyC++/dataStructure/dataStructure/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/cell7422/Documents/MyDogAteMyC++/dataStructure/dataStructure/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    
   
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/cell7422/Documents/MyDogAteMyC++/dataStructure/dataStructure/Resources/musicv.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/cell7422/Documents/MyDogAteMyC++/dataStructure/dataStructure/Resources/musicv.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicSTL.resetTimer();
    musicOOP.resetTimer();
    
    
}


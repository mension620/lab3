//
//  main.h
//  lab3
//
//  Created by 陳建維 on 2015/7/1.
//  Copyright (c) 2015年 陳建維. All rights reserved.
//

#ifndef lab3_main_h
#define lab3_main_h

#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

class cow {
public:
    void setCowNumber(int x);
    void setCowWeight(int y);
    void clearVectorCowWeight();
    void sortVectorCowWeight();
    int getSumCowWeightTopFive();
private:
    int cowNumber;
    vector <int> cowWeight;
};



#endif

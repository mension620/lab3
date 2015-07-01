//
//  main.cpp
//  lab3
//
//  Created by 陳建維 on 2015/7/1.
//  Copyright (c) 2015年 陳建維. All rights reserved.
//

#include <iostream>
#include "main.h"

void cow::setCowNumber(int x) {
    cowNumber = x;
}
void cow::setCowWeight(int y) {
    cowWeight.push_back(y);
}
void cow::clearVectorCowWeight() {
    cowWeight.clear();
    //cowWeight.resize(cowNumber);//bug
}
void cow::sortVectorCowWeight() {
    sort(cowWeight.begin(), cowWeight.end());
    reverse(cowWeight.begin(), cowWeight.end());
}
int cow::getSumCowWeightTopFive() {
    int m = cowWeight[0] + cowWeight[1] + cowWeight[2] + cowWeight[3] + cowWeight[4];
    return m;
}

int main(int argc, const char * argv[]) {
    cow data1;
    int x,y;
    ifstream infile("file.in", ios::in);
    infile >> x;
    data1.setCowNumber(x);
    data1.clearVectorCowWeight();
    while (infile >> y) {
        data1.setCowWeight(y);
    }
    data1.sortVectorCowWeight();
    cout << data1.getSumCowWeightTopFive() << endl;
    return 0;
}

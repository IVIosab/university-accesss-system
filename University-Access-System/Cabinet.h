//
// Created by Mosab Mohamed on 3/28/2021.
//

#ifndef UNIVERSITY_ACCESS_SYSTEM_CABINET_H
#define UNIVERSITY_ACCESS_SYSTEM_CABINET_H


#include <bits/stdc++.h>
#include "RoomType.h"

using namespace std;

class Cabinet : public RoomType {
public:
    vector<string> owners;

    Cabinet(int number, string level, vector<string> owners,int floor);

    int getNumber();

    int getFloor();

    string getLevel();

    vector<string> getOwners();
};


#endif //UNIVERSITY_ACCESS_SYSTEM_CABINET_H

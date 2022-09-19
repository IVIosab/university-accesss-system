//
// Created by Mosab Mohamed on 3/28/2021.
//

#ifndef UNIVERSITY_ACCESS_SYSTEM_ROOMTYPE_H
#define UNIVERSITY_ACCESS_SYSTEM_ROOMTYPE_H


#include <bits/stdc++.h>

using namespace std;

class RoomType {
protected:
    string level;
    int number;
    int floor;

public:


    RoomType(int number, string level,int floor);

    virtual int getNumber() = 0;

    virtual string getLevel() = 0;

    virtual int getFloor() = 0;
};



#endif //UNIVERSITY_ACCESS_SYSTEM_ROOMTYPE_H

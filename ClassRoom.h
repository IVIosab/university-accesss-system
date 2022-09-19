//
// Created by Mosab Mohamed on 3/28/2021.
//

#ifndef UNIVERSITY_ACCESS_SYSTEM_CLASSROOM_H
#define UNIVERSITY_ACCESS_SYSTEM_CLASSROOM_H


#include <bits/stdc++.h>
#include "RoomType.h"

using namespace std;

class ClassRoom : public RoomType {
public:
    ClassRoom(int number, string level, int floor);

    int getNumber();

    int getFloor();

    string getLevel();
};


#endif //UNIVERSITY_ACCESS_SYSTEM_CLASSROOM_H

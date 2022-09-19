//
// Created by Mosab Mohamed on 3/28/2021.
//

#ifndef UNIVERSITY_ACCESS_SYSTEM_USERTYPE_H
#define UNIVERSITY_ACCESS_SYSTEM_USERTYPE_H

#include <bits/stdc++.h>

using namespace std;

class Usertype {
protected:
    string name, occupation, id, level;
    int age;
    vector<int> rooms;
public:


    Usertype(int age, string name, string occupation, string id, string level,
             vector<int> rooms);

    virtual int getAge() = 0;

    virtual string getName() = 0;

    virtual string getOccupation() = 0;

    virtual string getId() = 0;

    virtual string getLevel() = 0;

    virtual vector<int> getRooms() = 0;

    virtual void addRoom(int room) = 0;

    virtual void changeLevel(string newLevel) = 0;
};



#endif //UNIVERSITY_ACCESS_SYSTEM_USERTYPE_H

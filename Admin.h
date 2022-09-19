//
// Created by Mosab Mohamed on 3/28/2021.
//

#ifndef UNIVERSITY_ACCESS_SYSTEM_ADMIN_H
#define UNIVERSITY_ACCESS_SYSTEM_ADMIN_H


#include <bits/stdc++.h>
#include "Usertype.h"

using namespace std;

class Admin : public Usertype {
public:
    Admin(int age, string name, string occupation, string id, string level,
          vector<int> rooms);

public:
    int getAge();

    string getName();

    string getOccupation();

    string getId();

    string getLevel();

    vector<int> getRooms();

    void addRoom(int room);

    void changeLevel(string newLevel);
};


#endif //UNIVERSITY_ACCESS_SYSTEM_ADMIN_H

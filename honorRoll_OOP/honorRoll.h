//
// Created by sanay on 10/30/2019.
//
#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class honorRoll
{
private:
    bool eligible;
    bool infraction;
    string c [8];
    int g [8];
    int i;
    int j;
    int gtotal;
    int average;
    int k;
    int random;
    string name;
public:
    honorRoll();
    void setGrades(int);
    void setClasses(string);
    void getStatus();
    void setRandom(int);
    void setName(string);
    string getClass(int);
};
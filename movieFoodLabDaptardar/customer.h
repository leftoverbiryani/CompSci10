//
// Created by sanay on 11/19/2019.
//
#include <iostream>

using namespace std;

#ifndef MOVIEFOODLABDAPTARDAR_CUSTOMER_H
#define MOVIEFOODLABDAPTARDAR_CUSTOMER_H


class customer {
    private:
        double b = 5.00;
        double c = 2.25;
        double h = 7.00;
        double p = 6.75;
        double i = 4.50;
        double total = 0;

    public:
        customer();
        void run(string);
        string invalid();
        bool pass();
};


#endif //MOVIEFOODLABDAPTARDAR_CUSTOMER_H

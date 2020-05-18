#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <time.h>
#include <string>
#include <chrono>
#include <list>
#include <deque>
#include <algorithm>
#include "tasks.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;

TEST(Student_comparison, Test1) {

    Student s1, s2;
    s1.setName("Tom", "Quinn");
    s1.setVid(1.5);
    s2.setName("Elon", "Musk");
    s2.setVid(10);

    ASSERT_TRUE(sortings(s2, s1)==1);
}

TEST(Student_copy, Test2) {

    Student s1, s2;
    s1.setName("Tom", "Quinn");
    s1.setVid(1.5);
    s2 = s1;

    ASSERT_TRUE(s2.getVid()==s1.getVid());
}

int main() {

    testing::InitGoogleTest();

    char type = 'v';

    cout << "Issirstymas i failus | irasymas i naujus konteinerius | irasymas i nauja ir senu duomenu panaikinimas "
         << endl;
    for (int kiekis = 1000; kiekis <= 10000000; kiekis *= 10) {
        cout << kiekis << endl;
        create(kiekis, type);
        cout << "list     ";
        readfilesL(type, kiekis);
        cout << "vector   ";
        readfileV(type, kiekis);
        cout << "deque    ";
        readfileD(type, kiekis);

    }
    return RUN_ALL_TESTS();
}


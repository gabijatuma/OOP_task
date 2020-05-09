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

using namespace std;


int main()
{

    srand (time(NULL));

    int what;
    char type = 'v';


cout<<"Issirstymas i failus | irasymas i naujus konteinerius | irasymas i nauja ir senu duomenu panaikinimas "<<endl;
 for(int kiekis = 1000; kiekis <= 10000000; kiekis*=10)
    {
     cout<<kiekis<<endl;
     create(kiekis, type);
     cout<<"list     ";
     readfilesL(type, kiekis);
     cout<<"vector   ";
     readfileV(type, kiekis);
     cout<<"deque    ";
     readfileD(type, kiekis);

    }
    return 0;
}

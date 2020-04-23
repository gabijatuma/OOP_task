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
#include "tasks.h"



void readfileV(char ty, int k) try
{
    auto start = high_resolution_clock::now();
    ifstream fd;
    string filename;
    filename = "studentai" + to_string(k);
    fd.open( filename.c_str() );
    if(fd.good())
    {
    vector<Student> st;
    Student one;

    int egz, sum, index;
    string random;
    int cnt = -1;
    fd >> random >> random;
    while(random!="Egz.")
    {
        fd >> random;
        cnt++;
    }
    {
    string name, surname;
    int v[cnt];
    for(int kk = 0; kk < k; kk++)
    {
        fd >> name >> surname;
        one.setName(name, surname);

        sum = 0;
        index = 0;

        for(int i = 0; i < cnt; i++)
        {
            fd >> v[i];
            if(v[i]<0 || v[i]>10)
                v[i] = 1+(double)rand()/RAND_MAX*9;
            index++;
        }
        fd >> egz;
        fd.ignore();
        if(egz<0 || egz>10)
                egz = 1+(double)rand()/RAND_MAX*9;

        for (int i=0;i<cnt;i++)
        {
	        sum+=v[i];
        }

        if(ty=='v')
        {
            one.setVid( 0.6*(double)egz + 0.4*((double)sum/(double)(index-1)));
        }
        else if(ty=='m')
        {
            for(int i = 0; i < index-2; i++)
                for(int j = i; j < index - 1; j++)
                {
                    if(v[j]<v[i])
                        swap(v[j], v[i]);
                }

            if((index)%2==0) one.setVid((double)v[(index-2)/2]*0.4 + (double)egz*0.6);
            else one.setVid((double)(v[(index-3)/2]+v[(index-1)/2])/2*0.4 + (double)egz*0.6);

        }
        st.push_back(one);
    }

    fd.close();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << k << " studentu irasu nuskaitymas i 'vector' uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;

    sort (st.begin(), st.end(), sortings);




    writefile(st, ty, k);
    writetwoV(st, k);
    writedeleteV(st, k);
    }
    }
    else
    {
        throw 1;
    }

}

catch(...)
    {
        cout<<"Reikalingas failas nebuvo rastas."<<endl;
    }










    void readfileD(char ty, int k) try
{
    auto start = high_resolution_clock::now();
    ifstream fd;
    string filename;
    filename = "studentai" + to_string(k);
    fd.open( filename.c_str() );
    if(fd.good())
    {
    deque<Student> st;
    Student one;

    int egz, sum, index;
    string random;
    int cnt = -1;
    fd >> random >> random;
    while(random!="Egz.")
    {
        fd >> random;
        cnt++;
    }
    {
    string name, surname;
    int v[cnt];
    for(int kk = 0; kk < k; kk++)
    {
        fd >> name >> surname;
        one.setName(name, surname);

        sum = 0;
        index = 0;

        for(int i = 0; i < cnt; i++)
        {
            fd >> v[i];
            if(v[i]<0 || v[i]>10)
                v[i] = 1+(double)rand()/RAND_MAX*9;
            index++;
        }
        fd >> egz;
        fd.ignore();
        if(egz<0 || egz>10)
                egz = 1+(double)rand()/RAND_MAX*9;

        for (int i=0;i<cnt;i++)
        {
	        sum+=v[i];
        }

        if(ty=='v')
        {
            one.setVid( 0.6*(double)egz + 0.4*((double)sum/(double)(index-1)));
        }
        else if(ty=='m')
        {
            for(int i = 0; i < index-2; i++)
                for(int j = i; j < index - 1; j++)
                {
                    if(v[j]<v[i])
                        swap(v[j], v[i]);
                }

            if((index)%2==0) one.setVid((double)v[(index-2)/2]*0.4 + (double)egz*0.6);
            else one.setVid((double)(v[(index-3)/2]+v[(index-1)/2])/2*0.4 + (double)egz*0.6);

        }
        st.push_back(one);
    }

    fd.close();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << k << " studentu irasu nuskaitymas i 'deque' uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;

    sort (st.begin(), st.end(), sortings);

    writefileD(st, ty, k);
    writetwoD(st, k);
    writedeleteD(st, k);
    }
    }
    else
    {
        throw 1;
    }

}

catch(...)
    {
        cout<<"Reikalingas failas nebuvo rastas."<<endl;
    }




    void readfilesL(char ty, int k) try
{
    auto start = high_resolution_clock::now();
    ifstream fd;
    string filename;
    filename = "studentai" + to_string(k);
    fd.open( filename.c_str() );
    list<Student> st;
    if(fd.good())
    {
    int egz, sum, index;
    string random;
    int cnt = -1;
    fd >> random >> random;
    while(random!="Egz.")
    {
        fd >> random;
        cnt++;
    }
    {

    Student one;
    string usedname, usedsur;
    int v[cnt];
    for(int kk = 0; kk < k; kk++)
    {
        fd >> usedname >> usedsur;
        one.setName(usedname, usedsur);

        sum = 0;
        index = 0;

        for(int i = 0; i < cnt; i++)
        {
            fd >> v[i];
            if(v[i]<0 || v[i]>10)
                v[i] = 1+(double)rand()/RAND_MAX*9;
            index++;
        }
        fd >> egz;
        fd.ignore();
        if(egz<0 || egz>10)
                egz = 1+(double)rand()/RAND_MAX*9;

        for (int i=0;i<cnt;i++)
        {
	        sum+=v[i];
        }

        if(ty=='v')
        {
            one.setVid( 0.6*(double)egz + 0.4*((double)sum/(double)(index-1)));
        }
        else if(ty=='m')
        {
            for(int i = 0; i < index-2; i++)
                for(int j = i; j < index - 1; j++)
                {
                    if(v[j]<v[i])
                        swap(v[j], v[i]);
                }

            if((index)%2==0) one.setVid( (double)v[(index-2)/2]*0.4 + (double)egz*0.6);
            else one.setVid( (double)(v[(index-3)/2]+v[(index-1)/2])/2*0.4 + (double)egz*0.6);

        }
        st.push_back(one);
    }

    fd.close();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << k << " studentu irasu nuskaitymas i 'list' uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;


    st.sort(sortings);

    writefileL(st, ty, k);
    writetwoL(st, k);
    writedeleteL(st, k);

    }
    }
    else
    {
        throw 1;
    }

}

catch(...)
    {
        cout<<"Reikalingas failas nebuvo rastas."<<endl;
    }



bool sortings (const Student& a, const Student& b)
{
    return a.getVid() > b.getVid();
}


void writefile(vector<Student>S, char type, int k)
{

    ofstream frg;
    ofstream frb;
    string filename;
    filename = "VECTORgerieji" + to_string(k);
    frg.open( filename.c_str() );
    filename = "VECTORblogieji" + to_string(k);
    frb.open( filename.c_str() );




    frg<<"Pavarde             Vardas             Galutinis(vid.) Galutinis(med.)"<<endl;
    frg<<"--------------------------------------------------------------------"<<endl;

    frb<<"Pavarde             Vardas             Galutinis(vid.) Galutinis(med.)"<<endl;
    frb<<"--------------------------------------------------------------------"<<endl;

    auto start = high_resolution_clock::now();
    double check = 0;
    string names, surnames;
    for(auto ij: S)
    {
        check = ij.getVid();
        names = ij.getName();
        surnames = ij.getSurname();
       if(check< 5.0)
       {
        frb<<setw(20)<<left<<surnames;
        frb<<setw(20)<<left<<names;
        frb<<setw(20)<<fixed<<setprecision(2)<<left<<check;
        frb<<endl;
       }
       else
       {
        frg<<setw(20)<<left<<surnames;
        frg<<setw(20)<<left<<names;
        frg<<setw(20)<<fixed<<setprecision(2)<<left<<check;
        frg<<endl;
       }
    }
    frg.close();
    frb.close();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << S.size() << " studentu irasymas i atitinkamus failus uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;
}

void writetwoV(vector<Student>S, int k)
{


    vector<Student> bad;
    vector<Student> good;
    double check = 0;
    auto start = high_resolution_clock::now();
    for(auto ij: S)
    {
       check = ij.getVid();
       if(check < 5.0)
       {
        bad.push_back(ij);
       }
       else
       {
        good.push_back(ij);
       }
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << S.size() << " studentu isskaidymas i 2 naujus vector uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;
}

void writedeleteV(vector<Student>S, int k)
{
    int kiekis = S.size();

    vector<Student> bad;
    double check;
    auto start = high_resolution_clock::now();
    for(auto ij: S)
    {
       check = ij.getVid();
       if(check < 5.0)
       {
        bad.push_back(ij);
       }

    }
    long int tik = 1;
    for(auto ij: S)
    {
       check = ij.getVid();
       if(check >= 5.0)
       tik++;

    }
    S.resize(tik);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << kiekis << " studentu isskaidymas i nauja vector ir istrynimas uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;
}




void writefileD(deque<Student>S, char type, int k)
{

    ofstream frg;
    ofstream frb;
    string filename;
    filename = "DEQUEgerieji" + to_string(k);
    frg.open( filename.c_str() );
    filename = "DEQUEblogieji" + to_string(k);
    frb.open( filename.c_str() );




    frg<<"Pavarde             Vardas             Galutinis(vid.) Galutinis(med.)"<<endl;
    frg<<"--------------------------------------------------------------------"<<endl;

    frb<<"Pavarde             Vardas             Galutinis(vid.) Galutinis(med.)"<<endl;
    frb<<"--------------------------------------------------------------------"<<endl;

    auto start = high_resolution_clock::now();
    double check = 0;
    string names, surnames;
    for(auto ij: S)
    {
        check = ij.getVid();
        names = ij.getName();
        surnames = ij.getSurname();
       if(check< 5.0)
       {
        frb<<setw(20)<<left<<surnames;
        frb<<setw(20)<<left<<names;
        frb<<setw(20)<<fixed<<setprecision(2)<<left<<check;
        frb<<endl;
       }
       else
       {
        frg<<setw(20)<<left<<surnames;
        frg<<setw(20)<<left<<names;
        frg<<setw(20)<<fixed<<setprecision(2)<<left<<check;
        frg<<endl;
       }
    }
    frg.close();
    frb.close();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << S.size() << " studentu irasymas i atitinkamus failus uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;
}

void writetwoD(deque<Student>S, int k)
{


    deque<Student> bad;
    deque<Student> good;
    double check = 0;
    auto start = high_resolution_clock::now();
    for(auto ij: S)
    {
       check = ij.getVid();
       if(check < 5.0)
       {
        bad.push_back(ij);
       }
       else
       {
        good.push_back(ij);
       }
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << S.size() << " studentu isskaidymas i 2 naujus deque uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;
}

void writedeleteD(deque<Student>S, int k)
{
    int kiekis = S.size();

    deque<Student> bad;
    double check;
    auto start = high_resolution_clock::now();
    for(auto ij: S)
    {
       check = ij.getVid();
       if(check < 5.0)
       {
        bad.push_back(ij);
       }

    }
    long int tik = 1;
    for(auto ij: S)
    {
       check = ij.getVid();
       if(check >= 5.0)
       tik++;

    }
    S.resize(tik);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << kiekis << " studentu isskaidymas i nauja deque ir istrynimas uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;
}



void create (int k, char type)
{
    ofstream f;
    string filename;
    filename = "studentai" + to_string(k);
    f.open( filename.c_str() );

     int a;
    f <<setw(20)<<left<<"vardas"<<setw(20)<<left<<"pavarde"<<setw(20)<<left<<"ND1"<<setw(20)<<left<<"ND2"<<setw(20)<<left<<"ND3"<<setw(20)<<left<<"ND4"<<setw(20)<<left<<"ND5"<<setw(20)<<left<<"ND6"<<setw(20)<<left<<"ND7"<<setw(20)<<left<<"ND8"<<setw(20)<<left<<"ND9"<<setw(20)<<left<<"ND10"<<setw(20)<<left<<"ND11"<<setw(20)<<left<<"ND12"<<setw(20)<<left<<"ND13"<<setw(20)<<left<<"ND14"<<setw(20)<<left<<"ND15"<<setw(20)<<left<<"Egz."<<endl;
    for(int i = 0; i < k; i++)
    {
        a = rand();
        f <<setw(20)<<left<< "vardas" + to_string(a);
        f <<setw(20)<<left<< "pavarde" + to_string(a);

        for(int i = 0; i <= 15; i++)
            f <<setw(20)<<left<<(int)( 1+(double)rand()/RAND_MAX*9);
        f << endl;

    }
    f.close();


}

void writefileL(list<Student>S, char type, int k)
{

    ofstream frg;
    ofstream frb;
    string filename;
    filename = "LISTgerieji" + to_string(k);
    frg.open( filename.c_str() );
    filename = "LISTblogieji" + to_string(k);
    frb.open( filename.c_str() );




    frg<<"Pavarde             Vardas             Galutinis(vid.) Galutinis(med.)"<<endl;
    frg<<"--------------------------------------------------------------------"<<endl;

    frb<<"Pavarde             Vardas             Galutinis(vid.) Galutinis(med.)"<<endl;
    frb<<"--------------------------------------------------------------------"<<endl;

    auto start = high_resolution_clock::now();
    double check = 0;
    string names, surnames;
    for(auto ij: S)
    {
        check = ij.getVid();
        names = ij.getName();
        surnames = ij.getSurname();
       if(check< 5.0)
       {
        frb<<setw(20)<<left<<surnames;
        frb<<setw(20)<<left<<names;
        frb<<setw(20)<<fixed<<setprecision(2)<<left<<check;
        frb<<endl;
       }
       else
       {
        frg<<setw(20)<<left<<surnames;
        frg<<setw(20)<<left<<names;
        frg<<setw(20)<<fixed<<setprecision(2)<<left<<check;
        frg<<endl;
       }



    }
    frg.close();
    frb.close();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << S.size() << " studentu irasymas i atitinkamus failus uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;
}


void writetwoL(list<Student>S, int k)
{



    list<Student> bad;
    list<Student> good;
    double check;
    auto start = high_resolution_clock::now();
    for(auto ij: S)
    {
       check = ij.getVid();
       if(check < 5.0)
       {
        bad.push_back(ij);
       }
       else
       {
        good.push_back(ij);
       }
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << S.size() << " studentu isskaidymas i 2 naujus list uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;
}

void writedeleteL(list<Student>S, int k)
{
    int kiekis = S.size();

    list<Student> bad;
    double check;
    auto start = high_resolution_clock::now();
    for(auto ij: S)
    {
       check = ij.getVid();
       if(check < 5.0)
       {
        bad.push_back(ij);
       }

    }
    long int tik = 1;
    for(auto ij: S)
    {
       check = ij.getVid();
       if(check >= 5.0)
       tik++;

    }
    S.resize(tik);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << kiekis << " studentu isskaidymas i nauja list ir istrynimas uztruko: " <<(double)duration.count()/1000000 << " sekundziu "<<endl;
}


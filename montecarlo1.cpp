#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// funkcija
double sixhump(double *x)
{
    double f = (4- 2.1 * x[0] * x[0] + (pow(x[0],4))/3) * x[0] * x[0] + x[0] * x[1] + (-4+4*x[1]*x[1])*(pow(x[1],2));
    return f;
}


using namespace std;


int main()
{
//struct isskirta_atmintis


{
    cout << "Monte Carlo realizacijos pradzia" << endl;
    cout << "(RANDOM SEARCH METHOD)" << endl;
    // Kintamuju apsirasymas
    double f, x; // Funkcijos reiksmes ir argumentas x
    int n; // Uzdavinio dimensija
    double xSprendinys; // Argumento reiksme
    int fSprendinys; // Uzdavinio sprendinys

    // Vektoriu kurimas, kuriu elementai yra atitiktiniai realus skaiciai

    double virsutinis_rezis, apatinis_rezis, virsutinis_rezis2, apatinis_rezis2; // apsirasome intervalo rezius

    cout << "Iveskite inervalo rezius x1: ";
    cin >> apatinis_rezis >> virsutinis_rezis;
    cout << "Iveskite inervalo rezius x2: ";
    cin >> apatinis_rezis2 >> virsutinis_rezis2;
    cout << "Iveskite vektoriaus ilgi: ";
    cin >> n;

    double vektorius[n], funkcija[200];

    for (int j=0; j<1000; j++)
    {

    for(int i=0; i<n; i++)
    {
        if (i == 0)
        {
           vektorius[i] = rand() * (virsutinis_rezis - apatinis_rezis) / RAND_MAX + apatinis_rezis;
           cout << "Skaicius = " << vektorius[i] << endl; // pakeiciau
        }
        else
        {
           vektorius[i] = rand() * (virsutinis_rezis2 - apatinis_rezis2) / RAND_MAX + apatinis_rezis2;
           cout << "Skaicius = " << vektorius[i] << endl; // pakeiciau
        }

    }


    //dadedam masyva, bei rasom cikla while

//int kitas;
int a;
int b;
int main()
//void WordCountInLine(string line, int& WordCount); //

void isskirta_atmintis(isskirta_atmintis*, int& a, int& b)

//void main "isskiriame atminti" (isskirta_atmintis**)


{
isskirta_atmintis *kitas;
isskirta_atmintis *a=NULL, *b=NULL;
    isskirta_atmintis **array;         //atminties isskyrimas

array=(isskirta_atmintis **)
       a=(isskirta_atmintis **)malloc(1000*sizeof(isskirta_atmintis **));
       b=(isskirta_atmintis **)malloc(1000*sizeof(isskirta_atmintis **));


for(i=0; i<1000; i++)
  array[i]=(isskirta_atmintis **)
              malloc(1000*sizeof(isskirta_atmintis**));

                                 //Nustatome visus masyvo elementus lygius 0
for (i=0; i<1000; i++)
  for (j=0; j<1001; j++)
    array[i][j]=0;

                                  //Apdorojiame masyvo elementà
if(array[1][1000]==1001)
  array[0][0]=1;

                                  //Isvalome atminti
for(i=0; i<1000; i++)
  free(array[i]);
free(array);

}



    // while pabaiga





    cout << "Funkcija = " << sixhump(&vektorius[0]) << endl; // pakeiciau
    cout << "===================================" << endl;
    funkcija[j] = sixhump(&vektorius[0]);
    }

    double min = funkcija[0];
    for (int i=0; i<100; i++)
    {
        if (funkcija[i] < min) min = funkcija[i];
    }
    cout << "MIN: " << min;

    return 0;
}}

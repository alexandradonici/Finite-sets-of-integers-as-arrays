#include <iostream>
#include "multime_perechi.h"
using namespace std;

int main()
{
 int nr1,nr2;
    cout<<"Dimensiunea primului vector este: ";
    cin>>nr1;
    cout<<'\n';

    cout<<"Dimensiunea celui de-al doilea vector este: ";
    cin>>nr2;
    cout<<'\n';

    Vector v1(nr1);
    Vector v2(nr2);
    Vector v3;

    cout<<"Elementele primului vector sunt: ";
    cin>>v1;
    cout<<'\n';

    cout<<"Elementele celui de-al doilea vector sunt: ";
    cin>>v2;
    cout<<'\n';

    v1.modif();
    v2.modif();

    v3=v1+v2;
    if(v3.get()==0)
        cout<<"Reuniunea celor 2 vectori este: multimea vida"<<'\n'<<'\n';
    else
        cout<<"Reuniunea celor 2 vectori este: "<<v3<<'\n'<<'\n';

    v3=v1*v2;
     if(v3.get()==0)
        cout<<"Intersectia celor 2 vectori este: multimea vida"<<'\n'<<'\n';
    else
        cout<<"Intersectia celor 2 vectori este: "<<v3<<'\n'<<'\n';

    v3=v1-v2;
     if(v3.get()==0)
        cout<<"Diferenta dintre primul si al doilea vector este: multimea vida"<<'\n'<<'\n';
    else
        cout<<"Diferenta dintre primul si al doilea vector este "<<v3<<'\n'<<'\n';


    multime_perechi rez(v1,v2);
     if(v1.get()==0 || v2.get()==0)
         cout<<"Produsul cartezian dintre cei doi vectori este: multimea vida"<<'\n';
     else
        cout<<"Produsul cartezian dintre cei doi vectori este: "<<'\n'<<rez;

    return 0;
}


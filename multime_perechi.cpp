#include <iostream>
#include "multime_perechi.h"

using namespace std;

void multime_perechi::set(int i,int p1,int p2)
{
    pereche p;
    p.set(p1,p2);
    if(i<n)
    q[i]=p;
}

multime_perechi::~multime_perechi()
{
    if(q!=NULL)
    delete[]q;
}

istream & operator >>(istream &in,  multime_perechi &z)
{
     int i;
      for(i=0;i<z.n;i++)
        in>>z.q[i];
     return in;
}

ostream & operator <<(ostream &out,  multime_perechi z)
{
     int i;
      for(i=0;i<z.n;i++)
        out<<z.q[i];
     return out;
}

multime_perechi::multime_perechi(Vector v1, Vector v2)
{
    q=new pereche[v1.get()*v2.get()];
    n=v1.get()*v2.get();
    int i,j,k=0;
    for(i=0;i<v1.get();i++)
        for(j=0;j<v2.get();j++)
        {
            set(k,v1.get(i),v2.get(j));
            k++;
        }
}

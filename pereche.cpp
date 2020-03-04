#include <iostream>
#include "pereche.h"
using namespace std;

void pereche::set(int p1,int p2)
 {
     x=p1;
     y=p2;
 }

 istream & operator >>(istream &in,  pereche &p)
 {

     in>>p.x>>p.y;
     return in;

 }

 ostream & operator <<(ostream &out,  pereche p)
 {

     out<<"("<<p.x<<","<<p.y<<")"<<'\n';
     return out;

}

  pereche& pereche::operator =(const pereche &a)
 {
     x=a.x;
     y=a.y;
 }

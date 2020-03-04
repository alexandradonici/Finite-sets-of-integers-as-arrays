#include <iostream>
#include "Vector.h"
using namespace std;

Vector::Vector()
 {
    n=0;
    a=NULL;

}

Vector::Vector(int n)
{
    int i;
    this->n = n;
    this->a=new int[n];
    for (i = 0; i < n; i++){
        this->a[i] = 0;
    }

 }

 Vector::Vector(const Vector &v)
 {
    int i;
    this->n = v.n;
    this->a=new int[n];
    for (i = 0; i < n; i++){
        this->a[i] =v.a[i];
    }

 }

Vector::~Vector()
{
    if(a!=NULL)
    delete[]a;
}

  istream& operator>>(istream& in,  Vector &v)
 {
      int i;
      for(i=0;i<v.n;i++)
        in>>v.a[i];
     return in;
 }

   ostream& operator<<(ostream& out,  Vector v)
 {
      int i;
      for(i=0;i<v.n;i++)
        out<<v.a[i]<<" ";
     return out;
 }

 void Vector::sortare()
 {
     int i,j,aux;
     for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
     {
         aux=a[i];
         a[i]=a[j];
         a[j]=aux;
     }
 }

 void Vector::modif()
 {
     int i,j,k;
     for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]==a[j])
     {
         for(k=j;k<n;k++)
            a[k]=a[k+1];
         n--;
         j--;
     }
     sortare();

 }

 int Vector::get()const
 {
     return n;
 }

 int Vector::get(int i) const
 {
     return a[i];
 }

  Vector& Vector::operator=(const Vector &ob)
 {
     if(this==&ob)
        return *this;
     delete[]a;
     n=ob.n;
     a=new int[ob.n];
     int i;
     for(i=0;i<ob.n;i++)
        this->a[i]=ob.a[i];
     return *this;
 }

 Vector operator +(Vector v1,Vector v2)
 {
     Vector v3(v1.n+v2.n);
     int i;
     v3.n=0;
     for(i=0;i<v1.n;i++)
        v3.a[v3.n++]=v1.a[i];
     for(i=0;i<v2.n;i++)
        v3.a[v3.n++]=v2.a[i];
    v3.modif();
     return v3;

 }

 Vector operator *(Vector v1,Vector v2)
 {
     Vector v3(v1.n+v2.n);
     v3.n=0;
     int i,j,ok=0;
     for(i=0;i<v2.n;i++)
     {
         ok=0;
         for(j=0;j<v1.n && ok==0;j++)
            if(v1.a[j]==v2.a[i])
            ok=1;
        if(ok==1)
            v3.a[v3.n++]=v2.a[i];

     }
     return v3;

 }

 Vector operator -(Vector v1,Vector v2)
 {
     Vector v3(v1.n);
     v3.n=0;
     int i,j,ok=0;

     for(i=0;i<v1.n;i++)
     {
         ok=0;
         for(j=0;j<v2.n && ok==0;j++)
            if(v1.a[i]==v2.a[j])
            ok=1;
        if(ok==0)
            v3.a[v3.n++]=v1.a[i];

     }
     return v3;

 }


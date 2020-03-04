#include <iostream>
using namespace std;

class Vector
{
   public:
        Vector();
        Vector(int n);
        Vector(const Vector &v);
        ~Vector();
        friend istream & operator >>(istream &in,  Vector &v);
        friend ostream & operator <<(ostream &out,  Vector v);
        Vector& operator =(const Vector &ob);
        void sortare();
        void modif();
        int get(int i) const;
        int get()const;
        friend Vector operator +(Vector v1, Vector v2);
        friend Vector operator *(Vector v1, Vector v2);
        friend Vector operator -(Vector v1, Vector v2);


    private:
        int n;
        int *a;

};


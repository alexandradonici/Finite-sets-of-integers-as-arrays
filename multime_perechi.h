#include <iostream>
#include "pereche.h"
#include "Vector.h"
using namespace std;

class multime_perechi
{

    private:
        int n;
        pereche *q;

    public:
        multime_perechi(int nr)
        {
            n=nr;
            q=new pereche[nr];

        }

        multime_perechi()
        {
            n=0;
            q=NULL;
        }
        ~multime_perechi();
        void set(int i, int p1, int p2);
        friend istream & operator >>(istream &in,  multime_perechi &z);
        friend ostream & operator <<(ostream &out,  multime_perechi z);
        multime_perechi (Vector v1,Vector v2);

};


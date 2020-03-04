#include <iostream>
using namespace std;

class multime_perechi;

class pereche
 {

    public:
        pereche(int a,int b):x(a),y(b)
        {
        }
        pereche():x(0),y(0)
        {
        }

        void set(int p1,int p2);
        friend istream & operator >>(istream &in,  pereche &p);
        friend ostream & operator <<(ostream &out,  pereche p);
        friend class multime_perechi;
        pereche& operator =(const pereche &ob);

   private:
        int x;
        int y;
 };

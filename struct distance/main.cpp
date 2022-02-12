#include <iostream>

using namespace std;
typedef struct Distance{

int feet;
float inch;

}distances;

struct Room{        // if we do struct and have member of another struct like x will have member of disatance x like feet and inch

 Distance x,length;

};
int main()
{
   //struct distance d1={24,10.1}; do it if D of diatance samll or not do   typedef
  // struct distance d2={20,10.1};
  Distance d12;         // do it without word struct beause D is capital
  distances d1={24,10.1};
  distances d2={20,10.1};
    distances *d22;
    d22=&d1;
    //d22=&distances; ده غلط اصلا
    d22->inch=5; //it is equal d12.inch=5 but with another object or (*d22).inch=5;
    //*d22.inch=5; مش عارف العيب فى ايه بجد هنا

    cout<<(*d22).inch<<d1.inch<<endl;
   struct Room r;
    //distance d1,d2  ,d3;
    struct Distance d3;
   // d1.feet=24;d1.inch=10;
   // d2.feet=20;d2.inch=10;

    d3.feet=d1.feet+d2.feet;
    d3.inch=d1.inch+d2.inch;
    if(d3.inch>=12){
        d3.inch-=12;
        d3.feet++;
    }

    cout << d3.feet << endl;
    cout << d3.inch << endl;
    cout<<r.x.feet; //Ïì áæ ÚÇíÒ ÇÚãá ãÓÇÍÉ ÝÇäÊ ßÏÇ Çáwidth Ýíå Çáfeet/inch


    //void printBook( struct Books *book )
    //   printBook( &Book2 );
    return 0;
}

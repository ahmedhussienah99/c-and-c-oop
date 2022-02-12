#include <iostream>

using namespace std;
typedef struct distance{

int feet;
float inch;

}distances;
distances sum (distances d11,distances d22);

int main()
{
    distances d1={24,10.1};
    distances d2={20,10.1};
    struct distance d3;
    d3=sum(d1,d2);
     cout << d3.feet << endl;
    cout << d3.inch << endl;
    return 0;
}
distances sum (distances d11,distances d22){

    distances d33;
    d33.feet=d11.feet+d22.feet;
    d33.inch=d11.inch+d22.inch;
    if(d33.inch>=12){
        d33.inch-=12;
        d33.feet++;
    }
return d33;
}

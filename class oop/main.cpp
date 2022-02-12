#include <iostream>

using namespace std;
 class Distance { //

 private :  //private data not can show out of class alltime be variable
     int feet;
     int inch;
 public :    //public data  can show out of class alltime be function
    Distance(){     // Constructor not have argument and name like name of class //no return anything
    feet=0; inch=0;
    }
  Distance(int x,int y){    // Constructor have argument and name like name of class//no return anything
    feet=x; inch=y;
    }
    void putdata(){
    cout<<"enter feet "; cin>>feet;
    cout<<"enter inch "; cin>>inch;
    }
    void showdata(){
    cout<<"feet"<<feet<<endl;
    cout<<"inch"<<inch<<endl;
    }

    //Distance sum(Distance d1,Distance d2);
    Distance sum(const Distance d2)const;
 };
int main()
{

    Distance dd1,dd2(10,20),dd3;//dd1--feet=0/inch=0 dd2--feet=10 inch=20
    dd1.putdata(); //change dd1.feet and inch
    dd2.putdata();//change dd2.feet and inch
    dd1.showdata();
    dd2.showdata();
    dd3=dd1.sum(dd2);  //dd1/dd2 with my will give value
    dd3.showdata();
    return 0;
}

Distance Distance :: sum(const Distance d2)const // const Ïì ááãÏÇÎáÇÊ ãÔ åÊÊÛíÑ ããßä ááÔÈÍ áÇäå ãÔ åíÊÛíÑ Ìæå ÇáÏÇáÉ æããßä ãßÊÈåÇÔ
    { //ÇäÇ ÎáíÊ ÇáãÊÛíÑ ÇáÊÇäì åæ ÇáÔÈÍ Çááì åÚÑÝ Èíå ÈÑå ããßä ÇÝßÓ æÇÚãá ãÊÛíÑ ÊÇäì d3=d1.sum(d2) or d3=d4.sum(d1,d2)
    Distance d3;
    d3.feet=feet+d2.feet;
    d3.inch=inch+d2.inch;
    if(d3.inch>12){ d3.inch-=12; d3.feet++;  }
    return d3;
    }

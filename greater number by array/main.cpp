#include <iostream>

using namespace std;
int maxi(int x[],int s);
int main()
{
    const int siz=5;
   int y[siz],z;
   for(int j=0;j<siz;j++){
    cin>>y[j];

   }

   z=maxi(y,siz);
   cout<<y[z];
    return 0;
}
int maxi(int x[],int s){
     int y=0;
     int m =x[0];
    for(int i=0;i<s;i++){

       if(m<x[i]){
        y=i;
        m=x[i];
       }
    }
return y;

}

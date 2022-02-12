#include <iostream>

using namespace std;
int fact(int n);
int main()
{
    int i;
    i=fact(4);
    cout<<i;
    return 0;
}
int fact(int n){

if((n==1)||(n==0)){return 1;}
else{

    return n*fact(n-1);

}

}

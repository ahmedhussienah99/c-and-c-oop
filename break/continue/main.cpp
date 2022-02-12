#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=1;i<=10;i++){

        if(i%2==0){
            continue;
            }
            cout<<i<<endl;
        }

     for(i=1;i<=10;i++){

        if(i%2==0){
            break;
            cout<<i<<"break"<<endl;
            }

        }


    return 0;
}

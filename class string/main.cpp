#include <iostream>
#include<cstring>
using namespace std;

class String{

private:
    enum{s=80};
    char st[s];

public :

    String(){   st[0]='\0';}
    String(char arr[]){   strcpy(st,arr);}
    void show(){    cout<<st;}

    void contact(String s1,String s2){

        if(strlen(s1.st)+strlen(s2.st)<s){

            strcat(s1.st,s2.st);
        }
        else{cout<<"it is long";}

    }
};
int main()
{

    String s11("hello"),s22("ahmed"),s33;

    s11.show();
    s22.show();
    s33.contact(s11,s22);
    s33.show();


    return 0;
}

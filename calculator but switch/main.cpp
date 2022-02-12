#include <iostream>

using namespace std;

int main()
{

    int a,b,c,d,e,f;
    char divide,operation;
    cout<<"enter your operation"<<endl;
    cin>>a>>divide>>b>>operation>>c>>divide>>d;
    switch(operation){
    case '+':  e=a*d+c*b; f=b*d ;             break;
    case '-':  e=a*d-c*b; f=b*d  ;            break;
    case '*':  e=a*c; f=b*d       ;       break;
    case '/':  e=a*d; f=b*c        ;        break;
    default: cout << "wrong" << endl;

    }
    cout << "result=" <<e<<"/"<<f<< endl;
    return 0;
}

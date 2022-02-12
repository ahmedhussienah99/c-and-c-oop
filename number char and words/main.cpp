#include <iostream>

using namespace std;

int main()
{

    char ch;
    int c=0,word=1;

    while((ch=getchar())!='\r'){

        if(ch==' '){word+=1;}
        else if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z'))){
            c=c+1;
        }
        else {break;}

    }
    cout<<"words"<<word<<endl;
    cout<<"char"<<c;

    return 0;
}

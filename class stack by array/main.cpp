#include <iostream>

using namespace std;

class Stack{

private :
    enum{s=10 }; // i can put it in global variable
    int top;
    int st[s];

public :

    Stack(){ top=-1; }

    bool isempty(){
    if(top==-1){
        return true;
    }
    else{return false;}
    }
      bool isfull(){
    if(top==s-1){
        return true;
    }
    else{return false;}
    }
    void push(int input){

        if(!(isfull())){
        top++;
        st[top]=input;
        }
        else{cout<<"overflow error";}

    }
 int pop(){
         if(!(isempty())){
        return st[top--];
        //--top; Ïì ÛáØ ÚÔÇä ÈÚÏ return íÇ Ðßì
         }
         else{cout<<"underflow error";}

    }

};
 int s=5;
 void reverses(int a[]);
int main()
{   int a[5]={1,2,3,4,5};
    Stack s1,s2;
    s1.push(10);
    cout<<s1.pop()<<endl;;
    for(int j=0;j<s;j++){
        cout<<a[j]<<endl;
    }
    reverses(a);
    for(int j=0;j<s;j++){
        cout<<a[j]<<endl;
    }

    return 0;
}
 void reverses(int a[]){
 Stack s22;
    for(int i=0;i<s;i++){
        s22.push(a[i]);
        //a[i]= s22.pop();
       // cout<<a[i]<<endl;
    }
  for(int j=0;j<s;j++){

       a[j]= s22.pop();
      // cout<<a[i]<<endl;
    }

 }

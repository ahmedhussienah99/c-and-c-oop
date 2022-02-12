#include <iostream>
#include <math.h>
using namespace std;

class Complex{

protected :
    double re,im;
private :

    int x,y;
public :
// the this pointer  ده بدل الشبح ما نكتب المتغيرات عادى
    double ree;
    Complex(double a=0,double b=0,double c=0){
    this->re=a;   this->im=b;
    }

    ~Complex(){}
    void getdata(){
    cout<<"enter real"; cin>>re;
    cout<<"enter image"; cin>>im;
    }
    void showdata()const{
   cout<<"enter real"<<re;
    cout<<"enter image"<<im;
     cout<<"enter image"<<ree;
    }
void add(const Complex c11,const Complex c22);
Complex sub(const Complex c22)const;        // do const if variable not change and const to phantom outside () phantom is object will call function by that
                                            //like f=c5.sub(c6); c5 is phantom
double mag()const;
Complex operator+(const Complex c22)const;
Complex operator-(const Complex c22)const;
Complex operator*(const Complex c22)const;
void  operator =(const Complex c22);
void  operator +=(const Complex c22);
void  operator -=(const Complex c22);
void  operator *=(const Complex c22);
bool operator >(const Complex c22)const;
bool operator <(const Complex c22)const;
bool operator >=(const Complex c22)const;
bool operator <=(const Complex c22)const;
bool operator ==(const Complex c22)const;
bool operator !=(const Complex c22)const;

};
class Complex2:public Complex   // if do :private complex the public in complex will be private and can not do in main by object of complex2
                                //like complex c2; a=c2.w; it impossible Complex be private to complex2
                                // if do :publec complex the public in complex will be public and can  do in main by object of complex2
                                //like complex c2; a=c2.w; it possible Complex be public to complex2
{                               //complex2 is son of Complex by :public Complex{}; can use public and protected  at class of son
                                //complex2 is son of Complex by :private Complex{}; can use public and protected at class of son
protected:
    int q;
public:
    double w;



    Complex2(double a=0,double b=0,int y=0,int x=0)//:Complex(a,b) ممكن كدا او جوه عادى بقى
    {
        Complex(a,b);
    q=x;
    }


    Complex usesub(const Complex c22)const{
    Complex2 c44;
    double g,v;
        //beaucse they are public and protected can use at class son
        g = c44.re;//or g = re; or c44.Complex::re; or Complex::re;
        g = c44.ree; //or g = ree; or c44.Complex::ree; or Complex::ree;

       Complex::sub(c22); // or sub(c22) i will write Complex::sub(); if class son have function have same name

    }

void showdata()const{
   cout<<"enter real"<<re;
    cout<<"enter image"<<im;
     cout<<"enter image"<<ree;
    }
};
//multiple inheritance
class Complex3 : public Complex, public Complex2
{
};
//level of inheritance
// هو كدا هيورث ثفات الاب والجد طب افرض عرفت منه اوبجيكت فى مين ونديت على دالة بيبص الاول هى فيه ولا لا لو لا يروح للاب لوللا يروج للجد
class Complex5:public Complex3{


};
//class within class
// هو مش توريث الكومبيلر معتبره متغير واحد مع ان الكلاس كومبلكس فيه متغيرات كتير
//مقدرش استخدم الدوال بتاعته غير لما اعرف اوبجكيت وانادى بيه غير كدا مش زى توريث
//طب افرض عايز تعمل اداخال للمتغيرات هتظر تعمل الددالة من جديدة جوه وتكتب جواها دالة كلاس متعرف منه اوبجكت
class Complex4

{
    private:
    Complex c;
    public:
        void showdata(){
        c.showdata();
        }

};
////////////////////////////////////
//friend function
class B;
class A{
private: int data;
public:
    friend int sum(A a,B b);
};
class B{
private: int data;
public:
        friend int sum(A a,B b);

};
int sum(A a,B b){
return(a.data+b.data);
}
/////////////////////////////////////
int main()
{
    Complex c4,c5,c6(10,15);
    Complex2 c55,c66(5,6);
    double f;
    f=c55.ree; // or f=c55.Complex::ree; if we outside class we need to use any variable or function public need to object
                // if it is protected or private can not use in main

    c66.ree=5; // if it is c6.ree=5 when i change at public ree at son not change at father
  //  c6.ree=10; //if it is c6.ree=5 when i change at public ree at father not change at son
   c6.showdata(); //will print ree be garbsh beacuse i not give value at constructor of it
   c66.showdata();
   c4.add(c5,c6); //will save result at phantom c4 call function by it and save reult at c4
   cout<<endl;
   c4.showdata(); // will call by c4 do showdata by values do at add
   c5.showdata(); //will call by c5 do showdata by values do constructor c5 it is 0,0

   //ambiguity of multiple inheritance
   Complex3 c44;
   //c44.show(); هو مش عارف هياخد انهى دالة بتاعت الابين بتوعه
    //c44.Complex::showdata();
    c44.Complex2::showdata();
    c44.Complex::showdata();

// memory managment by new and delete
// do it in calss but constructor will do new and destructor will do delete
char * str="aasaa";
char*ptr;
ptr=new char[len+];
//strcpy(ptr,str) ثم
delete[]ptr;
Complex *pf =new Complex;
delete ptr;

//pointer to object to access by pointer ->
Complex *c8;
c8->showdata;
    return 0;

}


void Complex::add(const Complex c11,const Complex c22){
    re=c11.re+c22.re;   im=c11.im+c22.im;
}


Complex Complex::sub(const Complex c22)const{
    Complex c33;
    c33.re=re-c22.re;   c33.im=im-c22.im;
    return c33;
}

double Complex ::mag()const{
return sqrt(re*re+im*im);
}
Complex Complex::operator+(const Complex c22)const{
Complex c33;
 c33.re=re+c22.re;   c33.im=im+c22.im;
return c33;
}
Complex Complex::operator-(const Complex c22)const{

    Complex c33;
    c33.re=re+c22.re;   c33.im=im+c22.im;
    return c33;

}
Complex Complex::operator*(const Complex c22)const{
Complex c33;
c33.re=re-c22.re;   c33.im=im-c22.im;
return c33; //maybe double x=re-c22.re; double y=im-c22.im; return complex(x,y);

}
void Complex:: operator =(const Complex c22){
    re=c22.re;
    im=c22.im;
}
void Complex:: operator +=(const Complex c22){
    re+=c22.re;
    im+=c22.im;
}
void Complex:: operator -=(const Complex c22){
    re-=c22.re;
    im-=c22.im;
}
void Complex:: operator *=(const Complex c22){ //ÚãáÊ ÇáãÊÛíÑ ÚÔÇä Çáreal åíÊÛíÑ Ýì ÇáÇæá ÈÊÇáì Çáimg åíØáÚ ÛáØ
    double x=re*c22.re-im*c22.im;
      im=re*c22.im+im*c22.re;
      re=x;
}
bool Complex:: operator >(const Complex c22)const{
    return (mag()>c22.mag());
}
bool Complex:: operator <(const Complex c22)const{
    return (mag()<c22.mag());
}
bool Complex:: operator >=(const Complex c22)const{
    return (mag()>=c22.mag());
}
bool Complex:: operator <=(const Complex c22)const{
    return (mag()<=c22.mag());
}
bool Complex:: operator ==(const Complex c22)const{
    return (mag()>c22.mag());
}
bool Complex:: operator !=(const Complex c22)const{
    return (mag()>c22.mag());
}

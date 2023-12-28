#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
    Complex(int x = 0,int y = 0){
        real = x;
        imag = y;
    }
    Complex operator +(Complex c){
        Complex res;
        res.real = this->real+c.real;
        res.imag = this->imag + c.imag;
        return res;
    } 

    Complex operator * (Complex c){
        Complex res;
        res.real = (this->real*c.real) - (this->imag*c.imag);
        res.imag = (this->real*c.imag) + (c.real*this->imag);
        return res;
    }

    void display(){
        cout<<real<<" + "<<imag<<"j"<<endl;
    }
};

int main(){
    Complex a(5,8);
    a.display();
    Complex b(13,4);
    b.display();
    Complex res = a + b;
    res.display();
    Complex res2 = a*b;
    res2.display();
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class complex{
    float real,img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(float x, float y){
        real=x;
        img=y;
    }
    
    complex operator + (complex c){
        complex temp;
        temp.real= real+c.real;
        temp.img= img+c.img;
        return temp;
    }
    complex operator- (complex c){
        complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
    
    complex operator* (complex c){
        complex temp;
        temp.real = (real*c.real)-(img*c.img);
        temp.img = (img*c.img)+(real*c.real);
        return temp;
    }
    
    friend istream &operator>> (istream &in, complex &c){
        in>>c.real>>c.img;
        return in;
    }
    friend ostream &operator << (ostream &out, complex &c){
        out<<c.real<<" + "<<c.img<<" i"<<endl;
        return out;
    }
};

int main() {
    complex c1,c2,c3,c4,c5;
    cout<<"Enter real and img part of first num: "<<endl;
    cin>>c1;
    cout<<"Enter real and ing part of second number: "<<endl;
    cin>>c2;
    cout<<"Addition is: ";
    c3=c1+c2;
    cout<<c3;
    cout<<"Substraction is :";
    c4=c1-c2;
    cout<<c4;
    cout<<"Multiplication is: ";
    c5=c1*c2;
    cout<<c5;
    return 0;
}

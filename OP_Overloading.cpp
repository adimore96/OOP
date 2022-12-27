#include <iostream>
using namespace std;

class complex{
    float real,img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(float x,float y){
        real = x;
        real = y;
    }
    
    complex operator+ (complex c){
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    
    friend istream &operator >> (istream &in ,complex &c){
        in>>c.real>>c.img;
        return in;
    }
    friend ostream &operator << (ostream &out, complex &c){
        out<<c.real<<" + "<<c.img<<" i "<<endl;
        return out;
    }
    complex operator- (complex c){
        complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
    complex operator* (complex c){
        complex temp;
        temp.real=(real*c.real)-(img*c.img);
        temp.img=(img*c.real)+(real*c.img);
        return temp;
    }
};

int main() {
    complex c1,c2,c3,c4,c5;
    int ans,ch;
    do{
    cout<<"********************Menu********************";
    cout<<"\n1. Addition \n2. Substraction\n3. Multiplication"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>ch;
    cout<<"Enter the real & img part of first number: "<<endl;
    cin>>c1;
    cout<<"Enter the real & img part of second number: "<<endl;
    cin>>c2;
    switch(ch){
        case 1:{
            cout<<"Addition : ";
            c3=c1+c2;
            cout<<c3;
            break;
        }
        case 2:{
            cout<<"Substraction: ";
            c4=c1-c2;
            cout<<c4;
            break;
        }
        case 3:{
            cout<<"Multiplication : ";
            c5=c1*c2;
            cout<<c5;
            break;
        }
        default: {
            cout<<"Enter Valid Choice: ";
        }
    }
    cout<<"Do you want to conitnue? (1/0)";
    cin>>ans;
    }while(ans==1);
    return 0;
}

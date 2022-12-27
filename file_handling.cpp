#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    string data;
    fout.open("Hello2.txt");
    if(!fout){
        cout<<"Error to open file";
        exit;
    }
    cout<<"Write Something in File:\n to exit writing file use : D and Enter\n";
    while(getline(cin,data)){
        if(data=="D"){
            break;
        }
        fout<<data<<endl;
    }
    fout.close();

    ifstream in;
    
    if(!in){
        cout<<"Error to opening file: "<<endl;
        exit;
    }
    in.open("Hello2.txt");
    cout<<"\n Reading from file: \n";
    while(in){
        getline(in,data);
        cout<<data<<endl;
    }
    
    in.close();

    return 0;
}

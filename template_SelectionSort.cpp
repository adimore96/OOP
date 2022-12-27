//Write a function template selection Sort. Write a program that inputs, sorts and outputs an integer array and a float array.
#include<iostream>
using namespace std;

template <class z>
class templates{
    z arr[100];
    int num;
    public:
    void accept(){
        int i;
        cout<<"Enter number of elements in your array"<<endl;
        cin>>num;
        for(i=0;i<num;i++){
            cout<<"Enter element "<<i+1<<" : " ;
            cin>>arr[i];
        }
    }

    void selsort(){
        int i,j,minElement;
        for(i=0;i<num-1;i++){
            minElement=i;
            for(j=i+1;j<num;j++){
                if(arr[j]<arr[minElement]){
                    minElement=j;
                }
            }
            swap(arr[minElement],arr[i]);
        }

        cout<<"Displaying Sorted Array Elements:"<<endl;
        for(i=0;i<num;i++){
            cout<<arr[i]<<" "<<endl;
        }
    }
};

int main(){
    templates<int> t1;
    templates<float> t2;
    int ch;
    cout<<"\n1. Selection sort for Integer Array\n2. Selection Sort for Float Array\nEnter your choice: "<<endl;
    cin>>ch;
    switch(ch){
        case 1:{
            t1.accept();
            t1.selsort();
            break;
        }
        case 2:{
            t2.accept();
            t2.selsort();
            break;
        }
    }
    return 0;
}

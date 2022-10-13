#include<iostream>
using namespace std;
/*
class Student{

public:
    string name;
    int id;
    float cgpa;
};
*/

int main(){
    int arr[6];
    int mid_index=0;
    int temp=0;
       //Student s1;
      //s1.
        for(int i=0;i<6;i++){
            cin>>arr[i];
        }

        for(int i=0;i<6;i++){
            mid_index=i;
            for(int j=i+1;j<6;j++){
                if(arr[mid_index]>arr[j]){
                    mid_index=j;
                }
            }
            temp=arr[mid_index];
            arr[mid_index]=arr[i];
            arr[i]=temp;
        }


        for(int i=0;i<6;i++){
            cout<<arr[i]<<" ";
        }
return 0;
}

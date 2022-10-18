#include <iostream>
using namespace std;

class Student{
 public:
     char name[30];
     double cgpa;
     int id;
     int credit;


     void putinfo(){
        cin>>name>>cgpa>>id>>credit;
     }

     void getinfo(){
        cout<<name<<" "<<cgpa<<" "<<id<<" "<<credit<<endl;
     }
};

int main(){
    int count;
    Student arr[3],temp,temp1;

    for(int i=0;i<3;i++){
        arr[i].putinfo();
    }


    for(int i=0;i<3-1;i++){
        for(int j=0;j<3-i-1;j++){
            if(arr[j].cgpa>arr[j+1].cgpa){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }

    }


     for(int i=0;i<3;i++){
        arr[i].getinfo();
    }
    int mid_index;


     for(int i=0;i<3;i++){
            mid_index=i;
            for(int j=i+1;j<3;j++){
                if(arr[mid_index].credit>arr[j].credit){
                    mid_index=j;
                }
            }
            temp1=arr[mid_index];
            arr[mid_index]=arr[i];
            arr[i]=temp1;
        }

   for(int i=0;i<3;i++) {
        arr[i].getinfo();}

        cout<<count<<endl;



return 0;
}


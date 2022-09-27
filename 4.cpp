#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,2,3,4,5,3,6,7};
    int n=3;
    int count=0;

        for(int i=0;i<10;i++){
            if(arr[i]==n)
                count++;
        }
        cout<<count;


return 0;
}

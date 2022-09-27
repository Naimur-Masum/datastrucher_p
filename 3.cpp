#include <iostream>

using namespace std;

int removeDuplicates(int arr[],n){
    if(n==0||n==1)
        return n;

    int  temp[n];
    int j=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+i])
            temp[j++]=arr[i];
    }
    temp[j++]=arr[n-1];

    for(int i=0;i<j,i++){
        arr[i]=temp[i];
    }
    return j;
}

int main(){
    int arr[]={1,2,2,3,3,4,5,5,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0])

    n=removeDuplicates(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}


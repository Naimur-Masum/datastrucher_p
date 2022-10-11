#include<iostream>
using namespace std;

int main(){
    int arr[10][10],trans[10][10],r,c;
    r=3;
    c=4;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            trans[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
           cout<< trans[i][j]<<" ";

           if(j==r-1)
            cout<<endl;
        }
    }
return 0;
}

#include<iostream>
using namespace std;

class Product{

    public:
        string name;
        int id;
        string catagory;
        float unite_price;

        Product(string name,int id,string catagory,float unite_price){
        this->name=name;
        this->id=id;
        this->catagory=catagory;
        this->unite_price=unite_price;
        }

        string getName(){
        return name;
        }

        void display(){
        cout<<"name  :"<<name<<endl;
        cout<<"id  :"<<id<<endl;
        cout<<"catagory  :"<<catagory<<endl;
        cout<<"unite_price  :"<<unite_price<<endl;
        }
        };
int main(){
    Product pb[3]={Product("physics",22,"science book",345.50),
    Product("chemistry",33,"science book",400.00),Product("BGS",66,"history",255.99)};
for(int i=0;i<3;i++){
    pb[i].display();
}
int op;
cin>>op;

switch(op){
    case 1:
        {
           for(int i=0;i<2;i++){
            int min_in=i;
            for(int j=i+1;j<3;j++){
                if(pb[j].unite_price<pb[min_in].unite_price){
                    min_in=j;

                }


                        Product t=pb[min_in];
                        pb[min_in]=pb[i];
                        pb[i]=t;

            }
           }
           for(int i=0;i<3;i++){
    pb[i].display();
}

        }

    case 2:{
        for(int i=0;i<2;i++){

            for(int j=1;j<3;j++){
                if(pb[j].unite_price<pb[i].unite_price){
                 Product t=pb[j];
                        pb[j]=pb[i];
                        pb[i]=t;}

            }
        }
        for(int i=0;i<3;i++){
    pb[i].display();
}

    }

    case 3:{
        string search;
        cin>>search;
        int f=0;

        for(int i=0;i<3;i++){
        if(pb[i].getName()==search){
    cout<<pb[i].getName()<<endl;
     pb[i].display();
    f++;}
        }

       if(f==0){
        cout<<"not exist";
       }


}


}
return 0;}

#include<iostream>
using namespace std;
int main()
{
    int buying_price,selling_price;
    cout<<"Enter Buying Price : ";
    cin>>buying_price;

    cout<<"Enter Selling Price : ";
    cin>>selling_price;

    if (buying_price < selling_price){
        cout<<"Profit of: "<<selling_price - buying_price;
    }else if (buying_price > selling_price ){
        cout<<"Loss of : "<<buying_price - selling_price;
    }else{
        cout<<"No loss no profit";
    }

    return 0;
}
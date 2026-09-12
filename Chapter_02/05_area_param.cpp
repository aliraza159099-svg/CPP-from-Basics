#include<iostream>
using namespace std;

int main()
{
    int len,wid;
    cout<<"Enter length : ";
    cin>>len;

    cout<<"Enter width : ";
    cin>>wid;

    int area = len * wid;
    int parameter = 2*(len+wid);

    cout<<"The area of rectange is : "<<area<<endl;
    cout<<"The parameter of rectangle is : "<<parameter<<endl;

    if(area>parameter){
        cout<<"Area is greater than parameter\n";
    }else if(area<parameter){
        cout<<"Paramter is greater than area\n";
    }else{
        cout<<"Both the area and the parameter are equal";
    }

    return 0;
}
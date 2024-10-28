#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    char operations;
    cout<<"enter the value of num1 and num2 \n";
    cin>>num1>>num2;
        cout<<"any operations perform to type int value in range of 1 to 4\n";

    cout<<"  enter an operations\n 1.+\n 2.-\n 3.*\n 4./\n";
    cin>>operations;
    switch(operations){
    case '1':
        cout<<num1+num2;
        break;

case '2':
        cout<<num1-num2;
        break;

    case '3':
        cout<<num1*num2;
        break;

case '4':
        cout<<num1/num2;
        break;

}
return 0;
}

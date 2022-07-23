#include<iostream>
using namespace std;

int main(){

    int n1,n2;
    cout << "Enter two numbers";
    cin >> n1 >> n2;

    int op;
    cout << "Enter the operator";
    cin >> op;


switch(op)
{
    case '+':
       cout << n1+n2 << endl;
       break;
    case '-':
       cout<< n1-n2 << endl;
       break;
    case '*':
       cout<< n1*n2 << endl;
       break;
    case '/':
       cout<< n1/n2 << endl;
       break;
    default:
     cout<< "TRY AGAIN" << endl;
     } 
     return 0;

}
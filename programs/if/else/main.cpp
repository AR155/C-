#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt Untitled-1", "r" , stdin);
      freopen("output.txt Untitled-2", "w", stdout);
    #endif

    int savings;
    cin>>savings;


    if(savings>5000)
    {
        cout<<"Neha\n";

    }
    else if (savings>2000)
       { cout<<"Rashmi\n";

     }   
    else{
      cout<<"Friends\n";
    }

    return 0;
}
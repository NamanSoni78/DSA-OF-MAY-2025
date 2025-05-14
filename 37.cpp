#include <iostream>
// #include <bits/stdc++.h>

using namespace std;

int hmOne(int a, int b){
    int o = 0;
    for (int i=1 ; i<=32 ; i++){

        if (a&1==1){
            o++;
            a>>=1;
        }
        else{
            a>>=1;
        }
        if (b&1==1){
            o++;
            b>>=1;
        }
        else{
            b>>=1;
        }
    }
    return o;
}


int main()
{
    cout<<"Enter Both Numbers to find One in Binary representaion: ";
    int a;
    int b;
    cin>>a>>b;
    cout<< hmOne(a,b) <<endl;




    
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter The Number: ";
    int num;
    cin>>num;
    int i = 2;
    int p=2;
    while(i<num){
        if(num%i == 0){
            p = 0;
            i = num;
        }
        else{
            p=1;
            i++;
        }

    }
    // cout<<"Number is Prime" << endl;
    if (p==1){
        cout<<"Number is Prime" << endl;
    }
    else if (p==0){
     cout<<"Number is Not Prime" << endl;
    }
    system("pause");
}

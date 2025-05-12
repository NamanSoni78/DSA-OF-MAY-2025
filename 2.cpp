#include<iostream>
using namespace std;
int main()
    {
        cout<<"Enter The Number: ";
        int num;
        cin>>num;
        if (num>0)
        {
            cout<< num << " is a Positive Number" << endl;
        }
        else{
            if (num<0)
            {
                cout<< num << " is a Negative Number" << endl;
            }
            else{
                cout<<num << " is Zero" << endl;
            }

        }
        system("pause");
    }

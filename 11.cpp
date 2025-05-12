#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number Of  Rows x Cols: ";
    int num;
    cin>>num;
    int i = 1;
    int j=1;
    int count=1;
    while(i<=num){
        j=1;
        while(j<=num){
            cout<<count << " ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    system("pause");

}

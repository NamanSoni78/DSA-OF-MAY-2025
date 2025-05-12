#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number Of  Rows: ";
    int num;
    cin>>num;
    int row = 1;
    int col=1;
    while(row<=num){
        int count = row;
        col = 1;
        while(col<=num){
            cout<<char(64+count);
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
    system("pause");
}

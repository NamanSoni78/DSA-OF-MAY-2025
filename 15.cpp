#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number Of  Rows: ";
    int num;
    cin>>num;
    int row = 1;
    int col=1;
    int count=1;
    while(row<=num){
        col=1;
        count=row;
        while(col<=row){
            cout<<count << " ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
    system("pause");
    return 0;
}

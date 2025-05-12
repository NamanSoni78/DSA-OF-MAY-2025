#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number Of  Rows: ";
    int num;
    cin>>num;
    int row = 1;
    int col=1;
    while (row<=num)
    {
        col=1;
        while(col<=row){
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    
    
    system("pause");
}

#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number of Cols : ";
    int cols;
    cin>>cols;
    
    cout<<"Enter Number of Rows : ";
    int rows;
    cin>>rows;
    int ir = 1;
    while(ir<=rows){
        int ic=1;
        while(ic<=cols){
            cout<<char(64+ir);
            ic++;

        }
    cout<<endl;
    ir++;

    }



    system("pause");
}

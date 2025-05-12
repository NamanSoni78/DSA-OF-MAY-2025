#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Number Of  Rows: ";
    int num;
    cin >> num;
    int row = 1;

    while (row <= num)
    {
        int space = num - row;
        int nums = num - space;
        int xyz = space;
        int dump = num;
        while (nums < num)
        {
            cout << " ";
            nums++;
        }
        while (xyz + 1 < num)
        {
            cout<<nums-num+1;
            xyz++;
            nums++;

        }
        while(dump<=num){
            cout<<row;
            dump++;
        }
        while (space + 1 < num)
        {
            cout << num-space-1;
            space++;
        }
            row++;
            cout << endl;
    }
    
    system("pause");
}

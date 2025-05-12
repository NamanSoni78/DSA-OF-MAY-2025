#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter The Number: ";
    int num;
    cin>>num;
    int i = 1;
    int sum = 0;
    while (i<=num)
    {
        sum = sum+i;
        i++;
    }
    cout<<sum << endl;
    system("pause");
}


#include <iostream>
using namespace std;

int main()
{
    int totalMoney;
    cout << "Enter The Total Amount of Money: ";
    cin >> totalMoney;

    int denominations[] = {2000,500, 100, 50, 20, 10, 1};
    string notes[] = {"Two Thousand","Five Hunderd" ,"Hundred", "Fifty", "Twenty", "Ten", "One"};

    for (int i = 0; i < 5; i++) {
        int count = totalMoney / denominations[i];
        totalMoney = totalMoney % denominations[i];
        if (count > 0) {
            cout << "No. of " << notes[i] << " Required: " << count << endl;
        }
    }

    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}

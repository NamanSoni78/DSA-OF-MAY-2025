#include <iostream>
using namespace std;

int main()
{
        int nums = [2,4,7,8];
        int target = 11;
        int ArrSize = sizeof(nums) / sizeof(nums[0]);
        for (int i=0 ; i<ArrSize ; i++){
            for(int j=0 ; i<ArrSize ; j++){
                if(nums[i] + nums[j]==target){
                    cout<<i<<","<<j;
                }
            }


        }
    
    system("pause");
    return 0;
};
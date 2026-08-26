#include<iostream>
#include<vector>
using namespace std;

class soluction{
    public:
    int removeDublicate(vector<int>& nums){
        int length = nums.size();
        int left = 0;
        if(length == 0){
            return 0;
        }
        for(int i = 1;i < length; i++){
            if(nums[left] != nums[i]){
                left ++;
                nums[left] = nums[i];
            }
        }
        return left + 1;
    }
};
int main(){
    soluction sol;
    vector<int>numbers = {0,0,1,1,1,2,2,2,3,3,4,4,5,6,7,7,8};
    int newvectorLength = sol.removeDublicate(numbers);

    cout<<"after removing the dublicate elements the vector is :";
    for (int i = 0; i < newvectorLength; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
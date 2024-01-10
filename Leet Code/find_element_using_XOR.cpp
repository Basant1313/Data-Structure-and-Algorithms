#include <iostream>
#include <vector>
using namespace std;

int find_element (vector <int> &nums ){

    int ans =0;

    for (int i=0 ; i < nums.size() ; i++){
        ans = ans ^ nums[i];
    }
    return ans;
}


int main(){

    vector<int> nums = {2,2,1};

    cout<<find_element(nums);
}
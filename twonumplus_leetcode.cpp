#include <bits/stdc++.h>

using namespace std;

vector<int> TwoNum(vector<int> nums , int target);

int main(){
    vector<int> a;
    a.push_back(0);
    a.push_back(0);
    cin >> a[0];
    cin >> a[1];
    cout << TwoNum(a,12)[1];
    cout << TwoNum(a,12)[2];
    return 0;
}

vector<int> TwoNum(vector<int> nums , int target){
    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = i+1 ; j < nums.size() - 1 ; j++){
            if(nums[j] == target){
                vector<int> res;
                res.push_back(target);
                res.push_back(nums[i]);
                return res;
            }
        }
    }
}
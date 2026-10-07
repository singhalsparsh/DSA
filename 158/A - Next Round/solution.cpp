#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n;
    cin >> k;
    vector<int>nums(n);
    
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(nums[i] >= nums[k-1] && nums[i] > 0){
            count++;
        } 
    }
    
    cout << count;
    
}
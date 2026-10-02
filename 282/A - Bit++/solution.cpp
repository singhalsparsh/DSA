#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<string>str(n);
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    int x=0;
    for(int i=0; i<n; i++){
        if(str[i] == "X++" || str[i] == "++X") x++;
        else x--;
    }
    cout << x;
}
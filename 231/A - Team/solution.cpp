#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a;
    int b;
    int c;
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        if((a + b + c) >= 2){
            count++;
        }
    }
    cout << count;
    return 0;
}
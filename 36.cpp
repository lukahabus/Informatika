#include <iostream>
using namespace std;

int main() {
    int n, x, br_petica = 0;
    cin >> n;
    while(n > 0) {
        x = n % 10;
        if(x == 5)
            br_petica++; //s = s + 1;s
        n = n / 10;
    }
    
    cout << br_petica << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int x;
    double s = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> x;
        s = s + x;
    }
    s = s / 5;
    cout << s << endl;
    return 0;
}

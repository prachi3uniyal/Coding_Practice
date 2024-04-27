// C++ code to swapp elements of pair

#include <iostream>
#include <utility> 

using namespace std;

pair<int, int> swapPair(pair<int, int> p) {
    
    swap(p.first, p.second);
    return p;
}

int main() {
    int a, b;
    cout << "Enter two integers separated by space: ";
    cin >> a >> b;
    pair<int, int> myPair = make_pair(a, b);
    cout << "Before swapping: " << myPair.first << " " << myPair.second << endl;
    myPair = swapPair(myPair);
    cout << "After swapping: " << myPair.first << " " << myPair.second << endl;

    return 0;
}

#include <iostream>
using namespace std;


int sumTail(int n, int total) {
    if (n == 0) {
    	
        return total;
    }
    
    return sumTail(n - 1, total + n);
}


int sumNonTail(int n) {
	
    if (n == 0) {
    	
        return 0;
    }
    
    return n + sumNonTail(n - 1);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum tail recursion: " << sumTail(n, 0) << endl;
    cout << "Sum  non-tail recursion: " << sumNonTail(n) << endl;

    return 0;
}

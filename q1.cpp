#include <iostream>
using namespace std;

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    
    int n, prime = 1;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        prime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
        
    } if (prime) {
      cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
        cout << "Factors of " << n << " are: ";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << " ";
            }
        }    
    }
    int nextPrime = n + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }
    cout << "The next prime number greater than " << n << " is " << nextPrime << endl;

    return 0;
}

   
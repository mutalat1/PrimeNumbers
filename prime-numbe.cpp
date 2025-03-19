#include <iostream>
using namespace std;
// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; // If no divisors are found, it's a prime number
}

int main() {
    int limit;
    
    cout << "Enter the maximum limit to find prime numbers:"; 
    cin >> limit; 
    // input for p
    
    cout << "Prime numbers up to " << limit << " are: " << endl;
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}



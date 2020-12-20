#include <iostream>

using namespace std;

int main()
{
    int term = 0;
    int term2 = 1;
    int nextTerm;
    int numberOfTerms;
    cout << "Enter how many terms in addition to the first 3 terms do you want to see from the Fibonacci sequence: ";
    cin >> numberOfTerms;
    cout << "Fibonacci sequence: " << term << ", " << term2;
    for (int i = numberOfTerms; i > 0; i--)
    {
        nextTerm = term + term2;
        cout << ", " << nextTerm;
        term = term2;
        term2 = nextTerm;
    }

    return 0;
}

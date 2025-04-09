#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of stock prices

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];  // Input stock prices
    }

    stack<int> s;  // Stack to store indices of stock prices
    vector<int> nge(n, -1);  // Array to store next greater elements, initialized with -1

    // Find the next greater element for each stock price
    for (int i = 0; i < n; i++) {
        // While stack is not empty and current price is greater than the price at the top index of the stack
        while (!s.empty() && prices[s.top()] < prices[i]) {
            nge[s.top()] = prices[i];  // Update NGE for the index at the top of the stack
            s.pop();  // Remove the index from the stack
        }
        s.push(i);  // Push the current index onto the stack
    }

    // Print the stock prices and their next greater elements
    for (int i = 0; i < n; i++) {
        cout << prices[i] << " " << nge[i] << endl;
    }

    return 0;
}

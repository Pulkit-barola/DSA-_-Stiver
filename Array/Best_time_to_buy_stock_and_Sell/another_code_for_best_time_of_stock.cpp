#include <bits/stdc++.h>
using namespace std;

int maximumprofit(vector<int> &price, int &buyPrice, int &sellPrice) {
    int profit = 0;
    int mini = price[0];
    int cost;
    int n = price.size();

    for (int i = 1; i < n; i++) {
        cost = price[i] - mini;

        if (cost > profit) {
            profit = cost;
            buyPrice = mini;
            sellPrice = price[i];
        }

        mini = min(mini, price[i]);
    }

    return profit;
}

int main() {
    vector<int> price = {2, 4, 1, 7, 3, 4, 8};
    int buyPrice = 0, sellPrice = 0;

    int result = maximumprofit(price, buyPrice, sellPrice);

    cout << sellPrice << " - " << buyPrice << " = " << result << endl;

    return 0;
}

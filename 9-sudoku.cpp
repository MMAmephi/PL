#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int assist(vector<int>& ans, int Sum, int n, int start, const vector<int>& excluded) {
    if (n == 0 && Sum == 0) {
        for (int num : ans) {
            cout << num << " ";
        }
        cout << "\n";
        return 0;
    }

    if (n <= 0 || Sum <= 0 || start > 9) {
        return 0;
    }

    if (find(excluded.begin(), excluded.end(), start) == excluded.end()) {
        ans.push_back(start);
        assist(ans, Sum - start, n - 1, start + 1, excluded);
        ans.pop_back();
    }

    assist(ans, Sum, n, start + 1, excluded);
    return 0;
}

int main() {
    int n, s;
    cout << "n: ";
    cin >> n;
    cout << "S: ";
    cin >> s;

    if (n < 1 || n > 9 || s < 1 || s > 45) {
        cout << "error\n";
        return 1;
    }

    vector<int> excluded;
    cout << "Exclude: ";
    int num;
    while (cin >> num) {
        if (num == 0) {
            break;
        }
        excluded.push_back(num);
    }

    vector<int> ans;
    assist(ans, s, n, 1, excluded);

    return 0;
}
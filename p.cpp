#include <bits/stdc++.h>
using namespace std;

long long minSteps(long long N, long long D) {
    if (N == 1) return 0;
    queue<pair<long long,long long>> q;
    unordered_set<long long> seen;
    q.push({N, 0});
    seen.insert(N);

    while (!q.empty()) {
        auto [x,steps] = q.front(); 
        q.pop();
        if (x%2==0) {
            long long nx = x / 2;
            if (nx==1) return steps+1;
            if (!seen.count(nx)) {
                seen.insert(nx);
                q.push({nx, steps + 1});
            }
        }
        if (x - D >= 1) {
            long long nx = x - D;
            if (nx == 1) return steps + 1;
            if (!seen.count(nx)) {
                seen.insert(nx);
                q.push({nx, steps + 1});
            }
        }
    }

    return -1;
}

int main() {
    int t;
    while (t--) {
        long long N, D;
        cin >> N >> D;
        cout << minSteps(N, D) << endl;
    }
    return 0;
}

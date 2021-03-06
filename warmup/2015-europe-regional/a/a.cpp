//In The Name Of God
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<string> vs;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef vector<vvii> vvvii;
typedef vector<vector<viii>> vvviii;
typedef vector<vector<iii>> vviii;
typedef set<int> si;
typedef vector<si> vsi;
typedef pair<double, double> dd;
typedef vector<dd> vdd;
typedef pair<dd, double> ddd;
typedef vector<ddd> vddd;

#define inf 1000000000
#define eps 1e-9

int main() {
    ios::sync_with_stdio(0);

    int n, m;
    while(cin >> n >> m) {
        priority_queue<ii, vector<ii>, greater<ii> > q;
        int ans = 0;
        vii nums;
        for (int j = 0; j < n; ++j) {
            int a, b; cin >> a >> b;
            nums.push_back(ii(a, b));
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++) {
            int a = nums[i].first, b = nums[i].second;
            while(q.size() && q.top().first < a) q.pop();
            if(q.size() && q.top().second > a) {
                ans++;
            }
            else if(q.size()) {
                q.pop();
            }
            else if(!q.size()) ans++;
            q.push(ii(a + b + m, a + b));
        }
        cout << n - ans << endl;
    }



    return 0;
}

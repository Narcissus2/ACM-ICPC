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

#define inf 1000000000
#define eps 1e-9

long long fast_pow(int a,int n, int mod)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            result = result%mod;}
        value = value*value;
        value = value%mod;
        power /= 2;
    }
    return result;
}

int main() {
    char c;
    string str;
    while((c = getchar()) != EOF) {
        if(c == '#') {
            int m = 0, p = 0;
            for(int i = str.size() - 1; i >= 0; i--) {
                if(str[i] == '1')
                    m = (m + fast_pow(2, p, 131071)) % 131071;
                p++;
            }
            if(m == 0) cout << "YES\n";
            else cout << "NO\n";
            str = "";
        }
         if(c != '\n')
            str += c;
    }

    return 0;
}

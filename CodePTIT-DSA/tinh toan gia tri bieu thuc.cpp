#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


bool isOperator(const string &s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}


ll calc(ll a, ll b, string op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    return a / b; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cin.ignore();

        vector<string> tokens(N);
        for (int i = 0; i < N; i++) {
            cin >> tokens[i];
        }

        stack<ll> st;

      
        if (isOperator(tokens[0])) {
            for (int i = N - 1; i >= 0; i--) {
                if (!isOperator(tokens[i])) {
                    st.push(stoll(tokens[i]));
                } else {
                    ll a = st.top(); st.pop();
                    ll b = st.top(); st.pop();
                    st.push(calc(a, b, tokens[i]));
                }
            }
        }
       
        else {
            for (int i = 0; i < N; i++) {
                if (!isOperator(tokens[i])) {
                    st.push(stoll(tokens[i]));
                } else {
                    ll b = st.top(); st.pop();
                    ll a = st.top(); st.pop();
                    st.push(calc(a, b, tokens[i]));
                }
            }
        }

        cout << st.top() << "\n";
    }

    return 0;
}


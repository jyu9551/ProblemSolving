#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int ans = 0;
    if (s[0]=='-') {
        int mul = 1;
        for(int i=s.size()-1; i>0; i--){
            ans = ans + (mul*(s[i]-'0'));   
            mul = mul*10;
        }
        ans = -ans;
    }
    else if (s[0]=='+') {
        int mul = 1;
        for(int i=s.size()-1; i>0; i--){
            ans = ans + (mul*(s[i]-'0'));   
            mul = mul*10;
        }
    }
    else {
        int mul = 1;
        cout << s.size() << '\n';
        for (int i=s.size()-1; i>=0; i--){
            ans = ans + (mul*(s[i]-'0'));
            mul = mul*10;
        }        
    }
    return ans;
}
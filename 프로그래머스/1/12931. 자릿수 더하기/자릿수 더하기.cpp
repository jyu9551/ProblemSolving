#include <iostream>

using namespace std;
int solution(int n)
{
    int sum = 0;
    string tmp = to_string(n);
    for (int i=0; i<tmp.size(); i++){
        sum += tmp[i]-'0';
    }
    return sum;
}
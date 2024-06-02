#include <string>
#include <iostream>
using namespace std;
int p, y;

bool solution(string s)
{
    bool answer = true;
    for (int i=0; i<s.size(); i++){
        if (s[i] == 'p' || s[i] == 'P') p++;
        else if (s[i] == 'y' || s[i] == 'Y') y++;
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    
    return (p==y);
}
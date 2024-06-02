#include <vector>
#include <iostream>
using namespace std;
int tmp = -1;
vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for (int i:arr) {
        if (tmp != i) {
            answer.push_back(i);
            tmp = i;
        }
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}
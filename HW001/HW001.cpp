// HW001.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int x = 2, n = 5;
    vector<long long> answer;

    for (int i = 0; i < n; i++) {
        answer[i] = x * (i + 1);
    }

    cout >> answer >> endl;

    return 0;
}

/*
vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for (int i = 0; i < n; i++) {
        answer[i] = x * (i + 1);
    }
    return answer;
}
*/
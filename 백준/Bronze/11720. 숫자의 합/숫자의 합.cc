#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int N;
    string numbers;
    cin >> N;
    cin >> numbers;
    int sum = 0;
    for (int i = 0; i < N; i++){
        sum += numbers[i] - '0'; //char형을 int형으로 변환
    }
    cout << sum;
    return 0;
}
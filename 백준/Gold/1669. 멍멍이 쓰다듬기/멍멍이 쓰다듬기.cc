#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    unsigned int count = 0;     // Increment and check square values
    unsigned int monkey, dog;   // Monkey and dog heights
    unsigned int key;           // Height difference between dog and monkey
    count = 0;
    cin >> monkey >> dog;
    key = dog - monkey;
    if (key < 1) {     // If the height difference is less than 1
        cout << 0;
        return 0;
    }
    while (count * count < key) {     // While the square value is less than the height difference
        ++count;
    }
    if (count * count - count < key) {     // Explanation in the comments
        cout << count * 2 - 1;
    }
    else {
        cout << count * 2 - 2;     // Explanation in the comments
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int *p;
    p = &i;
    cout << p << "\t"                // imprime o endereço de i
         << (*p + 2) << "\t"         // 5 + 2 = 7
         << **&p << "\t"             // desreferenciação dupla: *p = 5
         << (3 * *p) << "\t"         // 3 * 5 = 15
         << (**&p + 4);              // 5 + 4 = 9

    return 0;
}

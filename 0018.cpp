#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int n[5];
    for (int i = 0; i != 5; ++i) {
        scanf("%d", &n[i]);
    }
    sort(n, n+5);
    printf("%d %d %d %d %d\n", n[4], n[3], n[2], n[1], n[0]);
    return 0;
}
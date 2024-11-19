#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numero;

    scanf("%d", &numero);

    for (int i = 0; i < 6; ) {
        if (numero % 2 != 0) {
            printf("%d\n", numero);
            i++;
        }
        numero++;
    }
    return 0;
}

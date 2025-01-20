#include <stdio.h>

int main() {
    int x[2][3] = {
        {1, 6, 3},
        {-6, 5, 6}
    };

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d", x[i][j]);
        }
    }
}

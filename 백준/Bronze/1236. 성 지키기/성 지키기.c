#include <stdio.h>

int main() {
    int n, m;
    char castle[50][51];  

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", castle[i]);
    }

    int emptyRows = 0, emptyCols = 0;

    for (int i = 0; i < n; i++) {
        int hasGuard = 0;
        for (int j = 0; j < m; j++) {
            if (castle[i][j] == 'X') {
                hasGuard = 1;
                break;
            }
        }
        if (!hasGuard) emptyRows++;
    }

    for (int j = 0; j < m; j++) {
        int hasGuard = 0;
        for (int i = 0; i < n; i++) {
            if (castle[i][j] == 'X') {
                hasGuard = 1;
                break;
            }
        }
        if (!hasGuard) emptyCols++;
    }

    int result = emptyRows > emptyCols ? emptyRows : emptyCols;
    printf("%d\n", result);

    return 0;
}

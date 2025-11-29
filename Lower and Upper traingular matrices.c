 #include <stdio.h>

int main() {
    int m, n;
    int i, j;
 
    printf("Enter matrix order (m n): ");
    scanf("%d %d", &m, &n);

    int a[20][20];

    
    printf("Enter the matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

  
    printf("\nLower Triangle:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (j <= i)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
 
    printf("\nUpper Triangle:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (j >= i)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}


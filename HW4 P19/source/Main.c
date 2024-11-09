#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char string1[20];
    char string2[] = "string literal";
    int i;

    printf("Enter a string: ");
    fgets(string1, sizeof(string1), stdin);  // 使用 fgets 來安全地讀取字串

    // 去掉 fgets 讀取的換行符號
    for (i = 0; string1[i] != '\0'; i++) {
        if (string1[i] == '\n') {
            string1[i] = '\0';
            break;
        }
    }

    printf("string1 is: %s\nstring2 is: %s\n", string1, string2);
    printf("string1 with spaces between characters is:\n");

    for (i = 0; string1[i] != '\0'; i++)
        printf("%c ", string1[i]);

    printf("\n");
    printf("Press Enter to continue...");
    getchar();  // 使用 getchar() 來取代 system("pause")

    return 0;
}

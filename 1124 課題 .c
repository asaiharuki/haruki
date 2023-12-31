#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[50];
    int length, uppercase_count, lowercase_count, other_count;

    printf("パスワードを入力してください: ");
    fgets(password, sizeof(password), stdin);


    password[strcspn(password, "\n")] = '\0';


    length = strlen(password);


    uppercase_count = lowercase_count = other_count = 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            uppercase_count++;
        }
        else if (islower(password[i])) {
            lowercase_count++;
        }
        else {
            other_count++;
        }
    }


    if (length >= 8 && length <= 16 && uppercase_count >= 1 && lowercase_count >= 1 && other_count >= 1) {
        printf("パスワードが条件を満たしています。\n");
    }
    else {
        printf("パスワードが条件を満たしていません。\n");
    }

    return 0;
}
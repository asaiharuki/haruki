#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[50];
    int length, uppercase_count, lowercase_count, other_count;

    printf("�p�X���[�h����͂��Ă�������: ");
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
        printf("�p�X���[�h�������𖞂����Ă��܂��B\n");
    }
    else {
        printf("�p�X���[�h�������𖞂����Ă��܂���B\n");
    }

    return 0;
}
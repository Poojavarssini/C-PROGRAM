#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool ValidPassword(const char password[]) {
    int length = strlen(password);
    int nums = 0, lower_c = 0, upper_c = 0, special_c = 0;
    if (length < 8) {
        printf("Password invalid\n");
        return false;
    }
    int i;
    for (i = 0; i < length; i++) {
        if (password[i] >= '0' && password[i] <= '9')
            nums++;
        else if (password[i] >= 'a' && password[i] <= 'z')
            lower_c++;
        else if (password[i] >= 'A' && password[i] <= 'Z')
            upper_c++;
        else
            special_c++;
    }

    if (nums == 0 || lower_c == 0 || upper_c == 0 || special_c == 0) {
        printf("Password invalid\n");
        return false;
    }

    return true;
}

int main() {
    char password[100];
    scanf("%s", password);

    if (ValidPassword(password))
        printf("Password is valid.\n");
    else
        printf("Password is invalid.\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int is_positive_number(char *str) {
    if (*str == '\0')
        return 0;

    while (*str) {
        if (!is_digit(*str))
            return 0;
        str++;
    }

    return 1;
}
char* addStrings(const char* num1, const char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLen = len1 > len2 ? len1 : len2;
    char* result = (char*)malloc((maxLen + 2) * sizeof(char));
    int carry = 0;
    int i, j, k;

    for (i = len1 - 1, j = len2 - 1, k = maxLen; i >= 0 || j >= 0 || carry > 0; i--, j--, k--) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        result[k] = (sum % 10) + '0';
        carry = sum / 10;
    }

    result[maxLen + 1] = '\0';
    return result;
}


char* multiplyStringByInt(const char* num, int multiplier) {
    int len = strlen(num);
    char* result = (char*)malloc((len + 2) * sizeof(char));
    int carry = 0;
    int i, j;

    for (i = len - 1, j = len; i >= 0 || carry > 0; i--, j--) {
        int digit = (i >= 0) ? num[i] - '0' : 0;
        int product = digit * multiplier + carry;
        result[j] = (product % 10) + '0';
        carry = product / 10;
    }

    result[len + 1] = '\0';
    return result;
}

int main(int argc, char *argv[])
{
    char* num1 = argv[1];
    char* num2 = argv[2];
    char *result = NULL;
    int digit = 0;
    char* partialResult = NULL;
    unsigned int i = 0, j = 0;
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }



    if (!is_positive_number(num1) || !is_positive_number(num2)) {
        printf("Error\n");
        return 98;
    }

    result = "0";
    /*temp = result;*/
    for (i = 0; i < strlen(num2); i++) {
        digit = num2[i] - '0';
        partialResult = multiplyStringByInt(num1, digit);

        for (j = 0; j < strlen(num2) - 1 - i; j++) {
            strcat(partialResult, "0");
        }


       /* temp = result;*/
        result = addStrings(result, partialResult);
        /*free(temp);*/
        free(partialResult);
    }

    printf("%s\n", result);

   /* free(result);*/

    return 0;
}

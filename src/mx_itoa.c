// #include "libmx.h"

char *mx_itoa(int number) {

    char *word = NULL;
    int size = 0;
    int copy = number;

    word = mx_strnew(size);
    while(copy) {
        copy /= 10;
        size++;
    }

	if (number == 0)
		return mx_strcpy(word, "0");
	if (number == -2147483648)
		return mx_strcpy(word, "-2147483648");

    copy = number;

    if (number < 0) {
        word[0] = '-';
        number = -number;
    }

    while (size--) {
        word[size--] = (number % 10) + '0';
        number /= 10;
    }
    return word;
}

int main() {
    printf("%s", mx_itoa(128));
    return 0;
}

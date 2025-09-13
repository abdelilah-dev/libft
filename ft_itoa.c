#include "libft.h"

int count_digits(int n){
    int count;

    count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

char    *ft_itoa(int n){
    char *res;
    int res_len;
    unsigned int nb;

    res_len = count_digits(n);
    if (n < 0) {
        res_len++;
        nb = (unsigned int)-n;
    } else {
        nb = n;
    }
    res = (char *)malloc(sizeof(char) * (res_len + 1));
    res[res_len--] = '\0';
    while (nb){
        res[res_len--] = (nb % 10 + 48);
        nb /= 10;
    }
    if (res_len == 0)
        res[res_len] = '-';
    return res;
}

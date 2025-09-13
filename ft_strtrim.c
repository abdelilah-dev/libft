#include "libft.h"

int find_char(char const *str, char c){
    while (*str){
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set) {
    int len;
    char *res;

    if (!s1 || !set)
        return (NULL);
    while (*s1 && find_char(set, *s1)) {
        s1++;
    }
    len = ft_strlen(s1) - 1;
    while (len != 0 && find_char(set, s1[len])) {
        len--;
    }
    len++;
    res = (char *)malloc(sizeof(char) * (len + 1));
    ft_strlcpy(res, (char *)s1 , len + 1);
    return (res);
}

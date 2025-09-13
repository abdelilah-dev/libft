#include "libft.h"

char    *ft_strdup(const char *s) {
    int i ;
    int s_len;
    char *res;

    i = 0;
    s_len = ft_strlen(s);
    res = (char *)malloc(sizeof(char) * (s_len + 1));
    if (!res)
        return (NULL);
    while (i < s_len) {
        res[i] = s[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

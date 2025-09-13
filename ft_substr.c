#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *res;
    size_t s_len;
    size_t size;

    if (!s)
        return (0);
    s_len = ft_strlen(s);
    size = 0;
    if (s_len > start)
        size = s_len - start;
    if (size > len)
        size = len;
    res = (char *)malloc(sizeof(char) * (size + 1));
    if (!res)
        return (0);
    ft_strlcpy(res, s + start, len + 1);
    return (res);
}

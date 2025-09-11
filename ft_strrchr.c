#include "libft.h"

char    *ft_strrchr(const char *s, int c) {
    int end;

    end = ft_strlen(s) - 1;
    while (end >= 0) {
        if (*(s + end) == c)
            break;
        end--;
    }
    if (end == 0 && *(s + end) != c)
        return NULL;
    return ((char *)s + end);
}

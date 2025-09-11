#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n){
    size_t i;

    i = 0;
    while (i < n && (unsigned char *)(s + i)) {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            break;
        i++;
    }
    if (i == n && *(unsigned char *)(s + i) != c)
        return NULL;
    return ((unsigned char *)(s + i));
}

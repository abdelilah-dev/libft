#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    size_t i;
    unsigned char *s1_ptr;
    unsigned char *s2_ptr;

    i = 0;
    s1_ptr = (unsigned char *)s1;
    s2_ptr = (unsigned char *)s2;
    while (i < n && (s1_ptr[i] || s2_ptr[i]))
    {
        if (*(s1_ptr + i) != *(s2_ptr + i))
            return ((int)(*(s1_ptr + i) - *(s2_ptr + i)));
        i++;
    }
    return 0;
}

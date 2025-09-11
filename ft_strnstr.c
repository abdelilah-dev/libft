#include "libft.h"

char    *ft_strnstr(const char *str,	const char *needle, size_t len ) {
    size_t i;
    size_t j;

    i = 0;
    while (i < len && str[i]) {
        j = 0;
        if (str[i] == needle[0]) {
            while (needle[j] && str[i + j] && i + j < len && str[i + j] == needle[j]) {
                j++;
            }
            if (needle[j] == '\0')
                return (char *)(str + i);
        }
        i++;
    }
    return NULL;
}

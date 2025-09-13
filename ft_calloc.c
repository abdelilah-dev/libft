#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) {
    void *res;

    res = (void *)malloc(nmemb * size);
    if (res == NULL)
        return (NULL);
    ft_bzero(res, nmemb);
    return (res);
}

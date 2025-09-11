#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size) {
    size_t i;
    size_t dst_len;
    size_t src_len;

    i = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (!dst && size == 0)
        return (src_len);
    if (size <= dst_len) {
        return (src_len + size);
    }
    while (src[i] && dst_len + i < size - 1){
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}

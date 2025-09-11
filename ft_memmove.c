#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
    size_t i;
    size_t dest_len;
    size_t src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (dest_len < src_len){
        i = 0;
        while (i < n) {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    } else {
        i = n;
        while (i-- > 0) {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        } 
    }
    return (dest);
}

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){
    char *res;
    int res_len;

    res_len = ft_strlen(s1) + ft_strlen(s2);
    res = (char *)malloc(sizeof(char) * (res_len + 1));
    if (!res)
        return (NULL);
    ft_strlcpy(res, s1, ft_strlen(s1) + 1);
    ft_strlcat(res, s2, res_len);
    return (res);
}

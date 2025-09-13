#include "libft.h"

int ft_atoi(const char *sptr) {
    int res;
    int sign;

    res = 0;
    sign = 1;
    while (*sptr == 32 || (*sptr >= 9 && *sptr <= 13))
        sptr++;
    if (*sptr == '-') {
        sign = -1;
        sptr++;
    } else if (*sptr == '+') {
        sptr++;
    }
    while (ft_isdigit(*sptr)){
        res *= 10;
        res += *sptr - 48;
        sptr++;
    }
    return (res * sign);
}

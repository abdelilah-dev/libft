#include "libft.h"

void ft_count_word(const char *str, char sep, int *word_count){
    int i ;
    int in_word;

    i = 0;
    in_word = 0;
    while (*(str + i)) {
        if (str[i] != sep && !in_word) {
            (*word_count)++;
            in_word = 1;
        }
        else if (str[i] == sep)
            in_word = 0;
        i++;
    }
}

int ft_fill_result(char **res,char *str, char sep, int len) {
    int i;
    int j;
    int word_len;

    i = -1;
    while (++i < len){
        word_len = 0;
        j = -1;
        while (*str == sep)
            str++;
        while (*(str + word_len) != sep)
            word_len++;
        res[i] = (char *)malloc(sizeof(char) * (word_len + 1));
        if (!res[i]) {
            i = 0;
            while (res[i])
                free(res[i]);
            return (0);
        }
        while (++j < word_len)
            res[i][j] = *(str + j);
        res[i][j] = '\0';
        str += word_len;
    }
    return 1;
}

char **ft_split(char const *s, char c){
    char **res;
    int word_count;

    word_count = 0;
    ft_count_word(s, c, &word_count);
    printf("%d\n", word_count);
    if (!s || !c)
        return NULL;
    res = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!res)
        return (NULL);
    res[word_count] = NULL;
    if (!ft_fill_result(res, (char*)s, c, word_count)){
        free(res);
        return NULL;
    }
    return res;
}

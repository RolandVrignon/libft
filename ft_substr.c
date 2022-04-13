#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    if (!s)
        return (NULL);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = -1;
    while (++i < len && s[start + i])
        str[i] = s[start + i];
    str[i] = '\0';
    return (str);
}
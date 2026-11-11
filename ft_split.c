/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotto <sotto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:45:57 by sotto             #+#    #+#             */
/*   Updated: 2026/11/11 19:15:30 by sotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_countwords(char const *s, char c)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (count);
}

static char *ft_wordlen(char const *s, char c)
{
    size_t len;
    char *result;

    len = 0;
    while (s[len] && s[len] != c)
        len++;
    result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);
    ft_strlcpy(result, s, len + 1);
    return (result);
}

static char **ft_free(char **result, size_t j)
{
    size_t i;

    i = 0;
    while (i < j)
    {
        free(result[i]);
        i++;
    }
    free(result);
    return (NULL);
}

static char **ft_alloc(char const *s, char c)
{
    if (!s)
        return (NULL);
    return ((char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *)));
}

char **ft_split(char const *s, char c)
{
    char **result;
    size_t i;
    size_t j;

    result = ft_alloc(s, c);
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
       while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            result[j] = ft_wordlen(&s[i], c);
            if (!result[j])
                return (ft_free(result, j));
            j++;
            i = i + ft_strlen(result[j - 1]);
        }
    }
    result[j] = NULL;
    return (result);
}


/*int main(void)
{
    char **result;
    size_t i;

    result = ft_split("Hello, world! This is a test.", ' ');
    if (!result)
        return (1);
    i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}*/
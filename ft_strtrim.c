/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotto <sotto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:32:52 by sotto             #+#    #+#             */
/*   Updated: 2026/11/11 17:17:55 by sotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *trimmed_str;

    start = 0;
    end = ft_strlen(s1);
    if (!s1 || !set)
        return (NULL);
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!trimmed_str)
        return (NULL);
    ft_strlcpy(trimmed_str, s1 + start, end - start + 1);
    return (trimmed_str);
}

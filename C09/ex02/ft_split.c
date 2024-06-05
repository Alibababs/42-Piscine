/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:47:36 by pbailly           #+#    #+#             */
/*   Updated: 2024/02/29 16:50:57 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	countword(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && separator(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !separator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_dup(char *str, char *charset)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_len(str, charset);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (countword(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && separator(*str, charset))
			str++;
		if (*str)
		{
			tab[i] = ft_dup(str, charset);
			i++;
		}
		while (*str && !separator(*str, charset))
			str++;
	}
	tab[i] = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	char **split;
	(void)argc;
	i = 0;
	split = ft_split(argv[1], argv[2]);
	while (split[i])
	{
		printf("%s", split[i]);
		i++;
	}
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:43:17 by pbailly           #+#    #+#             */
/*   Updated: 2024/02/26 14:46:22 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_len(int sise, char **strs, char *sep)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < sise)
	{
		n += ft_strlen(strs[i]);
		i++;
	}
	n += (sise - 1) * ft_strlen(sep);
	return (n);
}	

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	if (size == 0)
	{
		tab = malloc(sizeof(*tab));
		*tab = '\0';
		return (tab);
	}
	tab = malloc(sizeof(*tab) * ft_len(size, strs, sep) + 1);
	if (tab == NULL)
		return (NULL);
	*tab = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	char c[] = " ";
	char *chaine[3] = {"Hello", "World", "oui"};
	printf("%s\n", ft_strjoin(0, chaine, c));
}*/

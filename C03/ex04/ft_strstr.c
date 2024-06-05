/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:47:36 by pbailly           #+#    #+#             */
/*   Updated: 2024/02/15 18:26:35 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (to_find[f] == str[i + f] && str[i + f] != '\0')
		{
			if (to_find[f + 1] == '\0')
				return (&str[i]);
			f++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char chaine[] = "Salut comment ca va?";
	char chaine2[] = "comment";
	printf("%s", ft_strstr(chaine, chaine2));
}*/

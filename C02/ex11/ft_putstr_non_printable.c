/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:43:28 by pbailly           #+#    #+#             */
/*   Updated: 2024/02/14 10:53:44 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(unsigned char c)
{
	char	*h;

	h = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &h[c / 16], 1);
	write (1, &h[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			write(1, &str[i], 1);
		else
			hexa(str[i]);
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	char chaine[] = "Coucou\ntu vas\vbien ?";
	ft_putstr_non_printable(chaine);
}*/

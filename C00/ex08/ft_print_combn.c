/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:26:56 by pbailly           #+#    #+#             */
/*   Updated: 2024/02/28 16:27:17 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_print(int *tab, int n)
{
	int	i;
	int	check;

	i = 1;
	check = 1;
	while (i < n)
	{
		if (tab[i - 1]  >= tab[i])
			check = 0;
		i++;
	}
	if (check)
	{
		i = 0;
		while (i < n)
			ft_putchar(tab[i++] + '0');
		if (tab[0] < 10 - n)
			write(1, ", ", 2);
	}
}

void ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	if (n > 10 || n < 0)
		return ;
	i = 0;
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= 10 - n && 0 < n && n < 10)
	{
		check_print(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}

int main(void)
{
	ft_print_combn(9);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:32:52 by pbailly           #+#    #+#             */
/*   Updated: 2024/02/26 14:46:01 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max || range == NULL)
		return (0);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range;

	printf("%d\n", ft_ultimate_range(&range, 0, 5));
}*/

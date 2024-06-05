/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:20:27 by pbailly           #+#    #+#             */
/*   Updated: 2024/02/26 14:41:30 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include <stdio.h>
int	main()
{
	int *tab;
	int i;
	int min;
	int max;
	min = 0;
	max = 10;
	i = 0;
	tab = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d", tab[i]);
		i++;
	}
}*/

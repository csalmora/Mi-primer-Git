/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalmora <csalmora@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:15:40 by csalmora          #+#    #+#             */
/*   Updated: 2021/11/11 20:17:26 by csalmora         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	z;

	j = size - 1;
	i = 0;
	while (i < j)
	{
		z = tab[i];
		tab[i] = tab[j];
		tab[j] = z;
		i++;
		j--;
	}
}

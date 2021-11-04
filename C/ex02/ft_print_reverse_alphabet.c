/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalmora <csalmora@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:10:27 by csalmora          #+#    #+#             */
/*   Updated: 2021/11/04 21:10:32 by csalmora         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet (char letra ){

	do{ 
		write(1 , &letra, 1);
		letra--;}
	while(letra >='a');
}

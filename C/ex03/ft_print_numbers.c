/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalmora <csalmora@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:11:09 by csalmora          #+#    #+#             */
/*   Updated: 2021/11/04 21:11:15 by csalmora         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers( char numero){

	do{
    	write(1 , &numero, 1);
		numero++;
	} while (numero <= '9');
}

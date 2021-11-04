/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalmora <csalmora@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:09:55 by csalmora          #+#    #+#             */
/*   Updated: 2021/11/04 21:09:59 by csalmora         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_alphabet( char letra ){
  
	do{
		write(1 ,&letra,1 );
		letra++;
	} while(letra <= 'z');
 
	

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalmora <csalmora@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:11:40 by csalmora          #+#    #+#             */
/*   Updated: 2021/11/04 21:11:45 by csalmora         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative( char numero){	

	if (numero >= 0){
		write(1,"P",1);
	}else {
		write(1, "N" ,1);}
}

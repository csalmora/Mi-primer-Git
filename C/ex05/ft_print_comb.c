/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalmora <csalmora@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:12:18 by csalmora          #+#    #+#             */
/*   Updated: 2021/11/04 21:12:42 by csalmora         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb (){

char a;
char b;
char c;
 a='0';
	
 while(a<='7'){
 b = a+1;
	while (b<='8'){
	c = b+1;
	  while (c<='9'){
	  write(1,&a, 1);
	  write(1,&b,1);
	  write(1,&c,1);
	  write(1,", ",2);

	  c++;
		            }
	  b++;
				  }
	  a++;
			  }
	}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:34:15 by jesdos-s          #+#    #+#             */
/*   Updated: 2024/09/03 10:42:35 by jesdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		first_duo;
	int		second_duo;
	char	number[5];

	first_duo = 0;
	while (first_duo <= 98)
	{
		second_duo = first_duo + 1;
		while (second_duo <= 99)
		{
			number[0] = first_duo / 10 + '0';
			number[1] = first_duo % 10 + '0';
			number[2] = ' ';
			number[3] = second_duo / 10 + '0';
			number[4] = second_duo % 10 + '0';
			write(1, number, 5);
			if (first_duo != 98 || second_duo != 99)
				write(1, ",", 2);
			second_duo++;
		}
		first_duo++;
	}
}

/* int main() 
{
	ft_print_comb2();
	return(0);
} */
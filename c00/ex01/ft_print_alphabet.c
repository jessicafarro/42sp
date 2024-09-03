/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:30:52 by jesdos-s          #+#    #+#             */
/*   Updated: 2024/09/02 18:05:08 by jesdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while(alphabet <= 'z'){
		write(1, &alphabet,1);
		alphabet = alphabet +1;
	}
}

/* int	main(void)
{
	ft_print_alphabet();
	return 0;
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:29:35 by jesdos-s          #+#    #+#             */
/*   Updated: 2024/09/03 12:18:30 by jesdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet[];

	alphabet[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	write(1, &alphabet, 26);
}

/* int	main(void)
{
	ft_print_reverse_alphabet();
	return 0;
} */
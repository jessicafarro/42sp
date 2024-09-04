/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:33:52 by jesdos-s          #+#    #+#             */
/*   Updated: 2024/09/04 17:56:34 by jesdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	answer;

	answer = 'N';
	if (n > -1)
		answer = 'P';
	write (1, &answer, 1);
}

/* int main(void)
{
	ft_is_negative(0);
	ft_is_negative(42);
	ft_is_negative(-42);
	return 0;
} */

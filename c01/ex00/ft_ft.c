/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:50:30 by jesdos-s          #+#    #+#             */
/*   Updated: 2024/09/03 14:54:55 by jesdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

/* int main(void)
{
	int correcao = 8;
	ft_ft(&correcao);
} */
void	ft_ft(int *nbr)
{
	*nbr = 42;
	printf("%d", *nbr);
}

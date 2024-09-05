/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:38:36 by marvin            #+#    #+#             */
/*   Updated: 2024/09/05 15:19:03 by jesdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabaux[size];

	a = 0;
	
    for(int a = 0; a < size; a++)
	{
		tabaux[a] = tab[size - a - 1];
	}

	for(int a = 0; a < size; a++)
	{
		tab[a] = tabaux[a];
	}
}

/* int main(void)
{
	int arr[] = {1, 2, 3, 4, 5}; 
	int size = sizeof(arr) / sizeof(arr[0]); 

	printf("Array original:\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	
	ft_rev_int_tab(arr, size);

	printf("Array invertido:\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
 */
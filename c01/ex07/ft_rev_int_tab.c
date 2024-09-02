/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:38:36 by marvin            #+#    #+#             */
/*   Updated: 2024/09/01 11:38:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_rev_int_tab(int *tab, int size){

    int tabaux[size];  
    
    for(int a = 0; a < size + 1; a++) {  
        tabaux[a] = tab[size - a ]; 
    }
    for(int a = 0; a < size + 1; a++) {  
        tab[a] = tabaux[a]; 
    }
}


int		main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 5;
    printf("n: %d\n", tab[0]);
    printf("n: %d\n", tab[1]);
    printf("n: %d\n", tab[2]);
    printf("n: %d\n", tab[3]);
    printf("n: %d\n", tab[4]);
    printf("n: %d\n", tab[5]);
    printf("\n");
	ft_rev_int_tab(tab, size);
    printf("n: %d\n", tab[0]);
    printf("n: %d\n", tab[1]);
    printf("n: %d\n", tab[2]);
    printf("n: %d\n", tab[3]);
    printf("n: %d\n", tab[4]);
    printf("n: %d\n", tab[5]);
	return (0);
}
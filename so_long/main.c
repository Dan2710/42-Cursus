/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosell- <drosell-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:54:10 by drosell-          #+#    #+#             */
/*   Updated: 2022/11/09 17:07:02 by drosell-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char *argv[])
{
	if (check_input(argc, argv) == 0)
		ft_printf("Hay un error en los parámmetros de entrada");
	else
		so_long(argv[2]);
	return (0);
}
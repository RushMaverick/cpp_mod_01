/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:30:37 by rrask             #+#    #+#             */
/*   Updated: 2023/10/17 16:45:35 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* heapZombie = newZombie("Jeff");
	heapZombie->announce();
	randomChump("Carl");
	delete heapZombie;
	return (0);
}
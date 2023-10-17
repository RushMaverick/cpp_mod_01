/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:06:13 by rrask             #+#    #+#             */
/*   Updated: 2023/10/17 18:21:27 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* zombieHorde = new Zombie[N];
	for (int i = 0; i <= N; i++){
		zombieHorde[i].announce();
	}
	return zombieHorde;
}
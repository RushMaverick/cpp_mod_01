/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:22:41 by rrask             #+#    #+#             */
/*   Updated: 2023/10/18 10:52:18 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEHPP
#define ZOMBIEHPP

#include <iostream>

class Zombie {
	public:
		void announce( void ) const;
		void setName(std::string name);
		Zombie();
		~Zombie();
	private:
		std::string _name;
};

	Zombie* zombieHorde( int N, std::string name ); // Creates as many zombies as the int value

#endif
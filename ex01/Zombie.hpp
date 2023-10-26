/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:22:41 by rrask             #+#    #+#             */
/*   Updated: 2023/10/26 10:27:39 by rrask            ###   ########.fr       */
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
		Zombie(const Zombie &other);
		Zombie &operator=(const Zombie &other);
	private:
		std::string _name;
};

	Zombie* zombieHorde( int N, std::string name ); // Creates as many zombies as the int value

#endif
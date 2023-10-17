/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:22:41 by rrask             #+#    #+#             */
/*   Updated: 2023/10/17 16:35:06 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEHPP
#define ZOMBIEHPP

#include <iostream>

class Zombie {
	public:
		void announce( void ) const;
		Zombie(std::string name);
		~Zombie();
	private:
		std::string _name;
};

	Zombie* newZombie( std::string name ); // It creates a zombie, name it, and return it so you can use it outside of the function scope.
	void randomChump( std::string name ); //It creates a zombie, name it, and the zombie announces itself.

#endif
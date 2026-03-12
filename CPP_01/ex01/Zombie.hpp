/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:45:06 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/03 16:45:40 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class   Zombie {
    private:
        std::string name;
    public:
        Zombie(void);
        Zombie(std::string name);
        void    announce(void);
        void    setName( std::string name );
        ~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
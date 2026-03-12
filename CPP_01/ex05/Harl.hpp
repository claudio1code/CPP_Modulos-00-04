/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:08:23 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 16:22:33 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <iostream>
# include <string>

class Harl{

    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
    public:
        void    complain( std::string level ); 
};

#endif

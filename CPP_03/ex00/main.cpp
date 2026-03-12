/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:22:27 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 08:54:54 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << std::endl << "--- TESTES DE CONSTRUTORES ---" << std::endl;
	ClapTrap clap1;
	ClapTrap clap2("Player 01");
	ClapTrap clap3(clap2);


	std::cout << std::endl << "--- TESTES DE AÇÕES ---" << std::endl;
	clap2.attack("Wall");
	clap2.beRepaired(5);
	clap2.takeDamage(3);

	
	std::cout << std::endl << "--- TESTES EXTREMOS: MORTE---" << std::endl;
	clap1.takeDamage(20);
	clap1.attack("PLAYER 03");
	clap1.beRepaired(5);

	std::cout << std::endl << "--- TESTANDO DESTRUTORES---" << std::endl;
	return 0;
}

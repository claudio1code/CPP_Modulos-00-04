/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:22:27 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/11 18:06:30 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << std::endl << "--- TESTES DE CONSTRUTORES ---" << std::endl;
	ClapTrap clap1;
	ClapTrap clap2("Player 01");
	ClapTrap clap3(clap2);
	ScavTrap scav1;
	ScavTrap scav2("Player 02");
	ScavTrap scav3(scav2);
	FragTrap frag1;
	FragTrap frag2("Player 03");
	FragTrap frag3(frag2);

	std::cout << std::endl << "--- TESTES DE AÇÕES ---" << std::endl;
	clap2.attack("Wall");
	clap2.beRepaired(5);
	clap2.takeDamage(3);
	scav2.attack("Wall");
	scav2.beRepaired(2);
	scav2.takeDamage(4);
	
	std::cout << std::endl << "--- TESTES EXTREMOS: MORTE---" << std::endl;
	clap1.takeDamage(20);
	clap1.attack("PLAYER 03");
	clap1.beRepaired(5);
	scav1.takeDamage(101);
	scav1.attack("PLAYER 04");
	scav1.beRepaired(5);
	frag1.takeDamage(101);
	frag1.attack("PLAYER 05");
	frag1.beRepaired(5);

	std::cout << std::endl << "--- TESTES HABILIDADE ÚNICA---" << std::endl;
	frag1.highFivesGuys();

	std::cout << std::endl << "--- TESTANDO DESTRUTORES---" << std::endl;
	return 0;
}
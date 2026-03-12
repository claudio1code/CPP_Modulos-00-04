/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:08:02 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 16:23:33 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(){
    std::cout << "Eu amo ter bacon extra para o meu hambúrguer" 
    << " 7XL-duplo-queijo-triplopicles-ketchup-especial. Eu realmente amo!"
    << std::endl;
}

void    Harl::info(){
    std::cout << "Eu não acredito que adicionar bacon extra custa mais dinheiro. Vocês"
    << " não colocaram bacon suficiente no meu hambúrguer! Se vocês tivessem colocado, eu"
    << " não estaria pedindo por mais!"
    << std::endl;
}

void    Harl::warning(){
    std::cout << "Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos,"
    << " enquanto você começou a trabalhar aqui apenas no mês passado."
    << std::endl;
}

void    Harl::error(){
    std::cout << "Isto é inaceitável! Eu quero falar com o gerente agora."
    << std::endl;
}

void    Harl::complain( std::string level ){
    const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*actions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    for (int i = 0; i < 4; i++){
        if (level == levels[i]){
            (this->*actions[i])();
            return;
        }
    }
}
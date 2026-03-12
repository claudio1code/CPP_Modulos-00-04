/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:07:59 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 16:10:26 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static void run_test(Harl &harl, const std::string &level){
	std::cout << "\n=== Test: " << level << " ===" << std::endl;
	harl.complain(level);
}

int main(){
	Harl harl;

	run_test(harl, "DEBUG");
	run_test(harl, "INFO");
	run_test(harl, "WARNING");
	run_test(harl, "ERROR");
	run_test(harl, "UNKNOWN");

	return 0;
}
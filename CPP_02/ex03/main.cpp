/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:48:57 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/10 15:39:57 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    Point inside(2.0f, 2.0f);
    Point outside(10.0f, 10.0f);
    Point edge(5.0f, 0.0f);
    Point vertex(0.0f, 0.0f);

    std::cout << "--- Testes do BSP ---" << std::endl;
    std::cout << "Ponto (2, 2) [DENTRO esperado True]:   " << (bsp(a, b, c, inside) ? "True" : "False") << std::endl;
    std::cout << "Ponto (10, 10) [FORA esperado False]:  " << (bsp(a, b, c, outside) ? "True" : "False") << std::endl;
    std::cout << "Ponto (5, 0) [ARESTA esperado False]:  " << (bsp(a, b, c, edge) ? "True" : "False") << std::endl;
    std::cout << "Ponto (0, 0) [VERTICE esperado False]: " << (bsp(a, b, c, vertex) ? "True" : "False") << std::endl;

    return 0;
}

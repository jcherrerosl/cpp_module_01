/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:50:57 by juanherr          #+#    #+#             */
/*   Updated: 2025/05/16 15:06:54 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie	*zombie;

    randomChump("Carlos");
    zombie = newZombie("Juan");
    zombie->announce();
    delete zombie;
    return (0);
}

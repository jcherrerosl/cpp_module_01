/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:14:41 by juanherr          #+#    #+#             */
/*   Updated: 2025/07/13 17:17:13 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();

    club.setType("some other type of club");
    bob.attack();

    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();

    club.setType("another type of club");
    jim.attack();

    return (0);
}

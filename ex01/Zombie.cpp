/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:20:14 by juanherr          #+#    #+#             */
/*   Updated: 2025/07/13 16:46:52 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie " << _name << " created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Headshot! Zombie " << _name << " destroyed." << std::endl;
}

void Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}

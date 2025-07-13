/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:15:27 by juanherr          #+#    #+#             */
/*   Updated: 2025/07/13 17:16:06 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(nullptr)
{
    std::cout << "HumanB " << _name << " created." << std::endl;
}
HumanB::~HumanB()
{
    std::cout << "HumanB " << _name << " destroyed." << std::endl;
}
void HumanB::attack() const
{
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon to attack with!" << std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
    std::cout << "HumanB " << _name << " now has weapon: " << _weapon->getType() << std::endl;
}
const std::string &HumanB::getName() const
{
    return _name;
}
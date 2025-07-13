/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:13:28 by juanherr          #+#    #+#             */
/*   Updated: 2025/07/13 17:15:22 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA " << _name << " created with weapon: " << _weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "HumanA " << _name << " destroyed." << std::endl;
}
void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
const std::string &HumanA::getName() const
{
    return _name;
}
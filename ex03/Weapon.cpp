/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:16:14 by juanherr          #+#    #+#             */
/*   Updated: 2025/07/13 17:16:28 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type)
{
    std::cout << "Weapon created with type: " << _type << std::endl;
}
Weapon::~Weapon()
{
    std::cout << "Weapon of type " << _type << " destroyed." << std::endl;
}
const std::string &Weapon::getType() const
{
    return _type;
}
void Weapon::setType(const std::string &type)
{
    _type = type;
    std::cout << "Weapon type set to: " << _type << std::endl;
}

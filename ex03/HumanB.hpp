/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:12:28 by juanherr          #+#    #+#             */
/*   Updated: 2025/07/13 17:12:42 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
  private:
    std::string _name;
    Weapon *_weapon;

  public:
    HumanB(const std::string &name);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon &weapon);
    const std::string &getName() const;
};

#endif
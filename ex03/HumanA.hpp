/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:08:39 by juanherr          #+#    #+#             */
/*   Updated: 2025/07/13 17:11:34 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
  private:
    std::string _name;
    Weapon &_weapon;

  public:
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();
    void attack() const;
    const std::string &getName() const;
};

#endif
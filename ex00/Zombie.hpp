/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:24:23 by juanherr          #+#    #+#             */
/*   Updated: 2025/05/16 14:57:50 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
    
    private:
        std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:23:02 by juanherr          #+#    #+#             */
/*   Updated: 2025/07/13 16:55:41 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string strTrim(const std::string str, std::string toTrim)
{
    size_t start = str.find_first_not_of(toTrim);
    size_t end = str.find_last_not_of(toTrim);
    if (start == end && start == std::string::npos)
        return ("");
    return str.substr(start, end - start + 1);
}

int main()
{
    Zombie *horde;
    std::string hordeSize;
    std::cout << "Enter the number of zombies in the horde: ";
    std::getline(std::cin, hordeSize);
    if (std::cin.eof())
    {
        std::cerr << "Input ended unexpectedly." << std::endl;
        return (1);
    }
    hordeSize = strTrim(hordeSize, " \t\n\r\f\v");
    if (hordeSize.empty() || hordeSize.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cerr << "Invalid input. Please enter a valid number." << std::endl;
        return (1);
    }
    int N = std::stoi(hordeSize);
    
    std::string name;
    std::cout << "Enter the name for the zombies: ";
    std::getline(std::cin, name);
    
    horde = zombieHorde(N, name);
    
    if (!horde)
    {
        std::cerr << "Failed to create zombie horde." << std::endl;
        return (1);
    }
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }

    delete[] horde;
    return (0);
}
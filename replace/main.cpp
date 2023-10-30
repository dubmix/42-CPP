/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:47:38 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/10 14:43:21 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int replace(char *argv[], std::string str, int size)
{
    std::ofstream newFile;
    std::string newFileName;
    int pos;

    newFile.open((std::string(argv[1]) + ".replace").c_str());
    if (!newFile.is_open())
        return (1);
    for (int i = 0; i < size; i++)
    {
        pos = str.find(argv[2], i);
        if (pos != -1 && pos == i)
        {
            newFile << argv[3];
            i += std::string(argv[2]).size() - 1;
        }
        else
            newFile << str[i];
    }
    newFile.close();
    return (0);
}

int main(int argc, char *argv[])
{
    char    c;
    int     i = 0;
    std::ifstream   file;
    std::string     str;
    
    if (argc != 4)
    {
        std::cout << "Program needs 3 parameters" << std::endl;
        return (0);
    }
    file.open(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return (1);
    }
    while(file.get(c))
    {
        i++;
        str += c;
    }
    file.close();
    if (replace(argv, str, i) != 0)
    {
        std::cout << "Error creating new file" << std::endl;
        return (1);
    }
    return (0);
}
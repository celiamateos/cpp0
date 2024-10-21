/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megafone.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:59:31 by cmateos-          #+#    #+#             */
/*   Updated: 2024/09/30 17:59:32 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream> //  std::cout (write fd 1), std::cerr (write fd 2)
#include <cctype>  // Para std::toupper (convert to uppercase)
#include <string>  // Para std::string (declare y modified string)

int main(int argc, char* argv[])
{
    // verify number of args and put mss follow of new line
    if (argc < 2) {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }

    // concatenate args in one string
    std::string texto;
    for (int i = 1; i < argc; ++i)
    {
        texto += argv[i];
        if (i < argc - 1)
            texto += " ";  // Add space between args
    }

    // convert over char toupper
    std::string::size_type i = 0;
    while (i < texto.length())
    {
        texto[i] = std::toupper(texto[i]);
        ++i;
    }

    // print text output
    std::cout << texto << std::endl;

    return 0;
}



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
#include <iostream>
#include <cctype>  // Para std::toupper
#include <string>  // Para std::string

int main(int argc, char* argv[])
{
    // Verificar si se pasó algún argumento
    if (argc < 2) {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }

    // Concatenar los argumentos en una sola cadena
    std::string texto;
    for (int i = 1; i < argc; ++i)
    {
        texto += argv[i];
        if (i < argc - 1)
            texto += " ";  // Añadir espacio entre los argumentos
    }

    // Convertir cada carácter a mayúscula
    std::string::size_type i = 0;
    while (i < texto.length())
    {
        texto[i] = std::toupper(texto[i]);
        ++i;
    }

    // Mostrar el texto en mayúsculas
    std::cout << texto << std::endl;

    return 0;
}



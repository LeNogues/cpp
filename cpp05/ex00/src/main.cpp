/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:07:08 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/24 15:52:03 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"
#include <sstream>

int main()
{
    std::cout << "--- Test 1: Création de bureaucrates valides ---" << std::endl;
    try
    {
        Bureaucrat b1("Hermes", 1);
        std::cout << b1 << std::endl;

        Bureaucrat b2("Zoidberg", 150);
        std::cout << b2 << std::endl;

        Bureaucrat b3("Leela", 42);
        std::cout << b3 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception inattendue: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 2: Grade trop élevé à la construction ---" << std::endl;
    try
    {
        Bureaucrat invalid("Trop Haut", 0);
        std::cout << "ERREUR: Ce message ne devrait pas s'afficher." << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << "Exception capturée comme prévu: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception inattendue capturée: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 3: Grade trop bas à la construction ---" << std::endl;
    try
    {
        Bureaucrat invalid("Trop Bas", 151);
        std::cout << "ERREUR: Ce message ne devrait pas s'afficher." << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << "Exception capturée comme prévu: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception inattendue capturée: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 4: Incrémentation de grade ---" << std::endl;
    try
    {
        Bureaucrat b("Testeur", 3);
        std::cout << "Initial: " << b << std::endl;
        
        b.incrementGrade();
        std::cout << "Après 1 incrémentation: " << b << std::endl;
        
        b.incrementGrade();
        std::cout << "Après 2 incrémentations: " << b << std::endl;

        b.incrementGrade();
        std::cout << "ERREUR: Ce message ne devrait pas s'afficher." << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << "Exception capturée comme prévu: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception inattendue capturée: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 5: Décrémentation de grade ---" << std::endl;
    try
    {
        Bureaucrat b("Testeur", 148);
        std::cout << "Initial: " << b << std::endl;

        b.decrementGrade();
        std::cout << "Après 1 décrémentation: " << b << std::endl;

        b.decrementGrade();
        std::cout << "Après 2 décrémentations: " << b << std::endl;

        b.decrementGrade();
        std::cout << "ERREUR: Ce message ne devrait pas s'afficher." << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << "Exception capturée comme prévu: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception inattendue capturée: " << e.what() << std::endl;
    }
    std::cout << "\n--- Test 6: Vérification des getters ---" << std::endl;
    Bureaucrat b_getters("Fry", 100);
    std::cout << "Utilisation de getName(): " << b_getters.getName() << std::endl;
    std::cout << "Utilisation de getGrade(): " << b_getters.getGrade() << std::endl;
    std::cout << "Vérification avec l'opérateur <<: " << b_getters << std::endl;

    return 0;
}


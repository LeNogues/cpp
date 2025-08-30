/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:07:08 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/24 16:05:03 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/Bureaucrat.hpp"
# include "../header/Form.hpp"

#include <sstream>

int main()
{
    // Test 1: Création de formulaires valides et invalides
    std::cout << "--- Test 1: Création de formulaires ---" << std::endl;
    try
    {
        Form f1("C-38", 25, 50);
        std::cout << f1 << std::endl;

        Form f2("A-12", 1, 1);
        std::cout << f2 << std::endl;

        // Test de grade trop haut
        std::cout << "\nTentative de création d'un formulaire avec un grade de signature de 0..." << std::endl;
        Form f_invalid_high("Invalid-High", 0, 100);
    }
    catch (const Form::GradeTooHighException &e)
    {
        std::cerr << "Exception capturée comme prévu: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception inattendue: " << e.what() << std::endl;
    }

    try
    {
        // Test de grade trop bas
        std::cout << "\nTentative de création d'un formulaire avec un grade d'exécution de 151..." << std::endl;
        Form f_invalid_low("Invalid-Low", 100, 151);
    }
    catch (const Form::GradeTooLowException &e)
    {
        std::cerr << "Exception capturée comme prévu: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception inattendue: " << e.what() << std::endl;
    }

    std::cout << "\n----------------------------------------\n" << std::endl;

    // Test 2: Signature de formulaire réussie
    std::cout << "--- Test 2: Signature réussie ---" << std::endl;
    try
    {
        Bureaucrat b_signer("Hermes", 30);
        Form form_to_sign("Demande de vacances", 40, 80);

        std::cout << b_signer << std::endl;
        std::cout << form_to_sign << std::endl;

        b_signer.signForm(form_to_sign);

        std::cout << "\nAprès la tentative de signature :" << std::endl;
        std::cout << form_to_sign << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception inattendue: " << e.what() << '\n';
    }
    
    std::cout << "\n----------------------------------------\n" << std::endl;

    // Test 3: Échec de la signature (grade trop bas)
    std::cout << "--- Test 3: Échec de la signature (grade trop bas) ---" << std::endl;
    try
    {
        Bureaucrat b_low_grade("Zoidberg", 100);
        Form form_high_req("Promotion interne", 50, 20);

        std::cout << b_low_grade << std::endl;
        std::cout << form_high_req << std::endl;
        
        b_low_grade.signForm(form_high_req);

        std::cout << "\nAprès la tentative de signature :" << std::endl;
        std::cout << form_high_req << std::endl;
    }
    catch(const std::exception& e)
    {
        // Note: La fonction signForm gère l'exception en interne et l'affiche,
        // donc on ne s'attend pas à ce qu'une exception atteigne le main ici.
        std::cerr << "Exception inattendue dans le main: " << e.what() << '\n';
    }

    std::cout << "\n----------------------------------------\n" << std::endl;

    // Test 4: Le bureaucrate de plus haut niveau signe tout
    std::cout << "--- Test 4: Le bureaucrate de niveau 1 signe un formulaire de niveau 1 ---" << std::endl;
    try
    {
        Bureaucrat god_tier("Le Grand Fromage", 1);
        Form super_important_form("Déclaration de guerre", 1, 1);
        
        std::cout << god_tier << std::endl;
        std::cout << super_important_form << std::endl;

        god_tier.signForm(super_important_form);
        
        std::cout << "\nAprès la tentative de signature :" << std::endl;
        std::cout << super_important_form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception inattendue: " << e.what() << '\n';
    }

    return 0;
}


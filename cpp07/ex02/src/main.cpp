
#include <iostream>
#include <string>
#include "../header/Array.hpp"

#define MAX_VAL 10

int main(void)
{
    // --- Test 1: Constructeur par défaut et avec taille ---
    std::cout << "--- TEST 1: CONSTRUCTION ---" << std::endl;
    Array<int> empty_array;
    std::cout << "Size of default-constructed array: " << empty_array.size() << std::endl;

    Array<int> numbers(MAX_VAL);
    std::cout << "Size of array constructed with size " << MAX_VAL << ": " << numbers.size() << std::endl;
    std::cout << "Initial values (should be 0):" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl << std::endl;

    // --- Test 2: Opérateur [] pour l'écriture ---
    std::cout << "--- TEST 2: WRITING WITH [] OPERATOR ---" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = i * 2;
    }
    std::cout << "Values after modification:" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl << std::endl;

    // --- Test 3: Constructeur de copie et Opérateur d'assignation ---
    std::cout << "--- TEST 3: COPY AND ASSIGNMENT ---" << std::endl;
    {
        // Test du constructeur de copie
        Array<int> copy_constructed = numbers;
        std::cout << "Values of the copied array (copy constructor):" << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            std::cout << copy_constructed[i] << " ";
        }
        std::cout << std::endl;

        // Test de l'opérateur d'assignation
        Array<int> assigned_array;
        assigned_array = numbers;
        std::cout << "Values of the assigned array (assignment operator):" << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            std::cout << assigned_array[i] << " ";
        }
        std::cout << std::endl;

        // Vérification de la copie profonde (deep copy)
        std::cout << "Modifying original array at index 0 to 999..." << std::endl;
        numbers[0] = 999;
        std::cout << "Original array's first element: " << numbers[0] << std::endl;
        std::cout << "Copied array's first element (should be unchanged): " << copy_constructed[0] << std::endl;
        std::cout << "Assigned array's first element (should be unchanged): " << assigned_array[0] << std::endl;
    }
    std::cout << std::endl;

    // --- Test 4: Accès hors limites (exceptions) ---
    std::cout << "--- TEST 4: OUT OF BOUNDS ACCESS ---" << std::endl;
    try
    {
        std::cout << "Trying to access index -2..." << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "SUCCESS: Exception caught! " << e.what() << std::endl;
    }
    try
    {
        std::cout << "Trying to access index MAX_VAL (" << MAX_VAL << ")..." << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "SUCCESS: Exception caught! " << e.what() << std::endl;
    }
    std::cout << std::endl;

    // --- Test 5: Utilisation avec un objet const ---
    std::cout << "--- TEST 5: CONST OBJECT ---" << std::endl;
    const Array<int> const_numbers = numbers;
    std::cout << "Reading from const array at index 1: " << const_numbers[1] << std::endl;
    // La ligne suivante DOIT provoquer une erreur de compilation si décommentée, ce qui est le comportement attendu.
    // const_numbers[1] = 42;
    std::cout << "SUCCESS: Reading from a const object works, and writing is forbidden by the compiler." << std::endl << std::endl;


    // --- Test 6: Utilisation avec un autre type (std::string) ---
    std::cout << "--- TEST 6: STRING ARRAY ---" << std::endl;
    Array<std::string> string_array(3);
    string_array[0] = "Hello";
    string_array[1] = "World";
    string_array[2] = "!";
    std::cout << "String array content: ";
    for (size_t i = 0; i < string_array.size(); i++)
    {
        std::cout << string_array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

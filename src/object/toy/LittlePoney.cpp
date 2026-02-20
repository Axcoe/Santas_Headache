/* ------------------------------------------------------------------------------------ *
 *                                                                                      *
 * EPITECH PROJECT - Sat, Feb, 2026                                                     *
 * Title           - Santas_Headache                                                    *
 * Description     -                                                                    *
 *     LittlePoney                                                                      *
 *                                                                                      *
 * ------------------------------------------------------------------------------------ *
 *                                                                                      *
 *         ░        ░       ░░        ░        ░        ░░      ░░  ░░░░  ░             *
 *         ▒  ▒▒▒▒▒▒▒  ▒▒▒▒  ▒▒▒▒  ▒▒▒▒▒▒▒  ▒▒▒▒  ▒▒▒▒▒▒▒  ▒▒▒▒  ▒  ▒▒▒▒  ▒             *
 *         ▓      ▓▓▓       ▓▓▓▓▓  ▓▓▓▓▓▓▓  ▓▓▓▓      ▓▓▓  ▓▓▓▓▓▓▓        ▓             *
 *         █  ███████  ██████████  ███████  ████  ███████  ████  █  ████  █             *
 *         █        █  ███████        ████  ████        ██      ██  ████  █             *
 *                                                                                      *
 * ------------------------------------------------------------------------------------ */

#include "LittlePoney.hpp"

LittlePoney::LittlePoney()
{
    // Default constructor
}

void LittlePoney::isTaken()
{
    _taken = true;
    std::cout << "yo man" << std::endl;
}

std::ostream& operator<<(std::ostream &stream, const LittlePoney& littlePoney)
{
    if (littlePoney.getTaken())
        stream << "LittlePoney is taken";
    else
        stream << "LittlePoney isn't taken";
    return stream;
}

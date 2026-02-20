/* ------------------------------------------------------------------------------------ *
 *                                                                                      *
 * EPITECH PROJECT - Sat, Feb, 2026                                                     *
 * Title           - Santas_Headache                                                    *
 * Description     -                                                                    *
 *     LittlePony                                                                      *
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

#include "LittlePony.hpp"

LittlePony::LittlePony()
{
    // Default constructor
}

void LittlePony::isTaken()
{
    _taken = true;
    std::cout << "yo man" << std::endl;
}

void LittlePony::print(std::ostream& os) const
{
    os << _taken ? "little pony is taken" : "little pony isn't taken";
}

std::ostream& operator<<(std::ostream &stream, const LittlePony& littlePony)
{
    if (littlePony.getTaken())
        stream << "LittlePony is taken";
    else
        stream << "LittlePony isn't taken";
    return stream;
}

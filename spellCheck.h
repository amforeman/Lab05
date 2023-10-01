/*
 * File: spellCheck.h
 * -------------------------
 * Exports a function to correct the spelling of a student's name.
 */

# ifndef _spellCheck_h
#define _spellCheck_h

#include <string>

/*
 * Method: spellCheck
 * Usage: newRecLetter = spellCheck(recLetter, studentName);
 * ----------------------------------------------------------
 *
 */
std::string spellCheck(std::string recLetter, std::string studentName);

#endif

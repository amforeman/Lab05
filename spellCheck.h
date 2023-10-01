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
 * Takes a string representing a recommendation letter and a string representing
 * the correct spelling of a student's name.
 * The function replaces all instances of the incorrect spelling of the student's
 * name with the correct spelling.
 * Returns a string of the recommendation letter with the correct spelling.
 */
std::string spellCheck(std::string recLetter, std::string studentName);

#endif

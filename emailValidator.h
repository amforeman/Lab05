/*
 * File: emailValidator.h
 *-------------------------------
 * This file exports a function to validate email addresses
 */

#ifndef _emailValidator_h
#define _emailValidator_h

#include <string>

/*
 * Method: emailValidator
 * Usage: bool valid = emailValidator(s);
 * ---------------------------------------
 * Takes a string that represents a potential email address and returns
 * whether or not that email is valid according to the given restraints:
 *   form: firstName.lastName@domain.domainExtension
 *   firstName: at least 1 character, no longer than 20 characters, valid
 *       characters are a-z, A-Z, 0-9.
 *   lastName: at least 1 character long, valid characters are !, $, &, a-z, A-Z.
 *   @ in between lastName and domain.
 *   domain: at least 1 character, no longer than 20 characters, valid
 *       characters are a-z.
 *   . between domain and domainExtension.
 *   domainExtension: between 1 and 3 characters long, valid characters are a-z.
 *   There can be no spaces.
 * Returns true if the given string is a valid email address and false if the
 * string is invalid.
 */
bool emailValidator(std::string s);

#endif

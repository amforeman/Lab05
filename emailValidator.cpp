/*
 * File: emailValidator.cpp
 * ----------------------------
 * This file implements the email validator function
 */

#include "emailValidator.h"
#include <string>
#include <regex>

bool emailValidator(std::string s) {
  std::regex email ("[a-zA-Z0-9]{1,20}[.][a-zA-Z!$&]+[@][a-z]{1,20}[.][a-z]{1,3}");
  bool match = std::regex_match(s, email);
  return match;
}

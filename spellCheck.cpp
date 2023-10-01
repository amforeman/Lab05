/*
 * File: spellCheck.cpp
 * -----------------------
 * This file implements the spellCheck function.
 */

#include "spellCheck.h"
#include <string>
#include <regex>

std::string spellCheck(std::string recLetter, std::string studentName) {
  std::regex inputName("([Bb]art)[a-zA-Z]*");
  std::string newRecLetter = std::regex_replace(recLetter, inputName, studentName);
  return newRecLetter;
}

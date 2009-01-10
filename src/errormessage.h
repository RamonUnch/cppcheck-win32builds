/*
 * cppcheck - c/c++ syntax checking
 * Copyright (C) 2007-2009 Daniel Marjamäki, Reijo Tomperi, Nicolas Le Cam
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/
 */

// THIS FILE IS GENERATED BY MACHINE, SEE ../tools/errmsg.cpp !

#ifndef errormessageH
#define errormessageH
#include <string>
#include "settings.h"
class Token;
class Tokenizer;
class ErrorMessage
{
private:
    ErrorMessage() { }
    static std::string msg1(const Tokenizer *tokenizer, const Token *Location);
public:
    static std::string noConstructor(const Tokenizer *tokenizer, const Token *Location, const std::string &classname)
    {
        return msg1(tokenizer, Location) + "The class '" + classname + "' has no constructor";
    }
    static bool noConstructor(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static std::string uninitVar(const Tokenizer *tokenizer, const Token *Location, const std::string &classname, const std::string &varname)
    {
        return msg1(tokenizer, Location) + "Uninitialized member variable '" + classname + "::" + varname + "'";
    }
    static bool uninitVar(const Settings &s)
    {
        return true;
    }

    static std::string memleak(const Tokenizer *tokenizer, const Token *Location, const std::string &varname)
    {
        return msg1(tokenizer, Location) + "Memory leak: " + varname + "";
    }
    static bool memleak(const Settings &s)
    {
        return true;
    }

    static std::string resourceLeak(const Tokenizer *tokenizer, const Token *Location, const std::string &varname)
    {
        return msg1(tokenizer, Location) + "Resource leak: " + varname + "";
    }
    static bool resourceLeak(const Settings &s)
    {
        return true;
    }

    static std::string cstyleCast(const Tokenizer *tokenizer, const Token *Location)
    {
        return msg1(tokenizer, Location) + "C-style pointer casting";
    }
    static bool cstyleCast(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static std::string redundantIfDelete0(const Tokenizer *tokenizer, const Token *Location)
    {
        return msg1(tokenizer, Location) + "Redundant condition. It is safe to deallocate a NULL pointer";
    }
    static bool redundantIfDelete0(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static std::string redundantIfRemove(const Tokenizer *tokenizer, const Token *Location)
    {
        return msg1(tokenizer, Location) + "Redundant condition. The remove function in the STL will not do anything if element doesn't exist";
    }
    static bool redundantIfRemove(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static std::string dangerousUsageStrtol(const Tokenizer *tokenizer, const Token *Location)
    {
        return msg1(tokenizer, Location) + "Invalid radix in call to strtol or strtoul. Must be 0 or 2-36";
    }
    static bool dangerousUsageStrtol(const Settings &s)
    {
        return true;
    }

};
#endif

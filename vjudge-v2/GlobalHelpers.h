/* 
 * File:   GlobalHelpers.h
 * Author: 51isoft
 *
 * Created on 2014年1月14日, 上午12:17
 */

#ifndef GLOBALHELPERS_H
#define	GLOBALHELPERS_H

#include <string.h>
#include <stdio.h>

#include <string>
#include <vector>
#include <istream>
#include <sstream>
#include <fstream>

using namespace std;

#include "Config.h"
#include "Logger.h"

string trim(string);
string loadAllFromFile(string);
string intToString(int);
string unescapeString(string);
string escapeURL(const string &);
int stringToInt(string);
const string currentDateTime();
const string currentDate();
vector<string> split(const string &, char, bool);
vector<string> split(const string &, char);
#define CONFIG Config::Getinstance()
#define LOG Logger::Getinstance()->log

extern "C" size_t decode_html_entities_utf8(char *dest, const char *src);

#endif	/* GLOBALHELPERS_H */


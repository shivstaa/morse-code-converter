// MorseEnglishConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Author: Shiv Shah
* Date: 10/09/2021
* Description: Morse Code to English/English to Morse Code Converter
* Usage: <exe> <input file> <-mc|-e> <output file>
*/

#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

//Convert morse code into english
char MorsetoEnglish(char* convertME) { //passes in parameter of type char* that will contain the passed in 
	//algorithm: compares the passed in string with the string of a particular letter or character
	//compare string passed in with slash (converts to space)
	if (strcmp(convertME, "/") == 0) {return ' ';}
	//convert morse letters a-z into english letters a-z (kept lowercase)
	else if (strcmp(convertME, ".-") == 0) {return 'a';}
	else if (strcmp(convertME, "-...") == 0) {return 'b';}
	else if (strcmp(convertME, "-.-.") == 0) {return 'c';}
	else if (strcmp(convertME, "-..") == 0) {return 'd';}
	else if (strcmp(convertME, ".") == 0) {return 'e';}
	else if (strcmp(convertME, "..-.") == 0) {return 'f';}
	else if (strcmp(convertME, "--.") == 0) {return 'g';}
	else if (strcmp(convertME, "....") == 0) {return 'h';}
	else if (strcmp(convertME, "..") == 0) {return 'i';}
	else if (strcmp(convertME, ".---") == 0) {return 'j';}
	else if (strcmp(convertME, "-.-") == 0) {return 'k';}
	else if (strcmp(convertME, ".-..") == 0) {return 'l';}
	else if (strcmp(convertME, "--") == 0) {return 'm';}
	else if (strcmp(convertME, "-.") == 0) {return 'n';}
	else if (strcmp(convertME, "---") == 0) {return 'o';}
	else if (strcmp(convertME, ".--.") == 0) {return 'p';}
	else if (strcmp(convertME, "--.-") == 0) {return 'q';}
	else if (strcmp(convertME, ".-.") == 0) {return 'r';}
	else if (strcmp(convertME, "...") == 0) {return 's';}
	else if (strcmp(convertME, "-") == 0) {return 't';}
	else if (strcmp(convertME, "..-") == 0) {return 'u';}
	else if (strcmp(convertME, "...-") == 0) {return 'v';}
	else if (strcmp(convertME, ".--") == 0) {return 'w';}
	else if (strcmp(convertME, "-..-") == 0) {return 'x';}
	else if (strcmp(convertME, "-.--") == 0) {return 'y';}
	else if (strcmp(convertME, "--..") == 0) { return 'z';}
	//compare digits 0-9; convert to numeric value
	else if (strcmp(convertME, ".----") == 0) {return '1';}
	else if (strcmp(convertME, "..---") == 0) {return '2';}
	else if (strcmp(convertME, "...--") == 0) {return '3';}
	else if (strcmp(convertME, "....-") == 0) {return '4';
	else if (strcmp(convertME, ".....") == 0) {return '5';}
	else if (strcmp(convertME, "-....") == 0) {return '6';}
	else if (strcmp(convertME, "--...") == 0) {return '7';}
	else if (strcmp(convertME, "---..") == 0) {return '8';}
	else if (strcmp(convertME, "----.") == 0) {return '9';}
	else if (strcmp(convertME, "-----") == 0) {return '0';}
	//comma
	else if (strcmp(convertME, "..-..") == 0) {return ',';}
	//period
	else if (strcmp(convertME, ".-.-.-") == 0) {return '.';}
	//question mark
	else if (strcmp(convertME, "..--..") == 0) {return '?';}
	//semicolon
	else if (strcmp(convertME, "-.-.-") == 0) {return ';';}
	//colon
	else if (strcmp(convertME, "---...") == 0) {return ':';}
	//back slash
	else if (strcmp(convertME, "-..-.") == 0) {return '/';}
	//plus symbol
	else if (strcmp(convertME, ".-.-.") == 0) {return '+';}
	//minus symbol
	else if (strcmp(convertME, "-....-") == 0) {return '-';}
	//equal symbol
	else if (strcmp(convertME, "-...-") == 0) {return '=';}
						   
	//if the string passed in is not a morse code phrase or slash, it will return and print a # instead
	else {return '#';}
}

//Convert English to Morse Code
char* englishToMorse(char buffer) { //parameter passed in is of type char; parameter will contain the character we want to compare by
	char* rS = (char*)malloc(5 * sizeof(char)); //create a char* with memory allocated for 
	if (buffer == ' ') { //checks if the character being compared in buffer is a space
		strcpy(rS, "/"); //stores "/" in the char* used
		return rS; //returns the char* at the time of use
	}
	//check for buffer if it is the same as the characters a-z or A-Z; if so, it will store the morse code equivalent and return it
	else if (buffer == 'a' || buffer == 'A') { strcpy(rS, ".-"); return rS;}
	else if (buffer == 'b' || buffer == 'B') { strcpy(rS, "-..."); return rS;}
	else if (buffer == 'c' || buffer == 'C') { strcpy(rS, "-.-."); return rS;}
	else if (buffer == 'd' || buffer == 'D') { strcpy(rS, "-.."); return rS;}
	else if (buffer == 'e' || buffer == 'E') { strcpy(rS, "."); return rS;}
	else if (buffer == 'f' || buffer == 'F') { strcpy(rS, "..-."); return rS;}
	else if (buffer == 'g' || buffer == 'G') { strcpy(rS, "--."); return rS;}
	else if (buffer == 'h' || buffer == 'H') { strcpy(rS, "...."); return rS;}
	else if (buffer == 'i' || buffer == 'I') { strcpy(rS, ".."); return rS;}
	else if (buffer == 'j' || buffer == 'J') { strcpy(rS, ".---"); return rS;}
	else if (buffer == 'k' || buffer == 'K') { strcpy(rS, "-.-"); return rS;}
	else if (buffer == 'l' || buffer == 'L') { strcpy(rS, ".-.."); return rS;}
	else if (buffer == 'm' || buffer == 'M') { strcpy(rS, "--"); return rS;}
	else if (buffer == 'n' || buffer == 'N') { strcpy(rS, "-."); return rS;}
	else if (buffer == 'o' || buffer == 'O') { strcpy(rS, "---"); return rS;}
	else if (buffer == 'p' || buffer == 'P') { strcpy(rS, ".--."); return rS;}
	else if (buffer == 'q' || buffer == 'Q') { strcpy(rS, "--.-"); return rS;}
	else if (buffer == 'r' || buffer == 'R') { strcpy(rS, ".-."); return rS;}
	else if (buffer == 's' || buffer == 'S') { strcpy(rS, "..."); return rS;}
	else if (buffer == 't' || buffer == 'T') { strcpy(rS, "-"); return rS;}
	else if (buffer == 'u' || buffer == 'U') { strcpy(rS, "..-"); return rS;}
	else if (buffer == 'v' || buffer == 'V') { strcpy(rS, "...-"); return rS;}
	else if (buffer == 'w' || buffer == 'W') { strcpy(rS, ".--"); return rS;}
	else if (buffer == 'x' || buffer == 'X') { strcpy(rS, "-..-"); return rS;}
	else if (buffer == 'y' || buffer == 'Y') { strcpy(rS, "-.--"); return rS;}
	else if (buffer == 'z' || buffer == 'Z') { strcpy(rS, "--.."); return rS;}
	//numbers
	else if (buffer == '1') { strcpy(rS, ".----"); return rS;}
	else if (buffer == '2') { strcpy(rS, "..---"); return rS;}
	else if (buffer == '3') { strcpy(rS, "...--"); return rS;}
	else if (buffer == '4') { strcpy(rS, "....-"); return rS;}
	else if (buffer == '5') { strcpy(rS, "....."); return rS;}
	else if (buffer == '6') { strcpy(rS, "-...."); return rS;}
	else if (buffer == '7') { strcpy(rS, "--..."); return rS;}
	else if (buffer == '8') { strcpy(rS, "---.."); return rS;}
	else if (buffer == '9') { strcpy(rS, "----."); return rS;}
	else if (buffer == '0') { strcpy(rS, "-----"); return rS;}
	//other characters
	else if (buffer == ',') { strcpy(rS, "..-.."); return rS;}
	else if (buffer == '.') { strcpy(rS, ".-.-.-"); return rS;}
	else if (buffer == '?') { strcpy(rS, "..--.."); return rS;}
	else if (buffer == ';') { strcpy(rS, "-.-.-"); return rS;}
	else if (buffer == ':') { strcpy(rS, "---..."); return rS;}
	else if (buffer == '/') { strcpy(rS, "-..-."); return rS;}
	else if (buffer == '+') { strcpy(rS, ".-.-."); return rS;}
	else if (buffer == '-') { strcpy(rS, "-....-"); return rS;}
	else if (buffer == '=') { strcpy(rS, "-...-"); return rS;}
	
	//if the characters passed in was not a-z, A-Z, or a space, it will store and return "eeee" instead
	else { strcpy(rS, "eeee"); return rS;}
}

int main(int argc, char** argv) {

	char buffer[256]; //create a char array with size 256 which will store the information we pull from input files
	char* token; //create a char* that will be used for tokenizing

	ifstream file(argv[1]); //opens the input file (first argument on command prompt)
	ofstream outFile(argv[3]); //opens the output file (third argument on command prompt)

	const char* flagcheckEng = "-e"; //checks for Morse to English flag
	const char* flagcheckMors = "-mc"; //checks for English to Morse flag

	if (strcmp(argv[2], flagcheckEng) == 0) { //compares the 2nd argument on the command line with the string flag
		//translate to english
		while (file.getline(buffer, 1785)) { //max of 1785 characters on one particular line, buffer will be read row by row
			token = strtok(buffer, "|"); //tokenize by any "|" encountered, first instance on a new line

			while (token != NULL) { //iterates through token until the end of the line
				outFile << MorsetoEnglish(token); //outputs the character converted to the output file
				token = strtok(NULL, "|"); //tokenize by any "|" encountered (seperates each character from each other)
			}

			outFile << "\n"; //outputs newline character to output file to start a new line
		}
		file.close(); //closes the input file
		outFile.close(); //closes the output file
	}
	else if (strcmp(argv[2], flagcheckMors) == 0) {
		//translate to morse code
		while (file.getline(buffer, 255)) { //max of 255 characters on one particular line, buffer will be read row by row

			for (int i = 0; (size_t)i < strlen(buffer); i++) { //iterates until the length of buffer - 1 is reached (last character is null)
				outFile << englishToMorse(buffer[i]); //outputs the morse string converted to the output file

				//as long as the next character in buffer is not null... 
				//will output a "|" between each character to the output file
				if (buffer[i + 1] != '\0') {
					outFile << "|";
				}
			}
			outFile << "\n"; //output a newline character to the output file when a line is converted
		}
		file.close(); //closes input file
		outFile.close(); //closes output file
	}
	else { //if there is an issue with the argv checks, will output this error
		printf("ERR: argument mismatch, please check arguments match usage <exe> <input file> <-mc|-e> <output file>\n");
	}

	return 0;
}

# Spell Checker

A simple spell checker program implemented in C++ using standard library features like fstream, string, and iostream.

## Features

- Checks the spelling of a word against a list of words in a text file.
- Provides suggestions for misspelled words based on character substitutions.

## Usage

1. **Clone the Repository**: Clone this repository to your local machine using the following command:
    ```
    git clone https://github.com/fatimaqurban/spell-checker.git
    ```

2. **Compile the Program**: Compile the program using a C++ compiler. For example:
    ```
    g++ spell_checker.cpp -o spell_checker
    ```

3. **Run the Program**: Execute the compiled program and enter the word you want to spell-check:
    ```
    ./spell_checker
    ```

4. **Input**: Enter the word you want to spell-check. Ensure that the word is in lowercase alphabets.

5. **Output**: The program will determine if the word is spelled correctly or provide suggestions if it is misspelled.

## File Structure

- `spell_checker.cpp`: Main source code file containing the spell checker implementation.
- `words.txt`: Text file containing a list of valid words for spell checking.

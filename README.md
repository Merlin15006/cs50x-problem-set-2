# cs50x-problem-set-2
Dive into problem set 2 of Harvard's CS50x! Explore my solutions, learn computer science fundamentals, and join the coding adventure.

1.Project Name: Scrabble Word Scorer  
- Language: C  
- Folder Structure: Place scrabble.c inside a folder named scrabble  
- Purpose: Simulates a short Scrabble-like game where two players enter words and score points based on letter values  
- Scoring System:  
  - A, E, I, O, U, L, N, S, T, R → 1 point  
  - D, G → 2 points  
  - B, C, M, P → 3 points  
  - F, H, V, W, Y → 4 points  
  - K → 5 points  
  - J, X → 8 points  
  - Q, Z → 10 points  
- How It Works:  
  - Prompts Player 1 and Player 2 to enter words  
  - Calculates total score for each word  
  - Compares scores and prints:  
    - Player 1 wins!  
    - Player 2 wins!  
    - Tie!  
- Sample Input & Output:  
  `bash
  $ ./scrabble  
  Player 1: red  
  Player 2: wheelbarrow  
  Player 2 wins!

  $ ./scrabble  
  Player 1: Scrabble  
  Player 2: wiNNeR  
  Player 1 wins!


2.Project Name: Readability Analyzer (CS50 Project)  
- Language: C  
- Folder Structure: Place readability.c inside a folder named readability  
- Purpose: Calculates the approximate U.S. grade level required to comprehend a given block of text using the Coleman-Liau index  
- Formula Used:  
  index = 0.0588  L - 0.296  S - 15.8  
  - L = average number of letters per 100 words  
  - S = average number of sentences per 100 words  
- How It Works:  
  - Prompts the user to input a block of text  
  - Counts letters, words, and sentences  
  - Calculates the readability index and rounds it to the nearest integer  
  - Prints:  
    - Grade X (where X is the rounded index)  
    - Grade 16+ if index ≥ 16  
    - Before Grade 1 if index < 1  
- Sample Input & Output:  
  `bash
  $ ./readability  
  Text: One fish. Two fish. Red fish. Blue fish.  
  Output: Before Grade 1

  $ ./readability  
  Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!  
  Output: Grade 3

  $ ./readability  
  Text: It was a bright cold day in April, and the clocks were striking thirteen...  
  Output: Grade 10



  3.Project Name: Caesar Cipher Encryption (CS50 Project)  
- Language: C  
- Folder Structure: Place caesar.c inside a folder named caesar  
- Purpose: Encrypts messages using Caesar’s cipher by shifting each alphabetical character by a user-defined key  
- Encryption Logic:  
  - Each letter is rotated by k positions in the alphabet  
  - Wraps around from Z to A if needed  
  - Preserves case (uppercase stays uppercase, lowercase stays lowercase)  
  - Non-alphabetical characters remain unchanged  
- Formula Used:  
  cipher = (plaintext + key) % 26  
  - A/a = 0, B/b = 1, ..., Z/z = 25  
- How It Works:  
  - Accepts a single command-line argument: a non-negative integer k  
  - If no argument or invalid input is given, prints an error and exits  
  - Prompts the user with plaintext: (two spaces, no newline)  
  - Encrypts the input and prints ciphertext: followed by the result  
  - Returns 0 after successful execution  
- Sample Input & Output:  
  `bash
  $ ./caesar 1  
  plaintext:  HELLO  
  ciphertext: IFMMP

  $ ./caesar 3  
  plaintext:  Hi  
  ciphertext: Kl

  $ ./caesar 27  
  plaintext:  Zebra!  
  ciphertext: Afcsb!



  

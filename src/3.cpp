
// This function generates a random number between 1 and 6.
int rollDice() {
    srand(time(0)); // seed the random number generator with current time
    int randomNumber = rand() % 6 + 1; // generate a random number between 1 and 6
    return randomNumber;
}
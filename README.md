# NumericalAnalysisInC

First assignment in Data Structures and Algorithms in C.

September 22, 2023

**1. Objective:**
   - The C project is designed to analyze a set of 10 numbers entered by the user.
   - It calculates various statistics such as minimum, maximum, sum, and average.
   - Additionally, it determines whether each number is prime and whether it is odd or even.

**2. Key Features:**
   - **User Input:**
     - Prompts the user to input 10 numbers.
     - Validates input, ensuring only numerical values are accepted.

   - **Number Analysis:**
     - Calculates and displays the minimum and maximum values in the set.
     - Computes the sum and average of the entered numbers.

   - **Number Classification:**
     - Utilizes functions to determine whether each number is prime.
     - Classifies numbers as odd or even using a separate function.

   - **Table Output:**
     - Prints a formatted table presenting each number along with its properties.
     - Table includes serial number, the original number, prime status, odd/even classification, and whether the number is the minimum or maximum in the set.

   - **Summary Statistics:**
     - Prints the sum and average of the entered numbers.

**3. Functions:**
   - **isPrime Function:**
     - Determines whether a given number is prime.
     - Iterates through possible divisors to check for divisibility.
     - Returns a boolean value indicating prime status.

   - **isOdd Function:**
     - Classifies a number as odd or even.
     - Uses the modulo operator to check divisibility by 2.
     - Returns a boolean value indicating odd or even classification.

**4. Input Validation:**
   - Ensures that only valid numerical inputs are accepted.
   - Provides appropriate feedback for incorrect input types.

**5. Number Comparison:**
   - Identifies the minimum and maximum values in the set of entered numbers.
   - Uses loops to iterate through the array to find these values.

**6. Table Representation:**
   - Prints a table summarizing the analysis of each number.
   - Utilizes conditional statements to label numbers as prime, odd/even, minimum, or maximum.

**7. Summary Output:**
   - Prints the total sum and average of the entered numbers.

**8. Conclusion:**
   - The project is a comprehensive tool for basic numerical analysis, incorporating user input, statistical calculations, and number classification.
   - It demonstrates fundamental programming concepts such as arrays, loops, functions, and conditional statements.
   - The output provides a clear and organized presentation of the analyzed data, making it accessible for users to interpret.

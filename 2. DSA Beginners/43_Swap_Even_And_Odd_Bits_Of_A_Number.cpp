/*

Given an unsigned integer N, swap all odd bits with even bits. Every even position bit is swapped with the adjacent bit on the right side and every odd position bit is swapped with adjacent on the left side. Assume a 32 bit integer.

Hint: To avoid negative values caused by integer overflow, utilize BigInt in your JavaScript code for handling large integer computations.BigInt is a JavaScript built-in object used to represent integers larger than the range supported by the Number primitive.

Input format
N which represents an unsigned integer.

Output format
Single output integer after the algorithm has successfully swapped bits of the input.

Constraints
0 <= N <= 2147483647

Sample Input 1
22

Sample Output 1
41

Explanation 1
The given number is 22 (00010110), it should be converted to 41 (00101001).

Sample Input 2
13

Sample Output 2
14

Explanation 2
The given number is 13 (00001101), it should be converted to 14 (00001110)
*/

unsigned int swapAllOddAndEvenBits(unsigned int n) {
      unsigned int evenBits=n&0xAAAAAAAA;//even bits 1 and odd bits 0
      unsigned int oddBits=n&0x55555555;// odd bits 1 and even bits 0

      evenBits>>=1;
      oddBits<<=1;

      return evenBits|oddBits;


}


/*
Let's dry run the provided function `swapAllOddAndEvenBits` using an example. We'll choose an example input for the unsigned integer \( n \). 

### Example Input
Let's take \( n = 29 \), which is \( 0001 1101 \) in binary (8 bits for clarity).

### Step 1: Setting Up
Convert \( n \) to binary:
```
n = 29 = 0001 1101 (binary)
```

### Step 2: Prepare Masks
The masks used in this function are:
- Even bits mask: `0xAAAAAAAA`
- Odd bits mask: `0x55555555`

In binary:
```
0xAAAAAAAA = 10101010 10101010 10101010 10101010  (32 bits)
0x55555555 = 01010101 01010101 01010101 01010101  (32 bits)
```

### Step 3: Apply Masks
Compute `evenBits` and `oddBits`:
1. **Calculate evenBits**: 
   ``` 
   evenBits = n & 0xAAAAAAAA 
             = 0001 1101 
             & 1010 1010 1010 1010 1010 1010 1010 1010 
             = 0000 1000 0000 0000 0000 0000 0000 0000 
             = 8 (in decimal)
   ```
   
2. **Calculate oddBits**:
   ```
   oddBits = n & 0x55555555 
           = 0001 1101 
           & 0101 0101 0101 0101 0101 0101 0101 0101 
           = 0001 0101 0000 0000 0000 0000 0000 0000 
           = 21 (in decimal)
   ```

### Step 4: Shift Bits
Now, we shift the results:
1. **Shift evenBits right**:
   ```
   evenBits >>= 1 
              = 0000 1000 
              >> 1 
              = 0000 0100  (4 in decimal)
   ```

2. **Shift oddBits left**:
   ```
   oddBits <<= 1 
             = 0001 0101 
             << 1 
             = 0010 1010 (42 in decimal)
   ```

### Step 5: Combine Results
Finally, we OR the shifted values:
```
return evenBits | oddBits 
                = 0000 0100  
                | 0010 1010  
                = 0010 1110 (46 in decimal)
```

### Final Result
The function returns **46**, which is \( 0010 1110 \) in binary.

### Summary
For the input \( n = 29 \), the function `swapAllOddAndEvenBits(29)` returns \( 46 \).

This method effectively swaps the odd and even bits of the input number \( n \).
*/

# Theory of Algorithms
An introduction to the theory of algorithms, especially the areas of computation and computability. We will also learn practical skills in the development of software using a selection of programming paradigms.


## What is the Sha512 Algorithm and why is it so important?
SHA-512 is a hashing algorithm that performs a hashing function on some data given to it. It is used for digital security for things such as blockchains and digital certificates. It has 512 bits and its output is represented by 128 hex charcters. 

## Running the Code
* Navigate the project directory and enter command prompt
* Enter './sha512 input.txt' to run the code.


## Questions
### Why can't we reverse the SHA512 algorithm to retrieve the original message from a hash digest?
* We are unable to reverse the SHA512 algorithm as hundreds of one-way operations take place sequentially and the results from earlier operations are used in later operations
* Hash algorithms ensure each bit of the output is dependent on each bit of the input. This is so that people cannot split the algorthm up in an attempt to reverse calculate an input from each bit of the output hash value seperately. You must know the entire input value in order to be able to solve a single output bit.

### Can you design an algorithm that, given enough time, will find input messages that give each of the possible 512-bit strings?
ANSWER HERE

### How difficult is it to find a hash digest beginning with at least twelve zeros?
ANSWER HERE

## Authors
             
* **Blaine Burke** - [GitHub](https://github.com/BurkeBlaine1999)

## Built With
* [C](https://visualstudio.microsoft.com/vs/features/cplusplus/) - Language Used

## Acknowledgments
[Ian McLoughlin ](https://github.com/ianmcloughlin) - Provided the Assignment

# Theory of Algorithms
This project uses the SHA512 Algorithm to encrypt text inputted from an input file.

## What is the Sha512 Algorithm, and why is it so important?
SHA-512 is a hashing algorithm that performs a hashing function on some data given to it. It is used for digital security for things such as blockchains and digital certificates. It has 512 bits and its output is represented by 128 hex characters. It is an extremely secure algorithm as changing a single character in the input changes the entire hash digest or output as seen in the diagram below.

![Diagram](https://github.com/BurkeBlaine1999/Theory-of-Algorithms/blob/main/digram.png?raw=true )

## Running the Code
* Navigate to the root directory of the project and enter command prompt.
* Enter './sha512 FILENAME.txt' to run the code. 

### Command Line arguments
* Navigate to the command prompt in the root directory of the project
* Enter "make clean" - This will remove the Sha512 and test executable files.
* Enter "make test" - This will test the Sha512 algorithm to ensure it is functioning correctly.

## Questions
### Why can't we reverse the SHA512 algorithm to retrieve the original message from a hash digest?
We are unable to reverse the SHA512 algorithm easily as hundreds of one-way operations take place sequentially and the results from earlier operations are used in later operations

Hash algorithms ensure each bit of the output is dependent on each bit of the input. This is so that people cannot split the algorithm up in an attempt to reverse calculate an input from each bit of the output hash value separately. You must know the entire input value in order to be able to solve a single output bit.

However, there are also websites with extensive databases that have billions of hashes from many word lists available on the internet. If you encrypt a string such as 'Test', it will save the plain text and hash value so when you or another person attempts to decrypt the hash value of 'Text', it will simply pluck the value from the database.  [Click here for the website!](https://md5decrypt.net/en/Sha512/)





### Can you design an algorithm that, given enough time, will find input messages that give each of the possible 512-bit strings?
Sha-512 is a secure hash function therefore knowing the hash value provides no useful information to us about the input. There are millions of possible outputs for sha-512 making it extremely difficult but not impossible. Using the birthday attack method and given enough time, there is a 100% chance of you finding the correct answer. Finding a collision using a birthday attack could take an extremely long time as there are 2^512 possible hash digests to get the correct input.


Here is a list of my used references for this question.

* [StackOverflow](https://stackoverflow.com/questions/6776050/how-long-to-brute-force-a-salted-sha-512-hash-salt-provided)
* [Birthday Attack Wikipedia](https://en.wikipedia.org/wiki/Birthday_attack)


### How difficult is it to find a hash digest beginning with at least twelve zeros?

As show in the diagram above, changing a single character in the input changes the entire output or hash digest. There are also 2^512 possible outputs making it even more difficult, Therefore finding an output with 12 0s is near impossible.


Here is a list of my used references for this question.

* [What data produces a SHA256 hash of all zero bits?](https://www.quora.com/What-data-produces-a-SHA256-hash-of-all-zero-bits?share=1)



## Authors
             
* **Blaine Burke** - [GitHub](https://github.com/BurkeBlaine1999)

## Built With
* [C](https://visualstudio.microsoft.com/vs/features/cplusplus/) - Language Used

## Acknowledgments
[Ian McLoughlin ](https://github.com/ianmcloughlin) - Provided the Assignment



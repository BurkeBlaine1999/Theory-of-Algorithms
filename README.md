# Theory of Algorithms
This project uses the SHA512 Algorithm to encrypt text inputed from an input file.

## What is the Sha512 Algorithm and why is it so important?
SHA-512 is a hashing algorithm that performs a hashing function on some data given to it. It is used for digital security for things such as blockchains and digital certificates. It has 512 bits and its output is represented by 128 hex charcters. 

## Running the Code
* Navigate the root directory of the project and enter command prompt.
* Enter './sha512 FILENAME.txt' to run the code. 


## Questions
### Why can't we reverse the SHA512 algorithm to retrieve the original message from a hash digest?
We are unable to reverse the SHA512 algorithm easily as hundreds of one-way operations take place sequentially and the results from earlier operations are used in later operations

Hash algorithms ensure each bit of the output is dependent on each bit of the input. This is so that people cannot split the algorthm up in an attempt to reverse calculate an input from each bit of the output hash value seperately. You must know the entire input value in order to be able to solve a single output bit.

However it is possible to decrypt a SHA512 algorithm given enough time as there is a finite amount of cominations possible. This method could take only a few seconds to work or could also take a very long time.

There are also websites with extensive databases that have billions of hashes from many word lists available on the internet. If you encrypt a string such as 'Test', it will save the plain text and hash value so when you or another person attempts to decrypt the hash value of 'Text', it will simply pluck the value from the database.  [Click here for the website!](https://md5decrypt.net/en/Sha512/)


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

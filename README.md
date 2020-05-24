# Basic Encryption

In this substitution cipher, I have “encrypted” in a basic way a message by replacing every letter with another letter. This was done by using a key. To “decrypt” the message, the receiver of the message would need to know the key, so that they can reverse the process.

A key, for example, might be the string NQXPOMAFTRHLZGECYJIUWSKDVB. This 26-character key means that A (the first letter of the alphabet) should be converted into N (the first character of the key), B (the second letter of the alphabet) should be converted into Q (the second character of the key), and so forth.

A message like HELLO, then, would be encrypted as FOLLE, replacing each of the letters according to the mapping determined by the key.


Example usage:
$ ./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI
plaintext:  hello, world
ciphertext: jrssb, ybwsp

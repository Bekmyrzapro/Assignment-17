# Assignment-17
File Compression and Decompression 
### by Bekmyrza Abdydayrov COM-20

This project implements a simple file compression and decompression utility in C++ using the Run-Length Encoding (RLE) technique. RLE is a lossless data compression method that reduces the size of data by replacing sequences of repeated characters with a single character followed by its count. This method is particularly efficient for data containing long sequences of repeated characters.

Compression Technique: Run-Length Encoding (RLE)
Overview of RLE
Run-Length Encoding works by scanning a sequence of characters, counting the number of consecutive repeats of each character, and then outputting the count followed by the character. For example, the string "AAAABBBCCDAA" is compressed to "4A3B2C1D2A".

Benefits and Limitations
Benefits:
Simple to implement.
Effective for texts with lots of repeated characters.

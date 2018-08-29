# Papyrus
This project implement the Longest common sub-sequence algorithm in the article "Document reconstruction using dynamic programming".

In section "2.3 Matching" of the article, they used formula (2). I noticed that they use a penalty value P ( they suggested P = −100)  to penalize the mismatching of any feature in LCS matrix. Therefore I simply set 0 value if it mismatch and 1 if it match. The result I obtained is the same of their example.

They compare two sequences:

X = {0223110133} 

Y = {0223101133} 

And the result of "longest common sub-sequence" is {02231}.

You can test more by following commands:

=> Run the project: ./Papyrus

=> Edit two sequences in "main.cpp" (vectorX and vectorY)

=> Compile the project: make

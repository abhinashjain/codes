#!/usr/bin/python
# coding: utf-8

astr=raw_input('')
bstr=raw_input('')
alen=len(astr)
blen=len(bstr)
if(alen != blen):
    if(alen > blen):
        print alen
    else:
        print blen
else:
    cnt=0
    for i in xrange(alen):
        if(astr[i] == bstr[i]):
            cnt+=1
        else:
            break
    if(alen == cnt):
        print "-1"
    else:
        print alen


'''

While Mahmoud and Ehab were practicing for IOI, they found a problem which name was Longest common subsequence. They solved it, and then Ehab challenged Mahmoud with another problem.

Given two strings a and b, find the length of their longest uncommon subsequence, which is the longest string that is a subsequence of one of them and not a subsequence of the other.

A subsequence of some string is a sequence of characters that appears in the same order in the string, The appearances don't have to be consecutive, for example, strings "ac", "bc", 
"abc" and "a" are subsequences of string "abc" while strings "abbc" and "acb" are not. The empty string is a subsequence of any string. Any string is a subsequence of itself.

Input
The first line contains string a, and the second line — string b. Both of these strings are non-empty and consist of lowercase letters of English alphabet. The length of each string 
is not bigger than 10^5 characters.

Output
If there's no uncommon subsequence, print "-1". Otherwise print the length of the longest uncommon subsequence of a and b.

Examples
Input
abcd
defgh

Output
5

Input
a
a

Output
-1

Note
In the first example: you can choose "defgh" from string b as it is the longest subsequence of string b that doesn't appear as a subsequence of string a.

'''

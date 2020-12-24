lst = []
word = input("enter the word: ")
for i in range(len(word)):
    lst.append(word[i])
rev = list(reversed(word))
if(lst == rev):
    print('palindrome')
else:
    print('not a palindrome')

# Daily Data Structures and Algorithms

This is a repository of my daily practice with data structures and algorithms (DSA) in C and Python.

# Journal

I'm keeping a journal of my adventures with DSA to keep track of not just my progress, but my thoughts, feelings, and revelations along the way.

- [August 2022](#august-2022)

## August 2022
- August 1 - 6\*
- [August 7 - 13](#august-7---13)
- August 14 - 20
- August 21 - 27
- August 28 - 31

\*I started this whole thing on August 8, so there isn't any content for the week of August 1 through 6.

### August 7 - 13

**Monday, August 8, 2022: A new adventure.** Beginning of practice. I'm writing this on August 10 because I'm now deciding that I need a journal to go along with all of this. I practiced finding the missing number in a sorted array.

**Tuesday, August 9, 2022: Hello again, new friend.** First day of getting reacquainted with Python. Looked through old little projects. Added my bubble sort program to this repo for a placeholder. There were plenty of other projects I could've chosen, but that one seemed the most DSA-appropriate.

**Wednesday, August 10, 2022: Wham, bam, thank-ya anagram.** Fun with strings in C today! I built a janky program that takes two strings and checks if they're anagrams. I implemented the check using two hash tables that counted the occurrences of each letter of each string, then compared the two hash tables. I struggled with getting it to work. The damn thing kept telling me non-anagram words were anagrams. After some head scratching, I realized that, when I thought I was calling the program to be the condition in an if statement (`if(is_anagram())`), I had actually forgotten the parentheses after the function name. Long story short, silly little mistake. Was a good challenge, even if the final product was kinda wack.

**Thursday, August 11, 2022: The dreaded fibonacci.** I implemented two mathematical functions that used recursion today: a function to find the number at place `n` of the fibonacci sequence, and a function that finds the sum of natural numbers up to a number `n`. They were challenging, but mostly because I'm still getting used to Python syntax. The actual implementation wasn't too hard, as I kinda remember the motions from implementing these two functions in C.
# Assignment 4 Overview
#
# There are five questions in this assignment and each question is worth 20 points.  
# Please create and submit your assignment response as a .txt or .py file.  
# Upload your completed assignment to the assignment drop box.  
# There is not a minimum or maximum word count for this assignment.  
# The only requirement is that you address the assignment questions.
# Refer to the Module 4 homework rubric for guidance.
#
# Question 1 (20 pts):
# Write code to reverse the relationship of a dictionary, so that the keys become the values and the values become the keys.  
# Your code should work for any size of dictionary (i.e., use iteration).
# For example, given the following dictionary, {'a': 1, 'b': 2, 'c': 3, 'd': 4}
# Produce a new dictionary that looks like the following: {1: 'a', 2: 'b', 3: 'c', 4: 'd'}
#
# Question 2 (15 pts):
# Given a string, write code to create a dictionary where: the keys are the words, the values are the count of the words.  
# Make it so that the keys are case insensitive.  
# You can assume the list contains only strings.
# For example, given the following string: "A fool thinks himself to be wise, but a wise man knows himself to be a fool"
# Generate a dictionary that looks like the following (order is not significant) {'a': 3, 'fool': 2, 'thinks': 1, 'himself': 2, 'to': 2, 'be': 2, 'wise': 2, 'but': 1, 'man': 1, 'knows': 1}
# 
# Question 3 (20 pts):  
# Write code to combine two dictionaries into one. Assume that the dictionaries have integers as values.
# If a key is found in both dictionaries, add their values together in the new dictionary.
# If a key is found only in one dictionary, keep the value the same.
# For example, given the following dictionaries:
# d1 = {'a': 1, 'b': 2, 'c': 3} 
# d2 = {'a': 10, 'c': 30, 'f': 50}
# The combined dictionary should look like: {'a': 11, 'b': 2, 'c': 33, 'f': 50}
#
# Question 4 (20 pts):
# Given a list of lists containing strings, write code that will create a new list of lists containing the length of each string. 
# For example, given the following list of lists:
# [['C++', 'Java', 'Python', 'Swift'], ['San Francisco','Berkeley','Oakland'], ['Apple', 'Banana', 'Cherry', 'Dragonfruit', 'Grape']]
# Produce the output: [[3, 4, 6, 5], [13, 8, 7], [5, 6, 6, 11, 5]]
#
# Question 5 (10 pts each):
# Given the following list of dictionaries: [{'name': 'Lisa', 'score': 93}, {'name': 'Jeff', 'score': 85}, {'name': 'Elon', 'score': 89}, {'name': 'Satya', 'score': 90}, {'name': 'Tim', 'score': 82}]
# Write code to calculate the average score.
# Write code to print the name of the person with the highest score.
#
# Rubric
# PP16 Assignment 4
# Criteria	Ratings	Pts
# This criterion is linked to a Learning Outcome 1
# 20 pts Full Marks using for loop, comprehension or dict()  
# 10 pts simply using assignment
# 0 pts No Marks
#
# This criterion is linked to a Learning Outcome 2
# 15 pts correct solution Solution must produce a dictionary that counts the correct number of words
# 12 pts comma must be removed  
# 0 pts No Marks
#
# This criterion is linked to a Learning Outcome 2
# 5 pts words must be in lowercase
# 0 pts No Marks
#
# This criterion is linked to a Learning Outcome 3  
# 20 pts Full Marks  
# 15 pts key errors does not handle keyerrors
# 0 pts No Marks
#
# This criterion is linked to a Learning Outcome 4
# 20 pts Full Marks Correctly uses nested loops or nested comprehension
# 0 pts No Marks  
#
# This criterion is linked to a Learning Outcome 5a
# 10 pts Full Marks calculates correct average score
# 5 pts total score displays only the total
# 0 pts No Marks
#  
# This criterion is linked to a Learning Outcome 5b
# 10 pts highest scoring person Should find the correct person with the highest score
# 5 pts name Displays the score instead of the person's name  
# 0 pts no marks
#
# Total Points: 100



# First we define a dictionary with some key-value pairs
d = {'a': 1, 'b': 2, 'c': 3, 'd': 4} 

# We want to reverse this dictionary, so the values become keys 
# and the keys become values

# To do this, we can use a dictionary comprehension:

# {new_key:new_value for item in iterable}

# This will create a new dictionary by looping through an iterable

# We want new_keys to be the values of the original dict
# And new_values to be the keys of the original dict

# So we can do:

reversed_d = {v:k for k, v in d.items()}

# This loops through d.items() which gives us (key, value) pairs
# It assigns the key to k and value to v on each iteration

# Then makes new keys = v (the original value)
# and new values = k (the original key)

# So we get:

# {1:'a', 2:'b', 3:'c', 4:'d'}

# Instead of: 

# {'a':1, 'b':2, 'c':3, 'd':4}

# Now reversed_d has the reversed key-value pairs

# Finally we print to verify it worked:

print(reversed_d)

# Output:
# {1: 'a', 2: 'b', 3: 'c', 4: 'd'}

# And we can see the dictionary is properly reversed!






# First import the regex module
import re 

# Define the string we want to analyze
string = "A fool thinks himself to be wise, but a wise man knows himself to be a fool"

# We want to split this string into words
# re.split() allows us to split on a regex pattern
# \W+ will split on any non-word characters

# str.lower() makes the whole string lowercase
# This will make matches case-insensitive 

words = re.split("\W+", string.lower())

# Now words is a list containing all the words
# ['a', 'fool', 'thinks', 'himself', 'to', 'be', 'wise',...]

# Next we want to count the frequency of each word
# We can use a dictionary comprehension:

# {key:value for item in iterable}

# key will be the word
# value will be the count

# words.count(word) counts how many times that word appears

word_counts = {word: words.count(word) for word in words}

# This loops through each word and counts frequency
# Creating a dict like:

# {'a': 3, 'fool': 2, 'thinks': 1, 'himself': 2, ...} 

# Finally print the word count dict:

print(word_counts)

# Which shows the word frequencies!







# First we define two dictionaries d1 and d2:

d1 = {'a': 1, 'b': 2, 'c': 3} 
d2 = {'a': 10, 'c': 30, 'f': 50}

# Our goal is to combine these dicts, adding values together when keys match

# First create an empty dict to hold the result
d3 = {}  

# Loop through d1 key-value pairs
# And copy them directly into d3
for k, v in d1.items():
    d3[k] = v

# This populated d3 with:
# {'a': 1, 'b': 2, 'c': 3}

# Now loop through d2 pairs
for k, v in d2.items():

    # Check if key exists in d3
    if k in d3:

        # If so, add the new value   
        d3[k] += v 

    else:

        # If not, copy to d3
        d3[k] = v

# This adds the values from d2 into d3       
# Updating 'a' and 'c', and adding 'f'

# Finally print result: 
print(d3)

# {'a': 11, 'b': 2, 'c': 33, 'f': 50}

# Contains merged keys and values






# We start with a list of lists containing strings
lst = [['C++', 'Java', 'Python', 'Swift'],  
       ['San Francisco','Berkeley','Oakland'],
       ['Apple', 'Banana', 'Cherry', 'Dragonfruit', 'Grape']]

# Our goal is to get the length of each string 
# And store the lengths in a new nested list

# We can use a nested list comprehension to do this:

# [expression for item in iterable]

# This will create a new list by evaluating expression 
# for each item in the iterable

# We want two loops:
# 1. To loop through the outer list of lists 
# 2. To loop through each inner list of strings

# So the comprehension will be:

lengths = [[len(word) for word in inner] for inner in lst]

# Breaking this down:

# 1. Loop through each inner list in lst 
#    Assign the current inner list to inner

# 2. Loop through each word in that inner list
# 3. Get the length of the word using len(word)
# 4. This creates a new list of lengths for each inner list

# Finally we print the result:

print(lengths) 

# [[3, 4, 6, 5], [13, 8, 7], [5, 6, 6, 11, 5]]

#contains the lengths of each string in the nested list!






# We start with a list of dictionaries 
# Each dict has a student's name and score

records = [{'name': 'Lisa', 'score': 93},
           {'name': 'Jeff', 'score': 85}, 
           {'name': 'Elon', 'score': 89},
           {'name': 'Satya', 'score': 90},
           {'name': 'Tim', 'score': 82}]

# First we want to calculate the average score

# Sum up all the scores using a generator expression:
total = sum(r['score'] for r in records) 

# Get number of records by taking length of list:
num_records = len(records)  

# Calculate average:
average = total / num_records

print("Average score:", average)

# Next we want the student with the highest score

# Use max() and provide a key function that returns the score
highest = max(records, key=lambda x: x['score'])

# Print the name of this top scoring student:
print("Highest scoring:", highest['name'])

# This uses the max() function:

# max(iterable, key=func) returns item with max value 
# based on what key function returns

# Here it will return dict with highest 'score' value
# And we print the 'name' from that dict
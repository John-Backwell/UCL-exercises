import random

#question 3

def fizzbuzz():
    for num in range(1,101):
        if num % 3 == 0:
            print("Fizz!")
        elif num % 5 == 0:
            print("Buzz!")
        elif num % 5 == 0 and num % 3 == 0:
            print("FizzBuzz!")
        else:
            print(num)


# question 4

def estimate_pi(precision):
    num_hits = 0
    num_total = 0
    for x in range(100000):
        num_total +=1
        x_coord = random.random()
        y_coord = random.random()
        if (x_coord - 0.5)**2 + (y_coord-0.5)**2 <=0.25:
            num_hits +=1
    pie_estimate = (num_hits*4)/num_total
    return round(pie_estimate,precision)

#question 5

#helper function
def test_if_word_is_real(word):
    with open("words") as dict_file: #words is a text file
        flag = False
        for line in dict_file:
            if word.upper() == line.strip().upper():
                flag = True
    return flag


def break_cypher(text):
    list_of_valid_words = []
    list_of_corresponding_cypher_values = []
    for cypher_value in range(26):
        text = text.upper()
        list_of_ord_values = []
        list_of_chars = []

        for char in text:
            if char.isalpha():
                list_of_ord_values.append(ord(char)+cypher_value)
            else:
                list_of_ord_values.append(ord(char))
        for value in list_of_ord_values:
            if value >90:
                value -=26
            list_of_chars.append(chr(value))
        decyphered_string = ''.join(list_of_chars)
        if test_if_word_is_real(decyphered_string):
            list_of_valid_words.append(decyphered_string)
            list_of_corresponding_cypher_values.append(cypher_value)
    return list_of_valid_words,list_of_corresponding_cypher_values


#imports
import numpy
import random
import time
import tkinter

#current time
current_time = time.strftime("%H:%M:%S")
print(current_time)
sleep = random.choice("0" "1")
if sleep == "0":
    time.sleep(1)
if sleep == "1":
    time.sleep(2)
    
#starter heroes
highwayman = "Dismas"
crusader = "Reynauld"

#starting gold
gold = 2500

#welcome
print("Darkest Dungeon is about making the most of a bad situation. Quests will fail or must be abandoned. ")
print("Heroes will die. And when they die, they stay dead. Progress autosaves frequently, so actions are")
print("permanent. This game expects a lot out of you. How far will you push your adventurers? How much are")
print("you willing to risk in your quest to restore the hamlet? What will you sacrifice to save the life of")
print("your favorite hero? Thankfully, there are always fresh souls arriving on the stage coach, seeking both")
print("adventure and fame in the shadow of the...")
time.sleep(1)
print(" ")
print("------------------------------------------------------------------------------------------------------")
print(" ")
print("                                     DARKEST DUNGEON")
print(" ")
save = input("                                  START SAVE FILE? (Y/N)")
save.lower()
if save == "y":
    print(" ")
    hamlet_name = input("                                  HAMLET NAME: ")
    print(" ")
    center_hamlet_name = ("                                     ""THE " + hamlet_name.upper() + " HAMLET")
    print(center_hamlet_name)
    break_counter = 0
    for i in range(1, 3):
        print("                                     OPENING SAVE.")
        time.sleep(0.5)
        print(" ")
        print("                                     OPENING SAVE..")
        time.sleep(0.5)
        print(" ")
        print("                                     OPENING SAVE...")
        time.sleep(0.5)
        print(" ")
        break_counter = break_counter + 1
        print(break_counter)
        if break_counter == 2:
            break
        
    #old road
    road1_bad_directions = ("L", "U", "D")
    print("Your journey starts on the old road, overrun by raiders, and many supernatural threats. Purge these fools, as a message")
    print("to their leaders that the rightful owner had returned, and their kind are no longer welcome. ")
    print(" ")
    print("----------------------------------------------------------------------------------------------------------------------")
    print(" ")
    for i in range(1, 1000000000000)
    old_road1 = input("You are currently in a room. This room is empty. There is a room to the right. Which way do you want to head? (L/R/U/D)")
    if old_road1 == road1_bad_directions:
        print()
else:
    print("Closing Game...")
    time.sleep(1)
    exit()

#dump
#if save == "n":
#    print("Closing Game...")
#    time.sleep(1)
#    exit()

# imports
import random
import time

# current time
current_time = time.strftime("%H:%M:%S")
print("Current Time: " + current_time)
sleep = random.choice("0" "1")
if sleep == "0":
    time.sleep(1)
if sleep == "1":
    time.sleep(2)

# starter heroes
highwayman = "Dismas"
crusader = "Reynauld"
highwayman_health = 25
crusader_health = 30

# riches
# see abnormal riches and standard riches

# abnormal riches
puzzling_trapezohedron_percentage = 2
puzzling_trapezohedron_random = random.randrange(0, 100)
if puzzling_trapezohedron_random <= puzzling_trapezohedron_percentage > 1:
    abnormal_inventory = "Puzzling Trapezohedron"

jute_tapestry_percentage = 3
jute_tapestry_random = random.randrange(0, 100)
if jute_tapestry_random <= jute_tapestry_percentage > 2:
    abnormal_inventory = "Jute Tapestry"

large_antique_percentage = 5
large_antique_random = random.randrange(0, 100)
if large_antique_random <= large_antique_percentage > 3:
    abnormal_inventory = "Large Antique"

rare_antique_percentage = 7
rare_antique_random = random.randrange(0, 100)
if rare_antique_random <= rare_antique_percentage > 5:
    abnormal_inventory = "Rare Antique"

ruby_percentage = 9
ruby_random = random.randrange(0, 100)
if ruby_random <= ruby_percentage > 7:
    abnormal_inventory = "Ruby"

sapphire_percentage = 12
sapphire_random = random.randrange(0, 100)
if sapphire_random <= sapphire_percentage > 9:
    abnormal_inventory = "Sapphire"

emerald_percentage = 15
emerald_random = random.randrange(0, 100)
if emerald_random <= emerald_percentage > 12:
    abnormal_inventory = "Emerald"

pew_percentage = 1
pew_random = random.randrange(0, 100)
if pew_random <= pew_percentage:
    abnormal_inventory = "Consecrated Pew"

if emerald_random > 15:
    abnormal_inventory = "None"

# standard riches
riches = ("750 Gold", "500 Gold", "250 Gold", "Citrine", "Jade", "Onyx", "Minor Antique")
inventory = random.choice(riches)

# abnormal inventory check
abnormal_inventory_check = abnormal_inventory != "None"
if abnormal_inventory_check == True:
    inventory = abnormal_inventory

# gold
gold = 2500
if inventory == "250 Gold":
    gold = gold + 250
elif inventory == "500 Gold":
    gold = gold + 500
elif inventory == "750 Gold":
    gold = gold + 750
elif inventory == "Jade":
    gold = gold + 375
elif inventory == "Citrine":
    gold = gold + 250
elif inventory == "Onyx":
    gold = gold + 500
elif inventory == "Consecrated Pew":
    gold = gold + 5000
elif inventory == "Emerald":
    gold = gold + 750
elif inventory == "Sapphire":
    gold = gold + 1000
elif inventory == "Ruby":
    gold = gold + 1250
elif inventory == "Minor Antique":
    gold = gold + 500
elif inventory == "Rare Antique":
    gold = gold + 1250
elif inventory == "Large Antique":
    gold = gold + 1500
elif inventory == "Jute Tapestry":
    gold = gold + 1750
elif inventory == "Puzzling Trapezohedron":
    gold = gold + 2500

# inventory trackers
print(" ")
print(abnormal_inventory)
print(inventory)
print(emerald_random)
print(" ")

# welcome
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
print("                             WARNING: INPUTS MUST BE UPPERCASE!")
save = input("                                  START SAVE FILE? (Y/N)")
save.upper()
if save == "Y":
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
        print("                                     -------------")
        print(" ")
        print("                                     OPENING SAVE..")
        time.sleep(0.5)
        print(" ")
        print("                                     -------------")
        print(" ")
        print("                                     OPENING SAVE...")
        time.sleep(0.5)
        print(" ")
        print("                                     -------------")
        print(" ")
        break_counter = break_counter + 1
        if break_counter == 2:
            break

    # old road
    print(
        "Your journey starts on the old road, overrun by raiders, and many supernatural threats. Purge these fools, as a message")
    print("to their leaders that the rightful owner had returned, and their kind are no longer welcome. ")
    print(" ")
    print(
        "----------------------------------------------------------------------------------------------------------------------")
    print(" ")
    while True:
        print("Current Heroes: Reynauld (Crusader), Dismas (Highwayman)")
        old_road1 = input(
            "You are currently in a room. The room is empty. All path except the one to the right are blocked by foliage. Head to the right? (Y/N)")
        if old_road1 == "Y":
            old_road_tent = input(
                "Reynauld and Dismas push forward, towards the hamlet. They discover an abandoned tent along the way. Investigate? (Y/N)")
            if old_road_tent == "N":
                print(
                    "Wary of what may be inside, Reynauld and Dismas ignore the tent and push forward towards fhe next room. ")
            if old_road_tent == "Y":
                print(highwayman + " reaches inside the tent and pulls out some riches. ")
                print("Inside is: " + str(inventory))
                print("Current Gold: " + str(gold))
                old_road_fight = input(
                    "After finding the " + inventory + ", Reynauld and Dismas reach the entrance to the next room. Enter? (Y/N)")  #
                monster_health = 35
                monster_damage = random.randrange(3, 7)
                monster_crit_chance = 5
                monster_crit_random = random.randrange(1, 100)
                if monster_crit_random <= monster_crit_chance:
                    monster_damage = 12

                #fight complete check
                def endFightCheck():
                    if int(monster_health) <= 0:
                        print("As the fiend falls, a faint hope blossoms. ")
                        print("Battle won!")
                        battle_rewards = random.choice(riches)
                        print("Rewards: " + battle_rewards)
                        battle_won = "Y"

                if old_road_fight == "Y":
                    print("Reynauld and Dismas enter the room, and find a chest in the middle. Dismas goes towards it, and are suddenly ambushed!")
                    while True:
                        crusader_options = input("It is " + crusader + "'s turn. What does " + crusader + " do? Attack (A) Guard (G) ")
                        if crusader_options == "A":
                            herodamage = random.randrange(6, 9)
                            crit_chance = 5
                            crit_random = random.randrange(1, 100)
                            if crit_random <= crit_chance:
                                herodamage = 9
                            monster_health = monster_health - herodamage
                            print("Monster Health: " + str(monster_health))
                            endFightCheck()
                        if crusader_options == "G":
                            prot = 10
                            prot_damage_removal = monster_damage / prot
                            monster_damage_guarded = monster_damage - prot_damage_removal
                            crusader_health = crusader_health - monster_damage_guarded
                            print(crusader + " raises a defensive stance in preparation for the monsters strike. ")
                            endFightCheck()
                        highwayman_options = input("It is " + highwayman + "'s turn. What does " + highwayman + " do? Attack (A) Guard (G) ")
                        if highwayman_options == "A":
                            print(highwayman + " has two weapons. Those weapons are a gun and a dagger. ")
                            if highwayman_options == "G":
                                prot = 10
                                prot_damage_removal = monster_damage / prot
                                monster_damage_guarded = monster_damage - prot_damage_removal
                                highwayman_health = highwayman_health - monster_damage_guarded
                                print(highwayman + " enters a defensive stance. ")
                            highwayman_attack = input("Which does " + highwayman + " attack with? Gun (G) Dagger (D) ")
                            if highwayman_attack == "G":
                                print("Knowledge: The gun fires four bullets that deal 1 - 3 damage per shot, but there is a catch")
                                print("That catch is the fact that the gun will never critical hit. ")
                                total_bullet_damage = 0
                                time.sleep(2)
                                for i in range(4):
                                    bullet_damage = random.randrange(1, 4)
                                    total_bullet_damage = total_bullet_damage + bullet_damage
                                    monster_health = monster_health - total_bullet_damage
                                    print("Monster Health: " + str(monster_health))
                                    time.sleep(0.5)
                                    endFightCheck()
                            if highwayman_attack == "D":
                                herodamage = random.randrange(4, 6)
                                if crit_random <= crit_chance:
                                    herodamage = 8
                                monster_health = monster_health - herodamage
                                endFightCheck()
                                # next, code monster's turn

        if old_road1 == "N":
            tutorial_skip_warning = input(
                "WARNING! THIS WILL SKIP THE TUTORIAL. ARE YOU SURE? WE DO NOT RECOMMEND THIS! (Y/N)")
            if tutorial_skip_warning == "Y":
                print(
                    "Reynauld and Dismas sit idly waiting for instructions, and are then jumped by monsters. With their ")
                hamlet_name.lower()
                print("last words, they urge you to run away. You do, and you reach the " + hamlet_name + " hamlet. ")
                break
            if tutorial_skip_warning == "N":
                print("Good choice. ")
                print("Resetting... ")
                time.sleep(1)
                continue
else:
    print("Closing Game...")
    time.sleep(1)
    exit()

# dump
# if save == "n":
#    print("Closing Game...")
#    time.sleep(1)
#    exit()
#
# old_road1_bad_directions = ("U", "u", "L", "l", "D", "d")
#
# goto function
# def goto(line):
#    global lineNumber
#    line = lineNumber
#
# if sapphire_random > 7:
#    abnormal_inventory = "None"
# if ruby_random > 5:
#    abnormal_inventory = "None"
# if pew_random > 1:
#    abnormal_inventory = "None"
#
#import resource
#
#                        if highwayman_options == "G":
#                            prot = 10
#                            prot_damage_removal = monster_damage / prot
#                            monster_damage_guarded = monster_damage - prot_damage_removal
#                            highwayman_health = highwayman_health - monster_damage_guarded
#                            print(highwayman + " enters a defensive stance. ")
#
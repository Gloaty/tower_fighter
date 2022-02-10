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
party = (highwayman, crusader)
highwayman_health = 25
highwayman_max_health = 25
place_1_hero_health = highwayman_health
crusader_health = 30
crusader_max_health = 30
place_1_hero = crusader
place_2_hero = highwayman
place_3_hero = "None"
place_4_hero = "None"
old_road_battle_won = 0
tutorial_skip_warning = "N"

# riches
# see abnormal riches and standard riches

# abnormal riches
riches_random = random.randrange(0, 101)

emerald_percentage = 15
if riches_random <= emerald_percentage > 12:
    abnormal_inventory = "Emerald"
else:
    abnormal_inventory = "None"


sapphire_percentage = 12
if riches_random <= sapphire_percentage > 9:
    abnormal_inventory = "Sapphire"
else:
    abnormal_inventory = "None"

ruby_percentage = 9
if riches_random <= ruby_percentage > 7:
    abnormal_inventory = "Ruby"
else:
    abnormal_inventory = "None"

rare_antique_percentage = 7
if riches_random <= rare_antique_percentage > 5:
    abnormal_inventory = "Rare Antique"
else:
    abnormal_inventory = "None"

large_antique_percentage = 5
if riches_random <= large_antique_percentage > 3:
    abnormal_inventory = "Large Antique"

jute_tapestry_percentage = 3
if riches_random <= jute_tapestry_percentage > 2:
    abnormal_inventory = "Jute Tapestry"

puzzling_trapezohedron_percentage = 2
if riches_random <= puzzling_trapezohedron_percentage > 1:
    abnormal_inventory = "Puzzling Trapezohedron"

pew_percentage = 1
if riches_random <= pew_percentage:
    abnormal_inventory = "Consecrated Pew"

#if riches_random > 15:
#    abnormal_inventory = "None"

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
print("--------------------------------")
print(" ")
print("      INVENTORY TRACKERS")
print(" ")
print("--------------------------------")
print(" ")
print(abnormal_inventory)
print(inventory)
print(riches_random)
print(" ")
print("--------------------------------")
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
    print("Your journey starts on the old road, overrun by raiders, and many supernatural threats. Purge these fools, as a message")
    print("to their leaders that the rightful owner had returned, and their kind are no longer welcome. ")
    print(" ")
    print(
        "----------------------------------------------------------------------------------------------------------------------")
    print(" ")
    while True:
        if old_road_battle_won == 1:
            print("As the fiend is felled by " + highwayman + " and " + crusader + ",")
            pass
            print("our heroes begin making the trek to the hamlet on foot. Once they arrive, they view a desolate town, ")
            print("old, and forgotten. However, though, it shall be enough to give our weary heroes respite from the chill of battle. ")
            print(" ")
            print("---------------------------------------------------------------------------------")
            print(" ")
            print("The hamlet has a few buildings in it at the moment, but most of them are still under construction, awaiting your approval. ")
            print("The stagecoach is operational, a place where new souls arrive seeking fame and fortune. ")
            if tutorial_skip_warning == "Y":
                place_1_hero = "None"
                place_2_hero = "None"
                place_3_hero = "None"
                place_4_hero = "None"
                print("The stagecoach has 4 poor souls on it awaiting your call to action. ")
                stagecoach_hero_1 = "Crusader"
                stagecoach_hero_2 = "Highwayman"
                stagecoach_hero_3 = "Plague Doctor"
                stagecoach_hero_4 = "Vestal"
            elif tutorial_skip_warning == "N":
                stagecoach_hero_1 = "Plague Doctor"
                stagecoach_hero_2 = "Vestal"
                print("The stagecoach has 2 poor souls on it awaiting your call to action. ")
                print("The first hero is a " + stagecoach_hero_1)
                print("The second hero is a " + stagecoach_hero_2)
                print("P = Plague Doctor")
                print("V = Vestal")
                print("B = Both")
                standby_heroes = input("Which heroes do you take? (P/V/B)")
                if standby_heroes == "P":
                    standby_heroes = "Paracelcus"
                    plague_doctor = "Paracelcus"
                elif standby_heroes == "V":
                    standby_heroes = "Junia"
                    vestal = "Junia"
                elif standby_heroes = "B":
                    standby_heroes = ("Paracelcus", "Junia")
                    plague_doctor = "Paracelcus"
                    vestal = "Junia"
        
        print("Current Heroes: Reynauld (Crusader), Dismas (Highwayman)")
        old_road1 = input(
            "You are currently in a room. The room is empty. All path except the one to the right are blocked by foliage. Head to the right? (Y/N)")
        if old_road1 == "Y":
            print(" ")
            print("--------------------------------------------------------------------------------------------")
            print(" ")
            old_road_tent = input("Reynauld and Dismas push forward, towards the hamlet. They discover an abandoned tent along the way. Investigate? (Y/N)")
            if old_road_tent == "Y":
                print(" ")
                print("--------------------------------------------------------------------------------------------")
                print(" ")
                print(highwayman + " reaches inside the tent and pulls out some riches. ")
                time.sleep(1)
                print(" ")
                print("--------------------------------------------------------------------------------------------")
                print(" ")
                print("                                         RICHES")
                print(" ")
                print("--------------------------------------------------------------------------------------------")
                time.sleep(1)
                print(" ")
                print("Inside is: " + str(inventory))
                print("Current Gold: " + str(gold))
                print(" ")
                print("--------------------------------------------------------------------------------------------")
                print(" ")
                old_road_fight = input("After finding the " + inventory + ", Reynauld and Dismas reach the entrance to the next room. Enter? (Y/N)")  #
                monster_health = 35
                if old_road_fight == "Y":
                    monster_attacks = ("Point Blank Shot", "Rain of Whips", "Shank")
                    #monster turn
                    for i in range(0, 100000):
                        monster_attack_choice = random.randrange(1, 4)
                        if monster_attack_choice == 1:
                            monster_options = "Point Blank Shot"
                        elif monster_attack_choice == 2:
                            monster_options = "Rain of Whips"
                        elif monster_attack_choice == 3:
                            monster_options = "Shank"
                    monster_crit_chance = 5
                    monster_crit_random = random.randrange(1, 101)
                    if monster_options == "Point Blank Shot":
                        place_1_hero = crusader
                        place_1_hero_health = crusader_health
                        place_2_hero = highwayman
                        place_2_hero_health = highwayman_health
                        monster_damage = random.randrange(4, 8) 
                        place_1_hero_damage = monster_damage
                        place_2_hero_damage = 0
                        if monster_crit_random <= monster_crit_chance:
                            monster_damage = 10
                    if monster_options == "Rain of Whips":
                        place_1_hero = crusader
                        place_2_hero = highwayman
                        place_1_hero_health = crusader_health
                        place_2_hero_health = highwayman_health
                        monster_damage = random.randrange(1, 4)
                        place_1_hero_damage = monster_damage
                        place_2_hero_damage = monster_damage
                        if monster_crit_random <= monster_crit_chance:
                            monster_damage = 7
                    elif monster_options == "Shank":
                        random_target = random.randrange(1, 3)
                        print(random_target)
                        if random_target == 1:
                            place_1_hero = crusader
                            place_1_hero_health = crusader_health
                            place_2_hero = highwayman
                            place_2_hero_health = highwayman_health
                            monster_damage = random.randrange(3, 7)
                            place_1_hero_damage = monster_damage
                            place_2_hero_damage = 0
                            if monster_crit_random <= monster_crit_chance:
                                monster_damage = 8
                        elif random_target == 2:
                            place_2_hero = highwayman
                            place_2_hero_health = highwayman_health
                            place_1_hero = crusader
                            place_1_hero_health = crusader_health
                            monster_damage = random.randrange(3, 7)
                            place_2_hero_damage = monster_damage
                            place_1_hero_damage = 0
                            if monster_crit_random <= monster_crit_chance:
                                monster_damage = 8
                                
                    #player turn
                    print("Reynauld and Dismas enter the room, and find a chest in the middle. Dismas goes towards it, and are suddenly ambushed")
                    print("by a the leader of the old road bandits!")
                    print(" ")
                    print("--------------------------------------------------------------------------------------------")
                    print(" ")
                    print("                                         COMBAT")
                    print(" ")
                    print("--------------------------------------------------------------------------------------------")
                    print(" ")
                    while True:
                        crusader_options = input("It is " + crusader + "'s turn. What does " + crusader + " do? Attack (A) Guard (G) ")
                        if crusader_options == "A":
                            herodamage = random.randrange(6, 11)
                            crit_chance = 5
                            crit_random = random.randrange(1, 101)
                            if crit_random <= crit_chance:
                                herodamage = 9
                            monster_health = monster_health - herodamage
                            print(" ")
                            print("--------------------------------------------------------------------------------------------")
                            print(" ")
                            print("Monster Health: " + str(monster_health))
                            print("Crusader Health: " + str(place_1_hero_health))
                            print(" ")
                            print("--------------------------------------------------------------------------------------------")
                            print(" ")
                            if monster_health <= 0:
                                print("As the fiend falls, a faint hope blossoms. ")
                                print("Battle won!")
                                battle_rewards = random.choice(riches)
                                print("Rewards: " + battle_rewards)
                                print(str(gold))
                                old_road_battle_won = 1
                                break
                        if crusader_options == "G":
                            prot = 10
                            prot_damage_removal = monster_damage / prot
                            monster_damage_guarded = place_1_hero_damage - prot_damage_removal
                            place_1_hero_health = place_1_hero_health - monster_damage_guarded
                            print(" ")
                            print("--------------------------------------------------------------------------------------")
                            print(" ")
                            print(crusader + " raises a defensive stance in preparation for the monster's strike. ")
                            print(" ")
                            print("--------------------------------------------------------------------------------------")
                            print(" ")
                            if monster_health <= 0:
                                print("As the fiend falls, a faint hope blossoms. ")
                                print("Battle won!")
                                battle_rewards = random.choice(riches)
                                print("Rewards: " + battle_rewards)
                                print(str(gold))
                                old_road_battle_won = 1
                                break
                        highwayman_options = input("It is " + highwayman + "'s turn. What does " + highwayman + " do? Attack (A) Guard (G) ")
                        print(" ")
                        print("--------------------------------------------------------------------------------------")
                        print(" ")
                        if highwayman_options == "A":
                            print(highwayman + " has two weapons. Those weapons are a gun and a dagger. ")
                            if highwayman_options == "G":
                                print(highwayman + " enters a defensive stance. ")
                                prot = 10
                                prot_damage_removal = monster_damage / prot
                                monster_damage_guarded = monster_damage - prot_damage_removal
                                place_2_hero_health = place_2_hero_health - monster_damage_guarded
                                if monster_health <= 0:
                                    print("As the fiend falls, a faint hope blossoms. ")
                                    print("Battle won!")
                                    battle_rewards = random.choice(riches)
                                    print("Rewards: " + battle_rewards)
                                    print(str(gold))
                                    old_road_battle_won = 1
                                    break
                            highwayman_attack = input("Which does " + highwayman + " attack with? Gun (G) Dagger (D) ")
                            if highwayman_attack == "G":
                                print(" ")
                                print("------------------------------------------------")
                                print(" ")
                                print("Knowledge: The gun fires four bullets that deal 1 - 3 damage per shot, but there is a catch")
                                print("That catch is the fact that the gun will never critical hit. ")
                                total_bullet_damage = 0
                                time.sleep(2)
                                for i in range(4):
                                    bullet_damage = random.randrange(1, 4)
                                    print(" ")
                                    print("--------------------------------------------")
                                    print("Bullet Damage: " + str(bullet_damage))
                                    total_bullet_damage = total_bullet_damage + bullet_damage
                                    monster_health = monster_health - bullet_damage
                                    print("Monster Health: " + str(monster_health))
                                    print("--------------------------------------------")
                                    if monster_health <= 0:
                                        print("As the fiend falls, a faint hope blossoms. ")
                                        print("Battle won!")
                                        battle_rewards = random.choice(riches)
                                        print("Rewards: " + battle_rewards)
                                        print(str(gold))
                                        old_road_battle_won = 1
                                        break
                                    time.sleep(0.5)
                            if highwayman_attack == "D":
                                herodamage = random.randrange(4, 7)
                                crit_random = random.randrange(0, 101)
                                crit_chance = 5
                                if crit_random <= crit_chance:
                                    herodamage = 8
                                monster_health = monster_health - herodamage
                                print(" ")
                                print("--------------------------------------------")
                                print(" ")
                                print("Dagger Damage: " + str(herodamage))
                                print("Monster Health: " + str(monster_health))
                                print(" ")
                                print("--------------------------------------------")
                                print(" ")
                                if monster_health <= 0:
                                    print("As the fiend falls, a faint hope blossoms. ")
                                    print("Battle won!")
                                    battle_rewards = random.choice(riches)
                                    print("Rewards: " + battle_rewards)
                                    print(str(gold))
                                    break
                                    break
                        #monster: deal damage
                        time.sleep(1)
                        print("The monster takes a swing to rend the flesh!")
                        time.sleep(0.3)
                        print(" ")
                        print("--------------------------------------------")
                        print(" ")
                        if monster_options == "Shank":
                            print("Monster Attack: Shank")
                            time.sleep(1)
                            print("Shank is an attack that can hit any member in your party at random. ")
                            print("This move typically has a mid-range damage output. ")
                            print(" ")
                            print("------------------------------------------------------") 
                        elif monster_options == "Point Blank Shot":
                            print("Monster Attack: Point Blank Shot")
                            time.sleep(1)
                            print("Point Blank Shot can only hit the hero in the first position in the party, ")
                            print("and typically deals mid-range damage. ")
                            print(" ")
                            print("------------------------------------------------------")
                        elif monster_options == "Rain of Whips":
                            print("Monster Attack: Rain of Whips")
                            time.sleep(1)
                            print("Rain of Whips hits all party members, but the cost of that is")
                            print("a low damage output per party member. ")
                            print(" ")
                            print("------------------------------------------------------")
                        time.sleep(1)
                        place_1_hero_health = place_1_hero_health - place_1_hero_damage
                        place_2_hero_health = place_2_hero_health - place_2_hero_damage
                        time.sleep(0.5)
                        print(" ")
                        print("Damage Dealt to " + crusader + ": " + str(place_1_hero_damage))
                        print("Damage Dealt to " + highwayman + ": " + str(place_2_hero_damage))
                        print(" ")
                        print("---------------------------------------------------------------")
                        print(" ")
                        time.sleep(0.5)
                        print(crusader + " Health: " + str(place_1_hero_health))
                        print(highwayman + " Health: " + str(place_2_hero_health))
                        print(" ")
                        print("----------------------------------------------------------")
                        print(" ")
            
            if old_road_tent == "N":
                print("Wary of what may be inside, Reynauld and Dismas ignore the tent. ")
                print("Unsure of what to do next, our heroes return to the original room, to await instructions. ")
        if old_road1 == "N":
            tutorial_skip_warning = input("WARNING! THIS WILL SKIP THE TUTORIAL. ARE YOU SURE? WE DO NOT RECOMMEND THIS! (Y/N)")
            if tutorial_skip_warning == "Y":
                print("Reynauld and Dismas sit idly waiting for instructions, and are then jumped by monsters. With their ")
                hamlet_name.lower()
                print("last words, they urge you to run away. You do, and you reach the " + hamlet_name + " hamlet. ")
                old_road_battle_won = 1
                continue
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
#                #fight complete check
#                def endFightCheck():
#                    if int(monster_health) <= 0:
#
#                       print("As the fiend falls, a faint hope blossoms. ")
#                        print("Battle won!")
#                        battle_rewards = random.choice(riches)
#                        print("Rewards: " + battle_rewards)
#                        print(str(gold))
#
#                            def victoryCheck():
#                                if monster_health <= 0:
#                                    battle_won = "Y"
#                                else:
#                                    battle_won = "N"
#                                     
##stress system
#                                stress_addition = random.randrange(1, 6)
#                                place_2_hero_stress = place_2_hero_stress + stress_addition
#
#min_stress = 0
#place_1_hero_stress = 0
#place_2_hero_stress = 0
#max_stress = 200
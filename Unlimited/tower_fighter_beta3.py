from datetime import datetime
import random
now = datetime.now()
current_time = now.strftime("%H:%M:%S")
print("Current time =", current_time)

weapon_damage = "2"
monstera = "unknown"
player_health = "100"
weapon = "Fists"
menuloop = True
blocking_tool = "Hands"
blocking_strength = "2"
monstera_health = random.randrange(5, 0, -1)
monstera_damage = random.randrange(5, 0, -1)
blocking_strength = 1.5
if monstera_health <= 0:
    monstera_health = 5

s = random.randrange(3, 0, -1)
if s == 1:
    monstera = str("troll")
if s == 2:
    monstera = str("golem")
if s == 3:
    monstera = str("lihzahrd")
if s <= 0:
    monstera = str("kytinn")
monster1 = random.randrange(s)

print("As you stand before it, you feel the essence of its menacing residents. You ready yourself to fight. ")
print(" The Tower of the Cosmics ")
print("           Enter?         ")
print("         ( y / n )        ")
n = input("             ")
if n == "y":
    print("You walk in the tower and ascend a set of stairs")
    floor = "1"
    print("You step away from the staircase and are immediately attacked by a " + str(monstera))
    print("Weapon = " + str(weapon))
    print("Monster Health = " + str(monstera_health))
    print("Weapon Damage = " + str(weapon_damage))
    print("Player Health = " + str(player_health))
    print("Blocking Tools = " + blocking_tool)
    print("Blocking Strength = " + str(blocking_strength))
    while menuloop == True:
        u = input("What do you do? A = Attack G = Guard (A/G)")
        menuloop = False
if u == "A":
    m = int(weapon_damage) - int(monstera_health)
    if m <= 0:
        print("Enemy killed! ")
    else:
        monstera_health = monstera_health - int(weapon_damage)
        print(monstera_health)
if u == "G":
        print("Rolling Monster Damage...")
        mona_damage_sub_block = monstera_damage - blocking_strength
        player_health = int(player_health) - int(mona_damage_sub_block)
        print("Player Health = " + str(player_health))
        menuloop = True
else:
    print("Closing Game...")
    exit()
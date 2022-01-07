from datetime import datetime
import random
import sys
import time
now = datetime.now()
current_time = now.strftime("%H:%M:%S")
print("Current time =", current_time)

cmd = "unknown"
weapon_damage = "2"
monster = "unknown"
player_health = "100"
weapon = "Fists"
blocking_tool = "Hands"
blocking_strength = "2"
i = False
monster_health = random.randrange(5, 0, -1)
monster_damage = random.randrange(5, 0, -1)
blocking_strength = 1.5
if monster_health <= 0:
    monster_health = 5

monster = random.randrange(3, 0, -1)
if monster == 1:
    monster = str("troll")
if monster == 2:
    monster = str("golem")
if monster == 3:
    monster = str("lihzahrd")
else:
    monster = str("god of the cosmos")

print("As you stand before it, you feel the essence of its menacing residents. You ready yourself to fight. ")
print(" The Tower of the Cosmics ")
print("           Enter?         ")
print("         ( y / n )        ")
n = input("             ")
if n == "y":
    print("You walk in the tower and ascend a set of stairs")
    floor = "1"
    print("You step away from the staircase and are immediately attacked by a " + str(monster))
    time.sleep(1)
    print("Weapon = " + str(weapon))
    print("Monster Health = " + str(monster_health))
    print("Weapon Damage = " + str(weapon_damage))
    print("Player Health = " + str(player_health))
    print("Blocking Tools = " + blocking_tool)
    print("Blocking Strength = " + str(blocking_strength))
def commands(Player, Monster):
    while True:
        print("------------------------")
    cmd = input("What do you do? A = Attack G = Guard (A/G)")
if cmd == "A":
    m = int(weapon_damage) - int(monster_health)
    if m <= 0:
        print("Enemy killed! ")
    else:
        monstera_health = monstera_health - weapon_damage
        print(monstera_health)
        monsteratkback = random.choice("1", "2")
        if monsteratkback == 2:
            print("After being attacked by you, the monster steels itself and strikes back!")
if cmd == "G":
        print("Rolling Monster Damage...")
        mon_damage_blocked = monster_damage - blocking_strength
        player_health = int(player_health) - int(mon_damage_blocked)
        print("Blocking Strength = " + str(blocking_strength))
        print("Monster Damage = " + str(monster_damage))
        print("Player Health = " + str(player_health))
else:
    print("Closing Game...")
    exit()

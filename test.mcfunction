tp @s

tp @e[gamemode=aa,tag=ss,name=oof]

tp @s[tag=s]
# yay

data merge entity @s {Color:1}
data merge block ~ ~ ~ {Lock:"hello",Items:[{id:"minecraft:stone",Count:1b,tag:{Damage:1}}]}

# hello

tp @e[tag=sss,type=sss,nbt=aaa,tig=he]

setblock ~ ~ ~ minecraft:hello[facing=true]

say hello

#test comment

setblock ~ ~ ~ hello[oof=1]

summon armor_stand ~ ~ ~ {Marker:1b}
scoreboard objectives add foo dummy
scoreboard objectives modify foo rendertype integer

scoreboard players set @s foo 1

execute as @e run say hi

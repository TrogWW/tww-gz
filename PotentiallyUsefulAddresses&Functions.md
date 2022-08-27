A lot of this is just taken from https://github.com/LagoLunatic/WW-Hacking-Docs/blob/ce486623c919634980921fe26cc597dcde357c76/RAM%20Map.txt for having a local reference. Ty Lago/Crain for the hard work.

Link X-pos: 803D78FC

Link Y-pos: 803D7900

Link Z-pos: 803D7904

Link Facing Angle: 803EA3D2

Link's pointer: 803AD860

Link Speed: P->803AD860

Link Animation Frame Cycle: P->803AD860

Acceleration: P->803AD860


Held item pointer? (has a question mark by it in DME lol): 804C4CB4

Link health: 803B810B


Current stage: 803BD23C

Room: 803B583B

Spawn: 803B9245



Arrow count: 803B8171


803C4C44-803C4C58 - Inventory. (dSv_player_item_c)

Controls which items are in which slots on the inventory screen. Each slot is one byte.
  If the byte is FF it means no item is in the slot.
  Otherwise the byte is the item ID of the item in that slot.
  The order of slots is from left to right, then top to bottom.

Each inventory slot:

803C4C44,1 - Telescope (20)


803C4C45,1 - Sail (78)

803C4C46,1 - Wind Waker (22)

803C4C47,1 - Grappling Hook (25)

803C4C48,1 - Spoils Bag (24)

803C4C49,1 - Boomerang (2D)

803C4C4A,1 - Deku Leaf (34)

803C4C4B,1 - Tingle Tuner (21)

803C4C4C,1 - Picto Box (23, 26)

803C4C4D,1 - Iron Boots (29)

803C4C4E,1 - Magic Armor (2A)

803C4C4F,1 - Bait Bag (2C)

803C4C50,1 - Bow (27, 35, 36)

803C4C51,1 - Bombs (31)

803C4C52,1 - Bottle 1

803C4C53,1 - Bottle 2

803C4C54,1 - Bottle 3

803C4C55,1 - Bottle 4



Bottle item IDs:

50 - Empty Bottle

51 - Red Potion

52 - Green Potion
    53 - Blue Potion
    54 - Elixir Soup (1/2)
    55 - Elixir Soup
    56 - Bottled Water
    57 - Fairy in Bottle
    58 - Forest Firefly
    59 - Forest Water

803C4C56,1 - Delivery Bag (30)

803C4C57,1 - Hookshot (2F)

803C4C58,1 - Skull Hammer (33)

803C4C59-803C4C6D - List of bitfields of which items you own.

803C4C59,1 - Bitfield of whether you own the telescope + what bottle contents you have ever owned at an point.

0 - Telescope

1 - Unused bottle contents item 4F

2 - Empty Bottle

3 - Red Potion

4 - Green Potion

5 - Blue Potion

6 - Elixir Soup (1/2)

7 - Elixir Soup

803C4C5A,1 - Bitfield of whether you own the sail + what bottle contents you have ever owned at an point.

0 - Boat's Sail

1 - Bottled Water

2 - Fairy in Bottle

3 - Forest Firefly

4 - Forest Water

5 - Unused bottle contents item 5A

6 - Unused bottle contents item 5B

7 - Unused bottle contents item 5C

803C4C5B,1 - Bitfield of whether you own the wind waker + what bottle contents you have ever owned at an point.

0 - Wind Waker

1 - Unused bottle contents item 5D

2 - Unused bottle contents item 5E

3 - Unused bottle contents item 5F

4 - Unused bottle contents item 60

5 - 

6 - 

7 - 

803C4C5C,1 - Bitfield of whether you own the grappling hook.

0 - Grappling Hook

803C4C5D,1 - Bitfield of whether you own the spoils bag.

0 - Spoils Bag

803C4C5E,1 - Bitfield of whether you own the boomerang.

0 - Boomerang

803C4C5F,1 - Bitfield of whether you own the deku leaf.

0 - Deku Leaf

803C4C60,1 - Bitfield of whether you own the tingle tuner.

0 - Tingle Tuner

803C4C61,1 - Bitfield of what picto boxes you own.

0 - Picto Box

1 - Deluxe Picto Box

803C4C62,1 - Bitfield of whether you own the iron boots.

0 - Iron Boots

803C4C63,1 - Bitfield of whether you own magic armor.

0 - Magic Armor

803C4C64,1 - Bitfield of whether you own the bait bag.

0 - Bait Bag

803C4C65,1 - Bitfield of which types of arrows you own.

0 - Regular arrows (Hero's Bow)

1 - Fire and Ice Arrows

2 - Light Arrow

803C4C66,1 - Bitfield of whether you own bombs.

0 - Bombs

803C4C67,1 - ?

803C4C68,1 - ?

803C4C69,1 - ?

803C4C6A,1 - ?

803C4C6B,1 - Bitfield of whether you own the delivery bag.

0 - Delivery Bag

803C4C6C,1 - Bitfield of whether you own the hookshot.

0 - Hookshot

803C4C6D,1 - Bitfield of whether you own the skull hammer.

0 - Skull Hammer

803C4C70,1 - ?

803C4C71,1 - Number of arrows you have.

803C4C72,1 - Number of bombs you have.

803C4C76,1 - ?

803C4C77,1 - Maximum number of arrows you can carry.

803C4C78,1 - Maximum number of bombs you can carry.


803C4C70,1 - ?

803C4C71,1 - Number of arrows you have.

803C4C72,1 - Number of bombs you have.

803C4C76,1 - ?

803C4C77,1 - Maximum number of arrows you can carry.

803C4C78,1 - Maximum number of bombs you can carry.


803C4DB4,4 - Player's partner's X pos.

803C4DB8,4 - Player's partner's Y pos.

803C4DBC,4 - Player's partner's Z pos.

803C4DC0,2 - Player's partner's rotation.

803C4DC2,1 - Player's partner's room number.

803C4DC3,1 - Player's partner's ID number.

this is argument r4 to set__19dSv_player_priest_cFUcR4cXyzsSc

1 - Makar

2 - Medli

3 - Servant of the Tower

(There may be more IDs for different Servants of the Tower?)



Rel pointer: 803398DC

Rel ID (pointer data): 803398D8

Rel ID: 80372820

803B9218 - List of which files (maybe Rels specifically?) are currently loaded. Entry length 4. 0x1F6 entries in total. The index in this list is the actor ID. Each entry is a pointer to something? (e.g. 80ad4e30) Or 0 if it's invalid?



8035F9B8-8035F9F7 - List of Ballad of Gales warp destinations.

Entry length 7. There are 9 entries in total.

00,1: X pos of the sector on the sea chart (-3 to 3).

01,1: Y pos of the sector on the sea chart (-3 to 3).

02,1: Warp index of this warp.

03,1: Warp index of the warp to the left of this one.

04,1: Warp index of the warp to the right of this one.

05,1: Warp index of the warp above this one.

06,1: Warp index of the warp below this one.



8038DDAC,4 - Bitfield of damage types the player's sword should do? maybe?

80371DD4,4 - Bitfield of damage types for...? skull hammer maybe?



8039B5F4 - List of Wind Waker songs.

7 bytes long.

00,1: Number of notes in the song. (3, 4, or 6.)

01,6: Array of song notes.

0 - Center

1 - Up

2 - Right

3 - Down

4 - Left



803A4DF0 - Has info on the current controller input state. (g_mDoCPd_cpadInfo)

803A4DF0,4 - Control stick horizontal axis. Float from -1 to 1.

803A4DF4,4 - Control stick vertical axis. Float from -1 to 1.

803A4E00,4 - C-stick horizontal axis. Float from -1 to 1.

803A4E04,4 - C-stick vertical axis. Float from -1 to 1.

803A4E20,1 - Bitfield of whether certain buttons are currently being pressed down.

01 - A button is down

02 - L button is down

04 - R button is down

08 - Z button is down

10 - D-pad up arrow button is down

20 - D-pad down arrow button is down

40 - D-pad right arrow button is down

80 - D-pad left arrow button is down

803A4E21,1 - Bitfield of whether certain buttons are currently being pressed down.

01 - ??? button is down

02 - ??? button is down

04 - ??? button is down

08 - ??? button is down

10 - Start button is down

20 - Y button is down

40 - X button is down

80 - B button is down

803A4E22,1 - Bitfield of whether certain buttons were just pressed this frame.

01 - A button was just pressed this frame

02 - L button was just pressed this frame

04 - R button was just pressed this frame

08 - Z button was just pressed this frame

10 - D-pad up arrow button was just pressed this frame

20 - D-pad down arrow button was just pressed this frame

40 - D-pad right arrow button was just pressed this frame

80 - D-pad left arrow button was just pressed this frame

803A4E23,1 - Bitfield of whether certain buttons were just pressed this frame.

01 - ??? button was just pressed this frame

02 - ??? button was just pressed this frame

04 - ??? button was just pressed this frame

08 - ??? button was just pressed this frame

10 - Start button was just pressed this frame

20 - Y button was just pressed this frame

40 - X button was just pressed this frame

80 - B button was just pressed this frame



803ED818,2 - Bitfield of currently pressed buttons. (For Pad.c)

803ED848,4 - Bitfield of currently pressed buttons. (For JUTGamePad.cpp)

00000001 - D-pad left

00000002 - D-pad right

00000004 - D-pad down

00000008 - D-pad up

00000010 - Z

00000020 - R

00000040 - L

00000100 - A

00000200 - B

00000400 - X

00000800 - Y

00001000 - Start

803ED84C,4 - Bitfield of buttons pressed this frame. (For JUTGamePad.cpp)

803F0F30,4 - Bitfield of currently pressed buttons. (For SIBios.c)



803C4C08-803C4C1F - Current player status.

803C4C08,2 - Max HP (in quarters of hearts, counting heart pieces).

803C4C0A,2 - Current HP (in quarters of hearts).

803C4C0C,2 - Current num rupees.

803C4C11,1 - Index of the inventory slot corresponding to the item equipped on the X button, or FF for none.

803C4C12,1 - Index of the inventory slot corresponding to the item equipped on the Y button, or FF for none.

803C4C13,1 - Index of the inventory slot corresponding to the item equipped on the Z button, or FF for none.

These determine what items on the inventory screen are highlighted in yellow.

0x00-0x14 are normal items (index in list 803C4C44).

0x18-0x1F are spoils (index in list 803C4C7E).

0x24-0x2B are bait (index in list 803C4C86).

0x30-0x37 are delivery bag items (index in list 803C4C8E).

803C4C16,1 - Currently equipped sword ID.

38 - Hero's Sword

39 - Master Sword (Powerless)

3A - Master Sword (Half Power)

3E - Master Sword (Full Power)

803C4C17,1 - Currently equipped shield ID.

3B - Hero's Shield

3C - Mirror Shield

803C4C18,1 - Current Power Bracelets ID. Should be 28 to own them.

803C4C1A,1 - Current wallet.

0 - 200 Rupee Wallet

1 - 1000 Rupee Wallet

2 - 5000 Rupee Wallet

803C4C1B,1 - Max magic meter/MP.

803C4C1C,1 - Current magic meter/MP.



803C4C2C,4 - Current time in the day. (Float.)

Ranges from 0.0 to 360.0.



803C4C38,8 - Stage name of the player's "return place" (where you will be placed when you reload your save). The 8th byte must be 00.

803C4C40,1 - Room number of the player's "return place" (where you will be placed when you reload your save).

803C4C41,1 - Spawn ID of the player's "return place" (where you will be placed when you reload your save).



803C4F88-803C4FAB - Stage ID 0 stage info (Sea)

803C4FAC-803C4FCF - Stage ID 1 stage info (Sea Alt)

803C4FD0-803C4FF3 - Stage ID 2 stage info (Forsaken Fortress)

803C4FF4-803C5017 - Stage ID 3 stage info (Dragon Roost Cavern)

803C5018-803C503B - Stage ID 4 stage info (Forbidden Woods)

803C503C-803C505F - Stage ID 5 stage info (Tower of the Gods)

803C5060-803C5083 - Stage ID 6 stage info (Earth Temple)

803C5084-803C50A7 - Stage ID 7 stage info (Wind Temple)

803C50A8-803C50CB - Stage ID 8 stage info (Ganon's Tower)

803C50CC-803C50EF - Stage ID 9 stage info (Hyrule)

803C50F0-803C5113 - Stage ID A stage info (Ship Interiors)

803C5114-803C5137 - Stage ID B stage info (Houses & Misc Places)

803C5138-803C515B - Stage ID C stage info (Cave Interiors)

803C515C-803C517F - Stage ID D stage info (More Cave Interiors & Ship Interiors)

803C5180-803C51A3 - Stage ID E stage info (This stage info's mem bit switches are used to keep track of Blue ChuChus being dead.)

803C51A4-803C51C7 - Stage ID F stage info (Test Maps)



20,01: Number of small keys you currently have for this dungeon stage. (!! THIS dungeon stage !!)

21,01: Bitfield of dungeon-specific flags for this dungeon stage.

0 - Got dungeon map.

1 - Got compass.

2 - Got big key.

3 - Boss is dead.

4 - Heart container is taken.

5 - Watched boss intro.



803C53A0,01 - Number of small keys you currently have in the current dungeon. (!! CURRENT dungeon !!)

803C53A1,01 - Bitfield of dungeon-specific flags for the current dungeon.

0 - Got dungeon map.

1 - Got compass.

2 - Got big key.

3 - Boss is dead.

4 - Heart container is taken.

5 - Watched boss intro.



803CA764,4 - Number of quarter hearts to add to the player's HP this frame. 
This is a float. 
Can be negative to damage the player.

803CA768,4 - Number of rupees to add to the player's wallet this frame. 
This is an int. 
Can be negative to take rupees away.



803E545A,2 - Wind angle. Every 0x4000 is equivalent to 90 degrees. Angle 0x0000 points straight east. 
Can just store to this to update wind direction on the fly.



803F6268,4 - Boomerang trail color. (RGBA)

803F62AC,4 - Normal sword slash trail color. (RGBA)

803F62B0,4 - Elixir soup sword slash trail color. (RGBA)

803F62B4,4 - Parrying sword slash trail color. (RGBA)


Functions:

__OSUnhandledException
  called whenever there's an error, use this to debug crashes

order__16dEevent_manager_c
  called when an event is starting.
  breakpoint on 800744D0 and look in r3 for the event

mainProc__16dEvent_manager_cFv
  update code for events
  breakpoint on 8007421C and look in r3 for a pointer to the event

order__16dEvent_manager_cFs
  starts an event
  breakpoint on 800744D0 and look in r3 for a pointer to the event

endProc__16dEvent_manager_c
  ends an event
  breakpoint on 80074134 and look in r3 for a pointer to the event

dEvent_manager_c::getMyActIdx(int, char const *const *, int, int, int)
getMyActIdx__16dEvent_manager_cFiPCPCciii
  r3 - Pointer to the event manager (803C9ED4).
  r4 - ? read from the entity
  r5 - Pointer to a list of pointers to valid action names for this entity.
  r6 - Number of actions in the list?
  r7 - 1?
  r8 - 0?
  Returns the action index that this entity should execute next.

fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs
  this is what really starts an event.
  if you go up a call from here, you'll get whatever actor really started the event.
  r3 - pointer to the entity that called this function
  r4 - the event index to start in the event_list.dat
  r5 - the event index to start in the stage's EVNT list (optional?)
  r6 - 0xFFFF? (ushort)
  r7 - 0? (ushort)
  r8 - 1? (ushort)

fopAcM_orderOtherEvent2__FP10fopAc_ac_cPcUsUs
fopAcM_orderOtherEvent2(fopAc_ac_c *, char *, unsigned short, unsigned short)
  another option for what really starts an event.
  r3 - Pointer to the entity starting the event
  r4 - Pointer to the event name (string)
  r5 - 1?
  r6 - 0xFFFF?

dEvent_manager_c::getEventIdx
getEventIdx__16dEvent_manager_cFPCcUc
  gets the index of an event in the event_list.dat based on its name (or its EVNT index)
  it will try to find the event with the given EVNT index first, and fall back to the name if the EVNT index is invalid
  r3 - Pointer to the event manager (803C9ED4).
  r4 - pointer to the event name string
  r5 - EVNT index

finish_check__12dEvDtEvent_cFv
  checks if an event should end based on its flags.
  80071AF4 is where it reads the ending flags.

setStartDemo__18dEvent_exception_cFi
  handles starting the event specified by a player spawn's event index.
  r3 - ? pointer to 803c9ef8
  r4 - event index (in the EVNT list for this stage, not the event_list.dat)


advanceCut__12dEvDtStaff_cFi
  updates the current action for an actor


fopAcM_getProcNameString
  this gets the ACTR name from an entity. e.g. "item" or "itemFLY" for a field item.

CheckItemCreateHeap
  reads from the item resources list (803842B0) and calls CreateItemHeap.
CheckFieldItemCreateHeap
  reads from the field item resources list (803866B0) and calls CreateItemHeap.

dComIfGs_checkGetItem
  Checks if the player owns a certain item or not.
  Only work for certain items. (TODO: document which)
  r3 - The item ID to check.

dComIfGs_checkGetItemNum
  Returns the number of a certain item the player owns.
  Only works for certain items. (TODO: document which)
  r3 - The item ID to check.

execItemGet
  argument r3 is the item ID. this simply calls the item get function for whatever that item is.

itemGetExecute
  this is a function called when a field item is picked up.
  at 800f655C it calls execItemGet
  at 800f6460 it reads the item ID.
  at 800f6480 it does a switch statement on the item ID.
  the list of destinations for the switch are at 8038ca6c.
  800f6c8c is the default, used for many items not intended to be pickups. it just calls onItem, I think? so it doesn't work for a lot of stuff.
  I would need to modify the switch statement entries in this list to get other items to work as pickups.
  here are some options for what to change the entries to:
    800F667C - used by heart containers. makes link do the "you got an item!" thing. however it also plays the heart get sound effect.
    800F6724 - makes the pickup float above your head for a second, with the sfx used for joy pendants and such. no item get text.
    800F6484 - used by all items with an ID 0x84 or greater. seems to function the same as 800F6724, no item get text.
    800F675C - one used by the small key. has the message and animation, and no heart sfx! perfect.

dComIfGs_isStageBossEnemy__Fi
  Checks if the boss for a given dungeon stage is dead.
  Argument r3 is the stage ID of the stage to check.

check_itemno
  This takes a consumable item ID as an argument, and returns what consumable ID should actually be created.
  Specifically:
    Turns arrow refills into green rupees if the player doesn't own any of the three bow items.
    Turns bomb refills into green rupees if the player doesn't own the bombs item.
    Turns bait into green rupees if the player doesn't own the bait bag.
    Turns spoils into green rupees if the player doesn't own the spoils bag.

GroundCheck
  checks if an object hit the ground and sets y vel to 0 if so

itemActionForRupee
  used for field items. calls CrrPos to update its position, which in turn calls GroundCheck.

daPy_lk_c::setDemoData(void)
  this player function reads the event actions for link, and determines what action to take based on the numbers that are the first 3 chars of the action name.

getWarpAreaGridX
  for Ballad of Gales warping, this gets the X pos of the next warp dest sector by an index.

entry__18dSalvage_control_cFP10fopAc_ac_cP14JPABaseEmitter
  initializes a salvage point

cc_at_check
  This function handles damaging an enemy.
  Line 800AF07C is where it subtracts the damage from the current HP.

at_power_check
  Gets the damage an attack should do.
  r3 - Pointer on the stack. The amount of damage to do will be returned by storing it as a byte to [r3+8].

dCcD_GObjInf::GetTgHitGObj
  This function returns the damage-dealing hitbox (cCcD_ObjAt) that damaged this entity on this frame, or null for no entity damaging this entity.
  cCcD_ObjAt+0x10,4 has the bitfield of damage types the hitbox does while cCcD_ObjAt+0x14,1 has the amount of damage it deals.

setDamagePoint
  Sets the amount of damage to do to the player.
  f1 - Number of quarters of hearts to add to the player's health. Float. Should be negative to deal damage.

changeDamageProc
  This function decides how much damage the player will actually take once they've gotten hit.
  At 801108B4, it reads the amount of damage from an entity+3FFE?
  But if it's not an enemy damaging the player and instead is spikes or something, then it calculates damage in some other, hardcoded way.

CalcTgPlusDmg
  800AD850 - Stores the amount of damage for the enemy to do into an entity.
  800AD840 - It reads the amount of damage to do from r28+0x14.
  r28 was given as argument r4 to this function.



fopAcM_fastCreateItem(cXyz *, int, int, csXyz *, cXyz *, float, float, float, int, int (*)(void *))
  Creates an item that already has its model loaded.
  If you try to create an item that doesn't have its model loaded the game will crash.
  r3 - Position
  r4 - Item ID
  r5 - Room number
  r6 - Rotation
  r7 - Scale
  f1 - speed
    stored to entity+254
  f2 - ??? float
    stored to entity+224
    y velocity? upward momentum?
  f3 - ??? float
    stored to entity+258
    gravity
  r8 - Item pickup flag to set, or -1 for none
  r9 - ???
    can be just 0, or this can be a pointer to a function, unsure on the exact purpose
    e.g. 80027254 for stealItem.
    e.g. 800F3608 for itemParamSet
  
fopAcM_createItem__FP4cXyziiiiP5csXyziP4cXyz
  Creates an item, and loads its model in if necessary.
  r3 - position (pointer to a vector3 of floats (cXyz))
  r4 - item ID
  r5 - item pickup flag to set, or -1 for none
  r6 - Room number to create the item in
  r7 - unknown_2 int (e.g. 0 or 3)
    If this is 0 or 2 the item will fade out if the player doesn't get it fast enough. If this is 1 or 3, it does not fade out.
    If this is 1, the item is not affected by gravity. Otherwise it is.
    This gets puts in the item's params with mask: 03000000.
    (This is 0 for fastCreateItem, and 3 for createItemForBoss.)
  r8 - rotation (pointer to a vector3 of shorts (csXyz))
  r9 - Item action. (e.g. 4, 5, 0xC)
    this gets puts in the item's params with mask: FC000000
    (this is 0xA for fastCreateItem, and either 0xC or 5 for createItemForBoss)
    800F869C has a switch statement on this.
      8038cdac is the list of switch statement cases.
    0 means no action
  r10 - scale (pointer to a vector3 (cXyz))

fopAcM_fastCreateItem2__FP4cXyziiiiP5csXyziP4cXyz
  ???
  r9 - Item action.

fopAcM_createItemForBoss__FP4cXyziiP5csXyzP4cXyzi
  r3 - position (pointer to a vector3 of floats (cXyz))
  r4 - ???
  r5 - Room number to create the item in
  r6 - rotation (pointer to a vector3 of shorts (csXyz))
  r7 - scale from entity RAM format (pointer to a vector3 (cXyz))
  r8 - ?
    if this is 1, use item action 0xC. (used in most cases)
    otherwise, use item action 5. (used for the "disappear" cloud of smoke)

fopAcM_createItemForTrBoxDemo__FP4cXyziiiP5csXyzP4cXyz
  r3 - position (pointer to a vector3 of floats (cXyz))
  r4 - item ID
  r5 - -1?
  r6 - -1?
  r7 - 0?
  r8 - 0?

fopAcM_createItemForPresentDemo__FP4cXyziUciiP5csXyzP4cXyz
  r3 - 
  r4 - Item ID
  r5 - 
  r6 - Item pickup flag
  r7 - 
  r8 - 
  r9 - 

fopAcM_createDemoItem__FP4cXyziiP5csXyziP4cXyzUc
  used by both createItemForPresentDemo and createItemForTrBoxDemo
  r3 - position (pointer to a vector3 of floats (cXyz))
  r4 - Item ID
  r5 - Item pickup flag
  r6 - 
  r7 - 
  r8 - 
  r9 - 

fopAcM_createItemForKP2__FP4cXyziiP5csXyzP4cXyzfffUs
  r3 - position (pointer to a vector3 of floats (cXyz))
  r4 - item ID
  r5 - Room number to create the item in
  r6 - rotation (pointer to a vector3 of shorts (csXyz))
  r7 - scale from entity RAM format (pointer to a vector3 (cXyz))
  f1 - ??? float
    stored to entity+254
    speed?
  f2 - ??? float
    stored to entity+224
    y velocity? upward momentum?
  f3 - ??? float
    stored to entity+258
    gravity
  r8 - unsigned short, bitfield.
    lower byte is the item pickup flag to set.
    upper byte is the prerequisite switch index.
    these are stored as the item's params.
    not sure if they're actually used though?

fopAcM_createItemFromTable__FP4cXyziiiiP5csXyziP4cXyz
  r3 - Position. Pointer to a vector3 of floats.
  r4 - Affects what item to spawn.
    00-1F: Spawn this exact item ID.
    20-3E: Subtract 20 from this value and it's the index in the random item table.
      For values 2B-34, it will spawn *every* item in the corresponding entry of the table.
      For values 20-2A and 35-3E, it will randomly pick just one item in the table to spawn.
    3F: Spawn no item.
    40-FE: Spawn this exact item ID.
    FF: Spawn no item.
  r5 - Item pickup flag to set, or -1 for none, or 0x7F for none.
  r6 - Room number.
  r7 - 
  r8 - Pointer to a vector3 of shorts, maybe rotations?
  r9 - 
  r10 - 

fopAcM_createRaceItem(cXyz *, int, int, csXyz *, int, cXyz *, int)
  r3 - Position
  r4 - Item ID
  r5 - Item pickup flag
  r6 - 
  r7 - 
  r8 - 
  r9 - 

fopAcM_createRaceItemFromTable(cXyz *, int, int, int, csXyz *, cXyz *, int)
  r3 - Position
  r4 - Affects what item to spawn.
    00-1F: It spawns this exact item ID.
    20-3F: Subtract 20 from this value and it's the index in the random item table.
  r5 - Item pickup flag
  r6 - 
  r7 - 
  r8 - 
  r9 - 

fopAcM_createDisappear(fopAc_ac_c *, cXyz *, unsigned char, unsigned char, unsigned char)
  Creates a cloud of smoke for when an enemy dies.
  r3 - The actor that just died.
  r4 - Position to create the disappear at.
  r5 - 5?
  r6 - 0?
  r7 - The item pickup flag for the created item?

fopAcM_createIball(cXyz *, int, int, csXyz *, int)
  r3 - 
  r4 - 
  r5 - 
  r6 - 
  r7 - 

fopAcM_createItemFromEnemyTable(unsigned short, int, int, cXyz *, csXyz *)
  r3 - 
  r4 - 
  r5 - 
  r6 - 
  r7 - 


dKyw_wind_set__Fv
  updates the wind direction

dKy_daynight_check
  Returns true if it is currently nighttime, or false otherwise.
  Nighttime is defined as the current hour being less than 6:00AM, or more than or equal to 6:00PM.

cLib_addCalc__FPfffff
  smoothly changes a float value to a desired new value.
  r3 - pointer to the float value to change
  f1 - desired value
  f2 - percentage of the difference between curr value and desired value to change by per call
  f3 - maximum amount to change by per call (absolute)
  f4 - minimum amount to change by per call (absolute)

cLib_addCalc2
  r3 - pointer to the float value to change
  f1 - 
  f2 - 
  f3 - 
  f4 - 

dKyw_tact_wind_set__Fss
  function to change the wind direction to any angle.
  r3 - ? angle stored to 803E5458. usually 0?
  r4 - wind direction. stored to 803E545A.

dLib_setNextStageBySclsNum
  r3 - Exit index in the SCLS list
  r4 - Room number for which room to look in the SCLS list for. If this is -1, it will look in the stage's SCLS list instead of the room's.

daPy_lk_c::startRestartRoom(unsigned long, int, float, int)
  ???
  r3 - Pointer to the Link entity
  r4 - 6?
  r5 - 0xC9?
  f1 - ?
  r6 - 1?

setPointRestart
  sets the partner's "restart" position (e.g. if a floormaster grabs them)
  r3 - Pointer to the partner entity
  r4 - Exit index in the stage.dzs's SCLS list for the player's partner to go through to be put in jail when captured
  r5 - Partner ID number of the partner to set the restart position for
    1 - Makar
    2 - Medli
    3 - Servant of the Tower

setRestartOption
  sets Medli or Makar's "restart" position if they're grabbed by a floormaster

checkItemGet__FUci
  calls the "check has item" func for the given item ID.
  r3 - item ID to check
  r4 - default value to use (0 or 1) when the item-specific function returns -1

803f7338  4 r0 	SComponent.a c_math.cpp
803f733c  4 r1 	SComponent.a c_math.cpp
803f7340  4 r2 	SComponent.a c_math.cpp
  these are RNG counters

getActionBtnZ
checkItemAction

stringSet__21fopMsgM_msgDataProc_cFv
  handles displaying a message string. this includes parsing commands, and calling various functions for each command.
  e.g. tag_input_kenshi__21fopMsgM_msgDataProc_cFv is for the number of knight's crests you have.

stringLength__21fopMsgM_msgDataProc_cFv
  handles calculating the length of a message string. (not sure if it's the character length of pixel length.)
  calls sub-functions such as tag_len_stock_kenshi__21fopMsgM_msgDataProc_cFPiPfPiPiPi

getRubyString__21fopMsgM_msgDataProc_cFPcPcPcPcPcPcPfPfPi
  this function handles actually parsing text commands.
  r3 - 
  r4 - 
  r5 - 
  r6 - 
  r7 - 
  r8 - this is the command string.
    for example, "crest(s)" for the number of knight's crests you have. (this string is at 8033C665.)
    this is the only argument that seems to change between text commands (at least some of them).
  r9 - an empty string? 8033C409
  f0 - 
  f1 - 
  r10 - 

dMsg_continueProc__FP13sub_msg_class
  handles advancing a message to the next text box?
  specifically line 80213608 stores some values to the entity that is triggering this message to tell it to advance the message?
  it seems continueProc is called every frame the player has the option to press A to continue the message
  80212E08 - where it checks if A is pressed. change this to read from offset 0x30 instead of 0x32 and it checks if A is down.
dMsg_stopProc__FP13sub_msg_class
  handles ending a message?
dMsg_finishProc__FP13sub_msg_class
  handles ending an event?

changeDemoProc__9daPy_lk_cFv
  handles calling functions depending on the player's current action index (e.g. 034tact calls procTactWait_init__9daPy_lk_cFi in some cases)

procTactWait_init__9daPy_lk_cFi
  function for the player to be holding the wind waker out and waiting for player input
  song replay does NOT fall under this because its not waiting for player input

_create__9daArrow_cFv
  function that creates an arrow
  800D79E8 - reads the currently selected arrow type (0-3), only used to find the correct heap_size for this arrow type
  800D72EC - calls setTypeByPlayer which stores the selected arrow type to arrow entity+0x601
  800D79E8 - reads the arrow type from arrow entity+0x601

atHit_CB__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf
_atHit__9daArrow_cFP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf
  called when an arrow hits an enemy
  however, doesn't seem to actually affect anything...

SetAtTgGObjInf__4dCcSFbbP8cCcD_ObjP8cCcD_ObjP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GSttsP4cXyz
  function that handles attack collisions.
  calls the specific proc for each entity.
  800AE448 seems to be an important line - this is what's responsible for telling the stalfos that a light arrow hit him?
    the value stored seems to be the entity index of the entity that damaged it.

GetAc__22dCcD_GAtTgCoCommonBaseFv
  this function reads the entity index of the entity that damaged another entity (the same one stored to by 800AE448)
  this seems to be a func that returns the entity pointer of the entity that did damage.

ChkTgHit__12dCcD_GObjInfFv
  checks if anything hit the enemy this frame
GetTgHitObj__12dCcD_GObjInfFv
  returns the entity that hit the enemy this frame

fopMsg_Create__FPv
  creates a message
  breakpoint on 8002A804 and look in r0 for the message ID

fopMsgM_hyrule_language_check
  Checks if a message should be displayed in Hylian script or regular language. Returns true for Hylian script.
  r3 - The message ID to check

fopMsgM_itemMsgGet_c::getMesgHeader
  r3 - ?
  r4 - The message ID
  Returns a pointer to the start of the BMG file header ("MESGbmg1")

fopMsgM_itemMsgGet_c::getMessage
  r3 - ?
  r4 - Pointer to the BMG file header ("MESGbmg1")

fopMsgM_itemMsgGet_c::getMesgEntry
  r3 - ?
  r4 - ?

dComIfG_resLoad(request_of_phase_process_class *, char const *)
  loads a RARC into memory maybe?
  r3 - Pointer to somewhere in the entity? e.g. entity+0x2AC
  r4 - Pointer to the filename of the arc (without the .arc)

dRes_control_c::getRes(char const *, long, dRes_info_c *, int)
getRes__14dRes_control_cFPCclP11dRes_info_ci
  loads a resource from a RARC
  r3 - Pointer to the filename of the arc (without the .arc)
  r4 - File index of the file to load.
  r5 - 0x803E0BC8 (Pointer to the string "System")
  r6 - ??? 0x40
  returns a pointer to the loaded resource

dRes_control_c::getIDRes
  loads a resource from a RARC based on the file ID
  r4 - File ID

dRes_control_c::getRes(char const *, char const *, dRes_info_c *, int)
getRes__14dRes_control_cFPCcPCcP11dRes_info_ci
  loads a resource from a RARC
  r3 - Pointer to the filename of the arc (without the .arc)
  r4 - File name of the file to load
  r5 - 0x803E0BC8 (Pointer to the string "System")
  r6 - ??? 0x40
  returns a pointer to the loaded resource

JASystem::ResArcLoader::getResSize( (JKRArchive *, unsigned short))
  Returns the filesize of a file in a RARC.
  r3 - 
  r4 - File index of the file.

JKRArchive::readTypeResource(void *, unsigned long, unsigned long, char const *, JKRArchive *)
  r3 - 
  r4 - 
  r5 - The node type to read from (e.g. "TIMG").
  r6 - 
  r7 - 

dBgWSv::Set(cBgD_t *, unsigned long)
  sets the collision for an entity by a .dzb file
  r3 - ? read from entity+0x2E8
  r4 - Pointer to the .dzb file resource (return value from getRes)
  r5 - 0?

dBgW::ChangeAttributeCodeByPathPntNo(int, unsigned long)
  r3 - dBgW collision struct
  r4 - ?
  r5 - The new value to set for the attribute code direct value (mask 001F0000 in the second bitfield of the collision properties)


set__19dStage_startStage_cFPCcScsSc
  changes the game to a different stage

set__19dSv_player_priest_cFUcR4cXyzsSc
  sets the position of the player's partner (e.g. Makar) in the save file.

screenSetTr__13dMenu_Fmap2_cFv
dMenu_Fmap2_c::screenSetTr(void)
  Initializes the IN-credible Chart.
  This includes setting the visiblity of the triforce shard markers and such.
  It calls dMenu_Fmap2_c::isOpenCollectMapTriforce at 801C0A60 to check if you have each triforce chart opened and deciphered.

checkMarkCheck1__12dMenu_Fmap_cFv
  handles making the blue quest markers appear on the sea chart (early game)
  r30 = 8157d35c
  [r30+0x46F4]+0xAA - DRC
  [r30+0x4764]+0xAA - FW
  [r30+0x472C]+0xAA - greatfish isle
  [r30+0x479C]+0xAA - northern triangle isle
  [r30+0x480C]+0xAA - eastern triangle isle
  [r30+0x47D4]+0xAA - southern triangle isle

checkMarkCheck2__12dMenu_Fmap_cFv
  handles making the blue quest markers appear on the sea chart (mid game)
  r31 = 8157d35c
  [r31+0x4844]+0xAA - WT
  [r31+0x487C]+0xAA - ET

checkMarkCheck3__12dMenu_Fmap_cFv
  handles making leaf icons representing korok withered trees appear on the sea chart?

execute__9daPy_lk_cFv
  link's update code
  8012204C - where it calls the proc for whatever state is currently in. breakpoint here to find the function for link's current state.

daPy_lk_c::checkNextActionFromButton(void)
  function for taking button input and changing Link's state
  8010E3BC - where it calls daPy_lk_c::procFrontRoll_init(float) to trigger a manual front roll. can replace this with a call to daPy_lk_c::procAutoJump_init(void) to make Link jump instead of rolling when forward+A is press.

procFanGlide_init
procFanGlide
  update functions for when link is flying with deku leaf
  8014CA98 - where it sets link's animation for initializing deku gliding by calling setSingleMoveAnime

setSingleMoveAnime

drawMirrorLightModel__9daPy_lk_cFv
  draws the ray of light off the mirror shield/harp

init__18dDlst_mirrorPacketFP7ResTIMG
  initializes the static image reflection when the mirror shield/harp reflect light onto a wall.
  r4 - 0 for link, or a pointer to the raw data of the md_spot.bti file for medli


dComIfGp_setNextStage__FPCcsScScfUliSc
dComIfGp_setNextStage(char const *, short, signed char, signed char, float, unsigned long, int, signed char)
  changes the current stage
  r3 - Stage name pointer
  r4 - Spawn ID
  r5 - Room number
  r6 - Override layer number, or FF for none
  f1 - 
  r7 - 
  r8 - 
  r9 - Wipe type, affects the screen fade out type
    0 - fade whole screen to white
    1 - fade whole screen to black
    9 - 
    B - fade letterboxed part of the screen to white (not the black borders at the top and bottom)

dStage_changeSceneExitId(cBgS_PolyInfo &, float, unsigned long, signed char)
  Handles a stage transition specified by the Exit ID property set in the DZB collision geometry.
  There are some special exit IDs for DZB collision:
    3B - Goes into a submarine.
      Only works if this is actor collision belonging to an instance of obj_ikada, since the game reads that actor's parameters to determine which room of Beedle's shop to go to.
    3C - Goes into the Pirate Ship...?
      depends on some event bits
    3D - Returns to the sea via the last submarine or Beedle's Shop Ship exit.
      Specifically, it returns you to the room number stored to 803CA90E, and sets the spawn ID to -2.
    3E - Goes into Beedle's Shop Ship.
      Only works if this is actor collision belonging to an instance of obj_ikada, since the game reads that actor's parameters to determine which room of Beedle's shop to go to.

dStage_playerInit(dStage_dt_c *, void *, int, void *)
  r3 - 
  r4 - 
  r5 - 
  r6 - 


init__20dSeaFightGame_info_cFii
put_ship__20dSeaFightGame_info_cFUcUc
checkPutShip__20dSeaFightGame_info_cFiiii
attack__20dSeaFightGame_info_cFUcUc
  sinking squids/sploosh kaboom stuff
  see sploosh kaboom.txt for details

processHeartGaugeSound__11JAIZelBasicFv
  handles playing the low hearts sound
  seems to play a different sound depending on current number of quarter hearts (in r4)
  0 - no sound
  1-2 - sound D2
  3-4 - sound D1
  5-6 - sound D0
  7+ - no sound

execWaitMainFromBoss__8daItem_cFv
  seems related to the movement of the heart container gohdan shoots out of his nose?



fopAcM_fastCreate__FsUlP4cXyziP5csXyzP4cXyzScPFPv_iPv
  creates an entity.
  r3 - Actor ID
  r4 - Params
  (more args)

fopAcM_create(short, unsigned long, cXyz *, int, csXyz *, cXyz *, signed char, int (*)(void *))
fopAcM_create__FsUlP4cXyziP5csXyzP4cXyzScPFPv_i
  creates an entity.
  r3 - Actor ID
  r4 - Params
  r5 - Position (pointer to a vector3 of floats)
  r6 - Room number
  r7 - Auxilary params and rotation (pointer to a vector3 of shorts, auxilary params 1, Y rotation, auxilary params 2)
  r8 - Scale (pointer to a vector3 of floats)
  r9 - 0?
  r10 - 0?

fopAcM_createChild__FsUiUlP4cXyziP5csXyzP4cXyzScPFPv_i
fopAcM_createChild(short, unsigned int, unsigned long, cXyz *, int, csXyz *, cXyz *, signed char, int (*)(void *))
  creates an entity as a child of another entity
  r3 - Actor ID
  r4 - unique ID of the parent entity
  r5 - Params
  (more args)

fopAcM_createChild(char *, unsigned int, unsigned long, cXyz *, int, csXyz *, cXyz *, int (*)(void *))
  creates an entity as a child of another entity
  r3 - Actor name
  (more args)

createAppend__FUlP4cXyziP5csXyzP4cXyzScUi
  part of creating an entity
  r3 - Params
  r9 - unique ID of the parent entity, or -1 for no parent
  (more args)

fpcSCtRq_Request__FP11layer_classsPFPvPv_iPvPv
  part of creating an entity
  r4 - Actor ID
  r7 - "append" entity? (return value from createAppend__FUlP4cXyziP5csXyzP4cXyzScUi)
  (more args)

createChild__16mDoHIO_subRoot_cFPCcP13JORReflexible
mDoHIO_subRoot_c::createChild(char const *, JORReflexible *)
  creates a child entity...? used by darknuts for example
  r3 - Pointer to 803A5774 + 4
  r4 - Pointer to a string for this entity's name? not the actor name, but an actual japanese name. e.g. for darknut, this points to a SHIFT JIS string of "タートナック".
  r5 - Pointer to "HIO" in the BSS section?

fopAcM_delete__FP10fopAc_ac_c
fopAcM_delete(fopAc_ac_c *)
  deletes an entity
  r3 - Entity to delete


checkRopeSwingWall__9daPy_lk_cFP4cXyzP4cXyzPsPf
daPy_lk_c::checkRopeSwingWall((cXyz *,cXyz *,short *,float *))
  checks if the player swung into a wall and should bounce off.
  r3 - pointer to the player
  r4 - pointer to the player's current position (player_entity+0x1F8)
  r5 - pointer to a position. might be the player's position after being rotated and offset compared to the swinging rope?
  r6 - pointer to ??? rotation or rotational velocity? (short)
    this seems to be calculated like so:
    short(???*float(-players_previous_frame_rotation_velocity))
    it seems to be the velocity of the player swinging on the rope, back and forth, not rotating.
  r7 - pointer to ??? (float)


reinit__10dSv_info_cFv
  initializes new game+
  things it does:
  * reads 0x11 event registers (the ones listed at 80375DC8) and stores them somewhere in free space (e.g. 815b0db4)
  * reads the byte at 803C4DA8 (e.g. 0x01) into r28 (overrides hero's clothes to get the hero's new clothes?)
  * copies the player's name from the old to the stack
  * reads the byte at 803C4DAE (e.g. 0x00) into r27
  * reads the byte at 803C4DAC (e.g. 0x01) into r26
  * reads the byte at 803C4DAD (e.g. 0x00) into r25
  * reads the byte at 803C4DAF (e.g. 0x01) into r24
  * reads the byte at 803C4C70 (e.g. 0x00) into r23
  * gets event register 89FF, puts the value into r22
  * initializes the save with the regular new game function
  * sets the same 0x11 event registers back to what their value was before
  * sets 5 event bits to on (the ones listed at 80375DEC)
  * sets event register C407 to 07 (lenzo related!)
  * sets treasure box opened flag 0 in stage ID B (pictobox chest!)
  * sets switch 0x47 for stage ID 0 (unsure what this is...)
  * sets switch 0x5E for stage ID 0 (unsure what this is...)
  * copies the player's old name from the stack to the new save file
  * stores r28 back to 803C4DA8
  * stores r27 back to 803C4DAE
  * stores r26 back to 803C4DAC
  * stores r25 back to 803C4DAD
  * stores r24 back to 803C4DAF
  * sets 803C4DA9, the index of the random salvage points to use, to 3
  * puts deluxe picto box in the player's inventory
  * sets byte 803CA7E5 to 8
  * sets byte 803CA7E6 to 0x26 (same as picto box ID)
  * sets the bits for owning both picto boxes
  * stores r23 back to 803C4C70
  * sets event register 89FF back to the old value (in r22)
  
  event reg 89FF is related to pictures you take somehow.
  it appears to be a bitfield.
  when you erase a picture, a bit gets ORed.
  when you take a picture, the whole thing gets set to 0...?
  I guess it's doing something to preserve whatever pictographs you had in new game

onBeast__25dSv_player_get_bag_item_cFUc
  sets a bit for whether you've ever owned a particular spoil

dSv_player_collect_c::isCollect(int, unsigned char)
  checks if you own a particular item by checking a bitfield.
  r3 - Offset of the one-byte bitfield from 803C4CBC.
  r4 - Index of the bit in the bitfield.

setItemModel__9daPy_lk_cFv
  seems to control which of the player's item accessory models are currently visible.
  8010627C - reads the currently equipped shield ID to know which shield model to show.

setLinkShieldType__11JAIZelBasicFll
  ???
  r3 - pointer to ?
  r4 - shield type.
    0 - no shield
    1 - hero's shield
    2 - mirror shield

JAIZelBasic::seStart(unsigned long, Vec *, unsigned long, signed char, float, float, float, float, unsigned char)
  Plays a sound effect. The puzzle complete jingle counts as a sound effect.
  r3 - Pointer to 803A2CE8, which is read from 803F7710 (JAIZelBasic::zel_basic(void))
  r4 - The sound ID.
    & 000003FF - The index of the sound in its category.
    & 00000400 - ?
    & 00000800 - ? Don't let the sound fade out?
    & 000FF000 - Sound category.
      0-7 - Valid sound categories.
    & C0000000 - Some type of special flag?
      0 - Use the sound category specified with the mask 000FF000.
      1 - Maybe invalid?
      2 - Use sound category 0x10. (For sequenced music.)
      3 - Use sound category 0x11. (For streamed music.)
  r5 - 
  r6 - 
  r7 - 
  f1 - 
  f2 - 
  f3 - 
  f4 - 
  r8 - 0?

JAIBasic::startSoundVec(unsigned long, JAISound **, Vec *, unsigned long, unsigned long, unsigned char)
  Generic sound (sfx or music) playing function, called by all others.
  r3 - 
  r4 - The sound ID. See seStart for details.
  r5 - 
  r6 - 
  r7 - 0?
  r8 - 0?
  r9 - 4?

JAIZelBasic::charVoicePlay(long, long, Vec *, signed char)
  Plays a character voice sound effect.
  r3 - 
  r4 - 
  r5 - 
  r6 - 

JAISound::setPortData(unsigned char, unsigned short)
  ???
  r3 - 
  r4 - port number...?
  r5 - data to set...?

mDoAud_messageSePlay(unsigned short, Vec *, signed char)
  Plays a sound from a message text command.
  r3 - The sound value from the message command.
  r4 - Pointer to ??? (can be 0)
  r5 - Return value from dComIfGp_getReverb? (Or can be 0)

JAIZelBasic::messageSePlay(unsigned short, Vec *, signed char)
  Plays a sound from a message (either from a text command or the "initial sound" of the message).
  r3 - Pointer to 803A2CE8 (JAIZelBasic::zel_basic)
  r4 - The sound value from the message command.
  r5 - Pointer to ??? (can be 0)
  r6 - Return value from dComIfGp_getReverb? (Or can be 0)

JAIGlobalParameter::getParamSeCategoryMax(void)
  This can be called to get the number of sound categories that exist (8).

JAInter::SoundTable::getInfoPointer( (unsigned long))
  Gets a pointer to a sound's info.
  r3 - The sound ID.

JAIBasic::getSoundOffsetNumberFromID(unsigned long)
  r3 - (pointer to the something. read from 803F7578)
  r4 - The sound ID.

bgmStart
  Starts playing background music. Boss music counts as background music.
  r4 - The BGM ID.
    BGM IDs can be a bit different from normal sound IDs.
    Normally they are the same, for example:
      80000002 - Plays BGM with index 02.
    But sometimes, the BGM ID is over 0x100, for example:
      80000130 - Plays BGM with index 42.
    These 100+ BGM IDs allow playing certain hardcoded BGMs with different instruments.
    For example, 120-123 all play Gohdan's theme (d_amosu.bms), but they sound quite different.
    How to map these special BGM IDs to BGM indexes is hardcoded into bgmStart.
    Full list:
      80000105 -> 80000005
      80000110 -> 80000014
      80000111 -> 80000014
      80000112 -> 80000014
      80000115 -> 80000015
      80000120 -> 80000023
      80000121 -> 80000023
      80000122 -> 80000023
      80000123 -> 80000023
      80000124 -> 80000029
      80000125 -> 80000028
      80000126 -> 80000028
      80000130 -> 80000042
      80000131 -> 80000042
      80000132 -> 80000042
      80000133 -> 80000042
      80000140 -> 80000048
      80000150 -> 80000049
      80000151 -> 8000004A
      80000152 -> 8000004C

expandSceneBgmNum

  r4 - Halfword BGM ID read from a BGM info for a spot/island.
  
  This function returns the BGM ID in a full word format.
  
  e.g. 0012 -> 80000012
  
  If the halfword BGM ID has the highest bit set, it instead returns like this (for BGM streams):
  
  e.g. 8012 -> C0000012

setScene__11JAIZelBasicFllll

JAIZelBasic::setScene(long, long, long, long) 
  sets the music for the next stage/room the player is about to go into?
  
  r3 - 
  
  r4 - Spot ID for the stage.
  
  r5 - Room number.
  
  r6 - 
  
  r7 - Override layer number.
  
  (more args)
  
  This function hardcodes various checks for specific stages based on the spot ID. Here is a list:
  
    802AA40C - sea
    
    802AA644 - A_mori
    
    802AA66C - MajyuE
    
    802AA690 - M_DragB
    
    802AA724 - kinBOSS
    
    802AA7B0 - SirenB
    
    802AA83C - kazeB
    
    802AA8D0 - M_DaiB
    
    802AA964 - Hyroom
    
    802AA9AC - Hyrule
    
    802AA9F0 - Hyroom
    
    802AAA34 - kenroom
    
    802AAA98 - Omori
    
    802AAADC - Pjavdou
    
    802AAB20 - Ekaze
    
    802AAB64 - Edaichi
    
    802AABA8 - LinkRM
    
    802AAC18 - Obombh
    
  If the stage is "sea", it also hardcodes a check for a specific island based on the Room number. Here it is:
  
    802AA44C - Outset Island
    
  Each of these hardcoded checks includes various sub-checks for things like event bits and layer numbers and such to determine if music should be played or not.

checkSeaBgmID 
  returns the expanded BGM ID that should currently be played while sailing

bgmNowBattle 
  Starts playing the music for fighting common enemies.

JAIZelBasic::mbossBgmNearByProcess(float) 
  TODO look into this function, it might be detecting if a miniboss is near the player
  
  r3 - 
  
  f1 - 

subBgmStart 
  Starts playing "sub" background music. Mini-boss music, whirlpool music, and item get jingles are included in this. 
  Also sets 803A2D9E to know what the previous sub background music was before it was interrupted.

bgmStreamPlay 
  Plays an background music stream? Boss defeat fanfares count as this, maybe other things?

start__Q28JASystem8TSeqCtrlFPvUl 
  related to playing audio

adaptor_do_SOUND__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl 
  handles playing sounds (sfx or music) during stb cutscenes

JAIZelBasic::setScene(long, long, long, long)

  loads necessary audio stuff for a particular stage?
  
  r3 - 
  
  r4 - The spot ID for this stage.
  
  r5 - 
  
  r6 - 
  
  r7 - 
  
  This MIGHT hardcode loading certain things, like some of the instruments for Molgera's fight theme that are only loaded for kazeB.
  or, maybe the hardcoding is just for UNLOADING them when the boss is dead...?

JAInter::BankWave::loadSceneWave

JAInter::BankWave::loadGroupWave

JASystem::WaveBankMgr::loadWave

JASystem::WaveBankMgr::getWaveArc

JASystem::WaveBankMgr::getWaveBank

  These functions are part of loading a wave bank
  
  r3 - The wave bank index (this is the same as the index of the .aw file in the .aaf file)



onOceanSvBit__11dSv_ocean_cFUcUs 
  sets a salvage point as gotten
  
  r3 - pointer to 803C51C8, list of bitfield shorts for sunken treasure chests being salvaged
  
  r4 - The island number the sunken treasure is in. (1-49) 
    This is used as the index in the list of bitfield shorts (803C51C8). 
    must be in the range 0x00-0x31
    
  r5 - Index of the bit within the bitfield short. 
    must be in the range 0x00-0x0F

drawPointSingle__6dMap_cFUcfffScsUcUcUc 
  draws an icon on the map
  
  r6 - the treasure chest opened flag index.
  
    0xF is for tingle chests - these won't show up until you've made them appear.

__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl 
mDoExt_McaMorf::__ct(J3DModelData *, mDoExt_McaMorfCallBack1_c *, mDoExt_McaMorfCallBack2_c *, J3DAnmTransform *, int, float, int, int, int, void *, unsigned long, unsigned long)

  creates a BCK/BCA animation
  
  r3 - 
  
  r4 - 
  
  r5 - model resource
  
  r6 - 
  
  r7 - 
  
  r8 - 
  
  r9 - 
  
  f1 - 
  
  r10 - 
  
  [sp+8,4] - 
  
  [sp+C,4] - 
  
  [sp+10,4] - 
  
  [sp+14,4] - 
  
  [sp+18,4] - 

mDoExt_brkAnm::init(J3DModelData *, J3DAnmTevRegKey *, int, int, float, short, short, bool, int)

init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifssbi

  r3 - pointer to the BRK animation?
  
  r4 - J3DMaterialTable *
  
  r5 - J3DAnmTevRegKey *
  
  r6 - int
  
  r7 - int
  
  f1 - float
  
  r8 - short
  
  r9 - short
  
  r10 - bool
  
  [sp+8,4] - int

mDoExt_brkAnm::entry(J3DModelData *, float)

entry__13mDoExt_brkAnmFP12J3DModelDataf

  Updates a TEV register animation.
  
  r3 - 
  
  r4 - 
  
  f1 - The time/keyframe to use?


__mi__4cXyzCFRC3Vec

  calculates the difference between two vector3s of floats. aka, it's just A - B.
  
  r3 - pointer on the stack for the return value (a vector3 of the X diff, Y diff, and Z diff between the two input vectors)
  
  r4 - input vector A
  
  r5 - input vector B

PSVECSquareMag

  seems to take an input vector3 of floats, and returns in f1 the sum of the squares of each component of the vector
  
  r3 - input vector
 
PSVECScale 
  Multiplies a vector3 by a float value, modifying the original vector3 in place.
  
  r3 - Pointer to the input/output vector3 of floats
  
  f1 - Amount to multiply by


da[NAMEHERE]_Create__FP10fopAc_ac_c

da[NAMEHERE]_Delete__FP10daAgbsw0_c

da[NAMEHERE]_Execute__FP10daAgbsw0_c

da[NAMEHERE]_IsDelete__FP10daAgbsw0_c

da[NAMEHERE]_Draw__FP10daAgbsw0_c

  these methods exist for every REL code file. the [NAMEHERE] part varies for each REL.
  
  Create - initializes the object.
  
    if this returns 5, it means the object should not actually be created. for example, maybe there wasn't enough memory to load its model. or maybe the game is in such an event state that this object shouldn't exist (like Medli during some parts of the game).
    
    the normal return value for when the object SHOULD exist seems to be 4.

GetPolyId1 
  gets the AttributeCode aka AttributeCodeDirect aka AttribID from a certain polygon?
  
  r3 - 
  
  r4 - 
  
  r5 - the face index
  
  r6 - 
  
  r7 - 
  
  r8 - 
  
  800A0A28 is where it reads the pointer to the start of the .dzb file
  
  800A0A2C is where it reads the pointer to the Properties list in the .dzb file
  
    (r28 has the index in the Properties list (read from the face))

PSMTXMultVec

  r3 - matrix? (big thing, at least least 0x2C bytes long)
  
  r4 - vector3 of floats?
  
  r5 - vector3 of floats (output)

PSMTXCopy

  r3 - matrix
  
  r4 - matrix (output)

MtxPosition(cXyz *, cXyz *)

  translates the last used matrix (803F63A0 calc_mtx) by an offset?
  
  r3 - vector3 of floats (offset?)
  
  r4 - vector3 of floats (output)


playerInit__9daPy_lk_cFv

daPy_lk_c::playerInit 
  Initializes the Link actor.
  
  There are several assertions starting at 80124F88:
  
    zon_cnt <= 4
    
    zon_cnt == 4
    
    zoff_none_cnt == 4
    
    zoff_blend_cnt == 4
    
  These check to be sure a certain number of Link's materials have certain properties set, such as ZCompLoc.

Set__8dCcD_CpsFRC11dCcD_SrcCps

  initializes part of an entity that can deal damage...?
  
  r3 - pointer to the entity? or something inside the entity?
  
  r4 - pointer to something that has data related to the damage dealing entity to initialize
  
    the word at [r4+4] is a bitfield of the damage types for this entity to deal

setPlayerPosAndAngle__9daPy_lk_cFP4cXyzs

  sets player position and angle
  
  r3 - player entity
  
  r4 - pointer on the stack
  
    [r4+0] - X pos (float)
    
    [r4+4] - Y pos (float)
    
    [r4+8] - Z pos (float)
    
  r5 - Y rotation


isSwitch__10dSv_info_cFii

dSv_info_c::isSwitch(int, int) 
  checks if a switch bit is set.
  
  r3 - Pointer to 803C4C08 (g_dComIfG_gameInfo)
  
  r4 - Switch index to check
  
    the type of switch depends on the range the switch index is in:
    
    00-7F: mem bit, calls function isSwitch__12dSv_memBit_cFi
    
    80-BF: dan bit, calls function isSwitch__12dSv_danBit_cFi with r3 = 803C53A4 and r4 = switch index minus 0x80
    
    C0-EF: zone bit, calls function isSwitch__13dSv_zoneBit_cFi
    
    F0-FE: Also "zone bits", but these are invalid and will cause an error to happen.
    
    FF: invalid switch, always return false
    
  r5 - Room number.

isSwitch__12dSv_memBit_cFi 
  checks if a switch mem bit is set.
  
  r3 - pointer to the stage info to check the switch in
  
  r4 - switch index to check (should be within the range 00-7F)

isSwitch__12dSv_danBit_cFi

  r3 - pointer to 803C53A4
  
  r4 - dan bit index (should be within the range 00-3F)

isSwitch__13dSv_zoneBit_cFi

  r3 - pointer to the zone (within the zone list, 803C53B2)
  
  r4 - zone bit index (should be within the range 00-2F)


dPath_GetRoomPath__Fii 
  returns a pointer to the requested path
  
  r3 - Path index
  
  r4 - Room number

dPath_GetNextRoomPath(dPath *, int)

  r3 - Pointer to a path
  
  r4 - Room number

dNpc_PathRun_c::setInf(unsigned char, signed char, unsigned char) 

  r3 - Pointer to the dNpc_PathRun_c struct
  
  r4 - Path index (or FF for none)
  
  r5 - Room number
  
  r6 - Boolean for movement direction being forwards


fopAcM_setCarryNow__FP10fopAc_ac_ci 
  sets a weapon as being carried by an enemy?
  
  r3 - pointer to the weapon entity
  
  r4 - ?

fopAcM_cancelCarryNow__FP10fopAc_ac_c 
  unsets a weapon as being carried by an enemy?
  
  r3 - pointer to the weapon entity


fopScnM_ChangeReq__FP11scene_classssUs 
  Changes the game state.
  
  r3 - (scene_class*)
  
  r4 - The new game state.
  
    5 - 
    
    6 - Debug map select.
    
    7 - Ingame.
    
    8 - Title screen.
    
    B - Ending?
    
    D - 
    
    E - 
    
  r5 - Wipe type, affects the screen fade out type.
  
    0 - Fade whole screen to white
    
    1 - Fade whole screen to black
    
    B - Fade letterboxed part of the screen to white (not the black borders at the top and bottom)
    
  r6 - (unsigned short)

init__10dSv_info_cFv 
  initializes a new save file
  
  r3 - ?

card_to_memory__10dSv_info_cFPci 
  loads a save file
  
  r3 - (803C4C08, where to load the save file. but this function just hardcodes that pointer anyway so this arg doesn't matter.)
  
  r4 - the current scene entity pointer.
  
  r5 - save file index

daPy_lk_c::checkNewItemChange(unsigned char)

  checks if the player should use an item assigned to X/Y/Z
  
  r3 - Pointer to the Link entity.
  
  r4 - ?

daPy_lk_c::makeItemType(void) 
  Handles creating an item when the player uses it, such as taking out a bomb or the hookshot.
  
  r3 - Pointer to the Link entity.

set__13dPa_control_cFUcUsPC4cXyzPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyz

dPa_control_c::set(unsigned char, unsigned short, cXyz const *, csXyz const *, cXyz const *, unsigned char, dPa_levelEcallBack *, signed char, _GXColor const *, _GXColor const *, cXyz const *)

  Initializes a particle effect.
  
  r3 - this word is read from from 803CA6CC
  
  r4 - 0?
  
  r5 - The particle ID
  
  r6 - Position to create the particle effect at? (pointer to a vector3 of floats)
  
  r7 - 0?
  
  r8 - 0?
  
  r9 - 0xFF?
  
  r10 - ??? pointer to somewhere in the calling entity, like [calling_entity+0x844] or [calling_entity+0x858]

dPa_control_c::setSimple(unsigned short, cXyz const *, unsigned char, _GXColor const &, _GXColor const &, int)

  r3 - this word is read from from 803CA6CC
  
  r4 - The particle ID
  
  (more args)
  
  8007DC64 - breakpoint here to find if there's a missing particle created with setSimple. the particle ID will be in r3.

createSimpleEmitterID__17JPAEmitterManagerFRCQ29JGeometry8TVec3<f>UsUcUcP34JPACallBackBase<P14JPABaseEmitter>P54JPACallBackBase2<P14JPABaseEmitter,P15JPABaseParticle> 
  part of initializing a particle effect
  
  r3 - 
  
  r4 - 
  
  r5 - The particle ID
  
  r6 - 
  
  r7 - 
  
  r8 - 
  
  r9 - 
  
  8025F1EC - this is where the missing particle warning happens. the particle ID in question will be in r21.

daPy_mtxFollowEcallBack_c::makeEmitterColor(unsigned short, float (*)[4], cXyz const *, _GXColor const *, _GXColor const *) 
  Initializes a particle effect that follows the player?
  
  r3 - 
  
  r4 - The particle ID
  
  r5 - 
  
  r6 - 
  
  r7 - 
  
  r8 - 

daPy_mtxPosFollowEcallBack_c::makeEmitterColor(unsigned short, float (*)[4], cXyz const *, csXyz const *, _GXColor const *, _GXColor const *) 
  Initializes a particle effect that follows the player?
  
  r3 - 
  
  r4 - The particle ID
  
  r5 - 
  
  r6 - 
  
  r7 - 
  
  r8 - 
  
  r9 - 


fopAcM_myRoomSearchEnemy__FSc
  
fopAcM_myRoomSearchEnemy(signed char) 
  Checks for any enemies in the room and returns a pointer to one of them. 
  This is used by things that want to know if all the enemies in the room are dead. 
  An actor counts as an enemy if its actor type specified in its actor profile is 2 (Enemy).
  
  r3 - Room number

GetIndex__12cDT_NamePTblCFPCci
  
cDT_NamePTbl::GetIndex( const(char const *, int))
  
  returns something that affects this enemy's drops
  
  it seems to be the value that gets passed as argument r4 to createIball
  
  r3 - 803C9CB4
  
  r4 - Pointer to a string of the actor name
  
  r5 - 0?

fopAcM_getProcNameString__FP10fopAc_ac_c 
  given an actor instance, it returns that actor's actor name. 
  e.g. darknut entity -> "Tn"
  
  r3 - Pointer to an actor entity
  
  returns r3 - Pointer to the actor name

fopAcM_entrySolidHeap(fopAc_ac_c *, int (*)(fopAc_ac_c *), unsigned long) 
  Allocates some memory from the Game heap and initializes an entity. 
  This function stores a pointer to the start of the memory block to [entity+0xF0].
  
  In order to know how much memory actually gets used, it first temporarily allocates an amount of memory from a block equal to the amount of memory specified in r5, the maximum that may be needed for this entity.
  
  Then it runs the callback function so the entity initializes itself, and lets it use as much of the allocated memory as it wants, and then sees how much space that used, and remarks the space in the block that WASN'T used to be free again.
  
  If r5 is not 0, it will give the entity the smallest free block of memory available that is large enough for the entity to use (specifically, a chunk has to be at least r5+0x90 bytes large if you don't count the 0x10 byte block header, or r5+0xA0 bytes large if you do).
  
  If r5 is 0, it gives the entity the largest contiguous free block of memory to work with - so it doesn't have to worry about hitting some arbitrary maximum, but on the downside this can potentially worsen memory fragmentation if the entity is one that stays loaded even when changing rooms (e.g. background island LoD models).
  
  if argument r5 is 0, then it seems to just allocate the entirety of the biggest block temporarily.
  
  r3 - Entity pointer
  
  r4 - Callback function for this entity to initialize itself
  
  r5 - Maximum amount of memory that may be needed, or 0 for no maximum.

createSolidHeapFromGameToCurrent 
  creates a new heap off the game heap, and makes that new heap the current heap?

JKRHeap::alloc(unsigned long, int, JKRHeap *) 
  Allocates some memory out of a heap.
  
  r3 - The amount of memory to allocate.
  
  r4 - Affects how the memory is allocated?
  
    Specifics might depend on the exact class of the heap.
  
    For JKRExpHeaps:
  
      If negative, allocate from tail. Otherwise, allocate from head.
  
      If the absolute value is > 4, it will be passed as argument r5 to the overloaded versions of allocFromHead/allocFromTail.
  
      If the absolute value is <= 4, no argument r5 will be passed, it uses the non-overloaded versions.
                                   
  r5 - Pointer to a JKRHeap (or child class)
                                   
    If this pointer is 0, it will use the current heap instead (803F772C - JKRHeap::sCurrentHeap)

daPy_lk_c::loadTextureAnimeResource(unsigned long, int)
                                   
  loads a .btp animation (facial texture animation) into memory for Link to use.
                                   
  r3 - Pointer to the player entity
                                   
  r4 - File index of the .btp animation inside LkAnm.arc
                                   
  r5 - 0?
                                   
  returns r3 - Pointer to the loaded .btp animation

daPy_lk_c::setTextureAnimeResource(J3DAnmTexPattern *, int)
                                   
  sets Link's current .btp animation (facial texture animation)
        
  r3 - Pointer to the player entity
        
  r4 - Return value from daPy_lk_c::loadTextureAnimeResource
        
  r5 - ?


objectSetCheck__FP19room_of_scene_class 
  handles creating a new room, the model and collision specifically. 
  80236A80 - where it starts getting ready to create the new room as an entity
  it calls fopAcM_create__FsUlP4cXyziP5csXyzP4cXyzScPFPv_i to create the entity
  the room is an actor of type "Bg" (actor ID 1BC) 
  the params to the room are just the room number. 
  note that this function does NOT handle creating entities at all.


dScnRoom_Create__FP11scene_class
        
  initializes changing a room?
        
phase_0__FP19room_of_scene_class
        
phase_1__FP19room_of_scene_class 
        
phase_2__FP19room_of_scene_class 
        
phase_3__FP19room_of_scene_class 
        
phase_4__FP19room_of_scene_class 
        
  handles changing rooms?

dScnRoom_Delete__FP19room_of_scene_class 
  deletes a room

stayRoomCheck__FiPUci 
  checks whether a room should stay loaded or unload itself? 
  if all rooms unload themselves, the game engine then loads a new room on the sea?

loadRoom__20dStage_roomControl_cFiPUc 
  handles checking if an island should be loaded
        
  r5 - pointer to the list of "adjacent rooms" in the current RTBL entry

createRoomScene__Fi 
  handles actually loading a room


dBgS::ChkGrpInf(cBgS_PolyInfo &, unsigned long) 
  gets group info for a group from a dzb file
        
  802472ec
        

cBgS::ChkPolySafe(cBgS_PolyInfo &)
        
  ???

dBgS::GetGroundCode(cBgS_PolyInfo &) 
  Returns the ground code of the DZB collision triangle below an actor. 
  e.g. This might return 4 for the ground type that causes the player to respawn.

dBgS::GetAttributeCode(cBgS_PolyInfo &) 
  Returns to attribute code of the DZB collision triangle below an actor.


GFSetArray(_GXAttr, void *, unsigned char) 
  part of drawing a procedural model with its data compiled into the code (e.g. grass, flowers, cape)
        
  r3 - the type of data to set. (_GXAttr enum) values according to noclip.website's code:
                                   
  (9, 10, 11, and 13 are the ones most relevant here)
                                   
    PNMTXIDX = 0,
                                   
    TEX0MTXIDX = 1,
                                   
    TEX1MTXIDX = 2,
                                   
    TEX2MTXIDX = 3,
                                   
    TEX3MTXIDX = 4,
                                   
    TEX4MTXIDX = 5,
                                   
    TEX5MTXIDX = 6,
                                   
    TEX6MTXIDX = 7,
                                   
    TEX7MTXIDX = 8,
                                   
    POS = 9,
                                   
    NRM = 10,
                                   
    CLR0 = 11,               
                                   
    CLR1 = 12,                         
                                   
    TEX0 = 13,
                                   
    TEX1 = 14,
                                   
    TEX2 = 15,
                                   
    TEX3 = 16,
                                   
    TEX4 = 17,
                                   
    TEX5 = 18,
                                   
    TEX6 = 19,
                                   
    TEX7 = 20,
                                   
    MAX = TEX7,
                                   
    NBT = 25,
                                   
    NULL = 0xFF,
                                   
  r4 - pointer to the data

GXCallDisplayList
                                   
  r3 - pointer to the compiled material data (same format as MDL entries in the MDL3 section of BDL models)
                                   
  r4 - ?

GXInitTexObj 
  initializes a compiled texture
                                   
  r3 - ?
                                   
  r4 - Pointer to the texture data
                                   
  r5 - Width
                                   
  r6 - Height
                                   
  r7 - Image format
                                   
  r8 - U texture wrap mode
                                   
  r9 - V texture wrap mode
                                   
  r10 - 0?

GXInitTexObjCI 
  initializes a compiled texture that uses a palette
                                   
  r3 - ?
                                   
  r4 - Pointer to the texture data
                                   
  r5 - Width
                                   
  r6 - Height
                                   
  r7 - Image format
                                   
  r8 - U texture wrap mode
                                   
  r9 - V texture wrap mode
                                   
  r10 - 0?
                                   

GXInitTlutObj 
  initializes a compiled palette
                                   
  r3 - ?
                                   
  r4 - Pointer to the palette data
                                   
  r5 - Palette format
                                   
  r6 - 0x100?


mDoExt_3DlineMat0_c::update(unsigned short, float, _GXColor &, unsigned short, dKy_tevstr_c *)
                                   
mDoExt_3DlineMatSortPacket::setMat(mDoExt_3DlineMat_c *) 
  these functions are related to drawing line-objects, such as the strings on the stalfos's hat.

fopAcM_setGbaName
        
  r4 - item ID
        
  r5 - gbaName to use if the player does not have the item
        
  r6 - gbaName to use if the player has the item


fopAcIt_Judge(void *(*)(void *, void *), void *) 
  This function searches through all actors that currently exist, and returns a pointer to the first one that matches some criteria, or it returns 0 if no actor does.
        
  r3 - Pointer to a callback function that checks whether a given actor meets the criteria or not.
        
    The callback function should take the following arguments:
        
      r3 - The actor that is currently being checked by fopAcIt_Judge.
        
      r4 - The pointer to some custom data that was passed as argument r4 to fopAcIt_Judge.
        
  r4 - A pointer to some custom data to be used to check if an actor meets the criteria or not.
        
  An example of a function that can be passed as r3 is fpcSch_JudgeByID(void *, void *) - refer to that for an example.

fpcSch_JudgeByID(void *, void *) 
  A callback function that can be passed to fopAcIt_Judge for finding an actor that has a certain unique ID.
        
  r3 - The actor that is currently being checked by fopAcIt_Judge.
        
  r4 - A pointer to the unique ID to check for.
        
  For example you can do this: 
    li      r0,1234            ; Unique ID to find the actor for
        
    stw     r0,32(r1)
        
    lis     r3,0x80040068@ha   ; fpcSch_JudgeByID(void *, void *)
        
    addi    r3,r3,0x80040068@l ; fpcSch_JudgeByID(void *, void *)
        
    addi    r4,r1,32
        
    bl      0x80023FB4         ; fopAcIt_Judge(void *(*)(void *, void *), void *)
        
  The above code will get a pointer to the actor with unique ID 1234, or 0 if said actor doesn't exist.

fopAcM_SearchByID(unsigned int, fopAc_ac_c **) 
  This function checks if an actor with a given unique ID currently exists or not.
                                   
  r3 - The unique ID to check for.
                                   
  r4 - A pointer to where to store the pointer to the actor. 
                                   
  This function returns r3 - a boolean for whether the actor exists or not. 
  This function is similar to calling fopAcIt_Judge with fpcSch_JudgeByID, but there's one major difference: 
  If fopAcIt_Judge can't find the actor, it will just return 0. 
  If fopAcM_SearchByID can't find the actor, it will put 0 at where r4 points to, but if the actor is in the process of being asynchronously created and simply doesn't exist YET, it will still return true, not false. 
  This is very useful when you need to know if the actor hasn't spawned in yet, or if it used to exist but was deleted.

fpcM_IsCreating(unsigned int) 
  This function checks if an actor with a given unique ID is in the process of being asynchronously created, but doesn't exist yet. It returns true if it is being spawned, or false otherwise.
                                   
  r3 - The unique ID to check for.

fpcSch_JudgeForPName(void *, void *) 
  A callback function that can be passed to fopAcIt_Judge for finding an actor that has a actor ID ("process name").
                                   
  r3 - The actor that is currently being checked by fopAcIt_Judge.
                                   
  r4 - A pointer to the actor ID to check for.

fopAcM_SearchByName(short, fopAc_ac_c **) 
  This function checks if an actor with a given actor ID ("process name") currently exists or not.
                                   
  r3 - The actor ID to check for.
                                   
  r4 - A pointer to where to store the pointer to the actor.
                                   
  This function returns r3 - a boolean for whether the actor exists or not.


d_s_play::phase_0 
  This handles loading LkD00.arc or LkD01.arc depending on whether event bit 0x2D01 is set or not (for animation set 1 vs 2).

specialProcPackage 
  handles starting an stb cutscene?

dDemo_manager_c::create(unsigned char const *, cXyz *, float) 
  handles starting an stb cutscene? 
  note: if an actor needed for this stb cutscene isn't present in the room, this function will log a warning and give up, the stb cutscene will not start.

daBoomerang_rockLineCallback       
  something related to boomerang targeting


DynamicModuleControl::__ct(char const *)     
  constructs a REL file?
        
  r3 - ?
        
  r4 - Pointer to a string of the REL's filename (not including the .rel).


daPy_lk_c::checkSetItemTrigger(int, int)
                                   
  Checks if the player just pressed an item button to trigger an item's effect.
        
  r3 - Pointer to the Link entity.
        
  r4 - Item ID to check if it was just triggered. (This can also be values too high to be item IDs, such as 0x107)
        
  r5 - 1?


daPy_lk_c::hideHatAndBackle(J3DMaterial *)
        
  Handles hiding some of Link's meshes based on certain conditions.
                                   
  80106CD4: If bit 0x800 in link_entity+0x2A0,4 is set, it hides the eyes and eyebrow meshes (for when Link is frozen).
                                   
  80106D08: If bit 0x8 in link_entity+0x2A0,4 is set, it hides the hat mesh (for casual clothes).
                                   
  80106D48: If bit 0x8 in link_entity+0x2A0,4 is set, it hides the belt buckle mesh (for casual clothes).

daPy_lk_c::draw(void)
                                   
  Link's draw function.
        
  80107C58: If bit 0x8 in link_entity+0x2A0,4 is set, it draws the casual hair model, katsura (for casual clothes).
        
  80107BAC: If bit 0x800 in bitfield link_entity+0x2A0,4 is set, ??? (for when Link is frozen).

daPy_lk_c::execute(void)
        
  Link's execute function.
                                   
  80122760: Copies the transform of Link's head_jnt bone to the katsura.bdl model.
        
  8012278C: Copies the transform of Link's head_jnt bone to the yamu.bdl model.
                                   
  80121B50: Makes Link drop the enemy weapon he's holding when going through a door.

daPy_lk_c::initModel(J3DModel **, int, unsigned long)
        
  Initializes one of Link's models.
                                   
  r3 - Pointer to the Link entity.
                                   
  r4 - Pointer to where in the Link entity the pointer to this model should be stored.
                                   
  r5 - File index of the model in Link.arc.
                                   
  r6 - 0x37221222 (what is this...?)

daPy_lk_c::setItemModel(void)
                                   
  Handles updating the transformation matrices of Link's item models to follow Link's main model.
                                   
  e.g. 8010660C and 80106628 copy the transformation matrices from cl.bdl's elbow joints to the joints of the pring.bdl model.

daPy_lk_c::setTextureAnime(unsigned short, int)

daPy_lk_c::loadTextureScrollResource(unsigned long, int)
        
  r3 - Pointer to the Link entity.
        
  r4 - File index of the .btk animation to load from LkAnm.arc.
        
  r5 - 0?

daPy_lk_c::entryDLSetLight
        
  sets lighting for one of link's models
                                   
  r3 - Pointer to the Link actor.
                                   
  r4 - Pointer to the model.
                                   
  r5 - ?

daPy_matAnm_c::calc( const(J3DMaterial *))
                                   
  Updates the positioning of Link's pupils. (May handle other textures as well.)
        
  r3 - ?
        
  r4 - ?

CallbackCreateHeap(fopAc_ac_c *) 	d_a_himo2.o 
  loads the grappling hook's resources
                                   
  800F06B0 - first call to load rope.bti from Always.arc
                                   
  800F0774 - second call to load rope.bti from Always.arc
                                   
  800F07B8 - third call to load rope.bti from Always.arc


dBgS_MoveBgActor::MoveBGCreate(char const *, int, void (*)(dBgW *, void *, cBgS_PolyInfo &, bool, cXyz *, csXyz *, csXyz *), unsigned long)
                                   
  Initializes an actor as having solid DZB collision from a DZB file
                                   
  r3 - Pointer to the actor
                                   
  r4 - Pointer to the arc name containing the DZB collision file
                                   
  r5 - File index of the DZB collision file
                                   
  r6 - MoveBG callback function
                                   
  r7 - Maximum amount of memory that may be needed, or 0 for no maximum.


dStage_roomControl_c::getMemoryBlock(int)
                                   
  r3 - Room number?
                                   
  returns a pointer to some MEMA/MECO related heap


fopAcM_setStageLayer(void *)
                                   
  Sets an actor as being considered part of the stage, so that it won't unload when Link changes rooms.
        
  r3 - Pointer to the actor


dStage_roomControl_c::getStatusRoomDt(int)
        
  Returns the zone for a given room number.
        
  r3 - 
        
  r4 - Room number


fpcBs_Create(short, unsigned int, void *)
        
  Begins creating an actor instance.
        
  r3 - Actor ID
        
  r4 - 
        
  r5 - 


mDoMch_Create(void)
        
  Initializes the game's memory heaps.
                                   
  8000C844: Hardcodes the size of the System heap as (total_free_space-0xD20C00). In other words, it effectively hardcodes the combined size of the other 3 below heaps. If you change the size of one of the below, change this one as well.
                                   
    Note: The Zelda heap is part of the System heap.
                                   
  8000C9D0: Hardcodes the size of the Command heap (0x1000).
                                   
  8000C9DC: Hardcodes the size of the Archive heap (0xA51400).
                                   
  8000C9EC: Hardcodes the size of the Game heap (0x2CE800).

dEvt_control_c::moveApproval 
  Checks if an actor should be allowed to execute this frame.
                                   
  r3 - 803C9DE0
                                   
  r4 - The actor
                                   
  Returns:
                                   
    0 - It should definitely not execute
                                   
    1 - It should conditionally execute, depending on: 
      fopAc_ac_c::stopStatus 
      Bit 00000080 of the actor+0x1C4,4 bitfield
                                   
    2 - It should definitely execute

BigLittleChange(unsigned long) 
  Swaps a 32-bit integer's endianness between big and little (reverses the order of the 4 bytes). 
  This is used when communicating with the GBA via the link cable, because the GC is big endian while GBA is little endian. 
  r3 - The integer

dAttention_c::LockonTruth(void)
        
  Returns a boolean for whether the player is currently L-targeting an actor.
        
  r3 - dAttention_c
        

dAttention_c::LockonTarget(long)
        
  Returns a pointer to the actor the player is currently L-targeting, or 0.
        
  r3 - dAttention_c
        
  r4 - 0? Related to dAttention_c.mActionListNum
      

dAttention_c::ActionTarget(long)
        
  Returns a pointer to the actor the player is naturally looking at that they would interact with if they pressed the A button.
        
  (Do not confuse this with the targeted actor, returned by dAttention_c::LockonTarget.)
        
  r3 - dAttention_c
        
  r4 - 0? Related to dAttention_c.mActionListNum

dScnPly_Delete(dScnPly_ply_c *)
  this function is called when leaving a stage to delete it from memory.

dMenu_Item_c::subWindowInit(void)
  on the pause screen / item screen, this function initializes a sub-window, in order to select an item from inside the spoils bag, bait bag, or delivery bag.

dKy_plight_set(LIGHT_INFLUENCE *)
  registers a light source struct that can light up actors.

fopAcM_rollPlayerCrash(fopAc_ac_c *, float, unsigned long)
  Checks if the player has bonked into an actor when doing a forward roll. 
  Other than checking a custom radius, it also checks that the player is less than 200 units above the actor and more than -100 units below it, and that the player's roll direction is within a certain angle range.
                                   
  r3 - Pointer to the actor to check.
                                   
  f1 - This number plus 40.0 is the radius (on the XZ plane) the player must be within from the other actor.
                                   
  r4 - Something that affects the sound effect played? 
    This is argmuent r4 that gets passed to daPy_lk_c::onFrollCrashFlg, which stores it to the Link entity + 0x3620. 
    That variable then gets passed as argument r6 to JAIZelBasic::seStart.

fopAcM_getWaterY(cXyz const *, float *)
                                   
  Checks if an actor is above water, and if so, returns the water's Y position.
        
  r3 - Pointer the the actor's position struct.
                                   
  r4 - Pointer on the stack. If there is water, a float containing the water's Y position will be stored to [r4].
        
  Returns r3 - A boolean for whether there is water below the position.


OSExceptionInit

        Initializes exception handling.

        80301CFC - nop this line out to disable the default exception handler.
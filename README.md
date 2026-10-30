# RGB Pad!
Hello guys, welcome to my README!
I have designed a 16 key macro pad with each key having an individually addressable LED, all according to the standards presented by the HackPad mission on Stardance (atleast hopefully).

## Key Features
* 16 Cherry MX Keys
* 16 Individually Adressable LEDS
* 1 0.91 Inch OLED Display

## Design of PCB
Originally, I aimed to design a pcb with an encoder as well, but as complexity grew in wiring for charlieplexing, I pivoted.

<img width="532" height="401" alt="Screenshot 2026-10-02 234846" src="https://github.com/user-attachments/assets/1355c379-e0d0-4821-a3fa-5ddb65b2e553" />
<img width="323" height="395" alt="Screenshot 2026-10-02 234853" src="https://github.com/user-attachments/assets/15754f3f-7178-4cb2-86b4-91d0dca325c5" />

Instead, I kept the same overall size but switched to a more simple matrix style for my design

## Design of Case
My case design was very simple, it is simply aimed to case my MacroPad, but I also wanted to be able to show off my RGB keys.
Therefore, I made my top case clear, but hopefully I can find someone that has PETG or PLA clear to print this for me.
I used onshape in order to create this as it is what I am most familiar with.

<img width="646" height="389" alt="Screenshot 2026-10-11 164415" src="https://github.com/user-attachments/assets/c5cf7e49-b1c8-42d8-8464-af8ae316138e" />



## Firmware 
For my firmware I used QMK to make this keyboard. It is what the guide recommended and so I followed that.
I added firmware for my LEDs, OLED, and mapped my Keyswitches.

<img width="1188" height="418" alt="image" src="https://github.com/user-attachments/assets/7d125e8c-7908-43ac-943f-80039837b9f7" />


## Overall

I had a lot of fun with this project, it taught me a lot about electronic design and was a major step up from my Blare project. Thank you stardance for this opportunity!

## BOM

BOM is in the CSV labelled as BOM.CSV
Unfortunately it is a bit large and I do not think it is appropriate to have it in the readme due to the size of the links.

## Photos
<img width="335" height="338" alt="Screenshot 2026-10-28 214714" src="https://github.com/user-attachments/assets/562d0012-773d-4fe5-8bba-9cf8a57d025b" />
<img width="398" height="406" alt="image" src="https://github.com/user-attachments/assets/051e1c40-abea-41e4-bd04-b340dcbc53f7" />
<img width="554" height="410" alt="image" src="https://github.com/user-attachments/assets/ec6bb475-cdbe-41a7-a6de-23d66aa84982" />
<img width="576" height="387" alt="image" src="https://github.com/user-attachments/assets/102aa115-3792-4c0e-b9eb-f98b37f015e0" />


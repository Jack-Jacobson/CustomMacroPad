# Custom Macropad
## My first experience with designing PCBs and custom firmware by making a media control macropad. 

This is a 9-key macropad with an ESP32C3 dev module at it's core. It will be able to play, pause, control volume, skip, and have programmable macro keys. 

This project was intended to help me get into the hardware part of creation. I had to learn KiCad, CPP, and more to be able to make it. In the future I also plan on using these skills to make a full keyboard!

--- 

## Visuals
KiCad Circuit Schematic:
![Circuit Schematic](https://i.postimg.cc/brZB7Gmn/Screenshot-2026-07-07-180034.png)

KiCad PCB layout:
![PCB Layout](https://i.postimg.cc/vT4NJ105/Screenshot-2026-07-07-180016.png)

3D Render:
![3D Render](https://i.postimg.cc/j2DFpWMD/Screenshot-2026-07-07-180007.png)

Final Build:
Coming soon!

---

## Bill of Materials 

| Component | Quantity | Cost (w/ Shipping) | Description & Notes | Link |
| :--- | :---: | :---: | :--- | :--- |
| **ESP32-C3-DEVKITM-1-N4X** | 1 | $0.31 | Main computer (Amazon gift card applied to cover most) | [Amazon](https://www.amazon.com/gp/product/B0DHS5D9QR?smid=A33XZ36WFNH796&psc=1) |
| **Greetech Blue 55g clicky switch + Kailh Hot Swap Sockets** | 9 | $6.89 | For the macro board itself; hot-swap sockets used to avoid desoldering | [Mechanical Keyboards](https://mechanicalkeyboards.com/products/greetech-blue-55g-clicky?variant=47599969370412&country=US&currency=USD&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&com_cvv=8fb3d522dc163aeadb66e08cd7450cbbdddc64c6cf2e8891f6d48747c6d56d2c) |
| **PCB** | 5 *(min. order)* | $11.20 | Main custom PCB board base | [JLCPCB](https://jlcpcb.com/) |
| **Keycaps** | 10 *(min. order)* | $31.00 | Keycaps to make the project polished and tactile | [Yuzu Keycaps](https://yuzukeycaps.com/c/7f7ec5b1-1e28-4e48-ae13-4913c57327d8) |
| **Female Single Row Header Strips** | 5 *(min. offered)* | $7.52 | Used to cleanly socket and connect the dev board to the PCB | [eBay](https://www.ebay.com/itm/177501534620?chn=ps&norover=1&mkscid=101&itemid=177501534620&targetid=2450249296795&device=c&mktype=pla&googleloc=1014654&poi&campaignid=21214315381&mkgroupid=188184246123&rlsatarget=pla-2450249296795&abcId=9407526&merchantid=5411207311) |
| --- | --- | --- | --- | --- |
| **TOTALS** | **30 Items** | **$56.92** | *Project baseline hardware cost* | |

## Firmware and Setup

### Dependencies
* ESP32BLECombo by kokodev

### Build Instructions
1. Clone this repository (https://github.com/Jack-Jacobson/CustomMacroPad.git)
2. Open the repo in Arduino IDE or other IDE
3. Select your board (I chose ESP32C3)
4. Compile and flash device
5. You're good to go!
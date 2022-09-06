# MT2503_SDK

The first thing I have to say is that I'm too lazy to write a full readme, so probably I will do that later. Sorry :))

I made a VM (Windows 7 32 bit) to build things like this, download it [here](https://drive.google.com/file/d/1nyuBurcYZKihxe5DJtlW9MMHUiMBNClr/view?usp=sharing) (use at your own risk)

Running `make u` is a great start

Note: you cannot build full things for now, since the submodule `mqtt` in the module `track` and the module `track_nvram` contain undefined structs, and I cannot find them anywhere. The best thing you can do is fully remove the MQTT code from the code base, but that would be hard
Other modules should build, resulting in `.lib` files in `build\GXQ03D_M2M_11C\gprs\MT6261o\lib` with debug info, helpful for using with BinDiff when RE firmwares.

If you have any questions, please open an issue. Thanks!

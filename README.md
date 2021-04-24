# Arduino Rath AS5600

AS5600 12-bits Absolute Magnetic Encoder | AS5600 12 位绝对值编码器

## Usage | 用法

### Wiring | 接线

Connect Rath AS5600 module with Arduino using the wiring diagram below

将 Rath AS5600 模块与 Arduino 按照如下连接：

| Rath AS5600 | Arduino              |
| ----------- | -------------------- |
| GND         | GND                  |
| 3V3         | 3V3                  |
| SCL         | A5 (Analog In Pin 5) |
| SDA         | A4 (Analog In Pin 4) |

![wiring](https://raw.githubusercontent.com/uncertainty-cc/Arduino-Rath-AS5600/main/docs/img/wiring.jpg)

### Programming | 程序

1. Download this repository

打包下载这个 repo

2. Unpack the zip file inside Arduino libraries directory (should be like `..\Sketchbook\libraries\Arduino-Rath-AS5600-main`)

将下载的文件解压到 Arduino 库路径下 (应该是像这样的路径：`..\Sketchbook\libraries\Arduino-Rath-AS5600-main`)

3. Load the library in Arduino program with `#include <AS5600.h>`

在 Arduino 程序中使用 `#include <AS5600.h>` 来加载这个库

4. Examples can be found in `./examples` folder

示例程序位于 `./examples` 文件夹中

## Documentation | 文档

[AS5600 User Manual](https://raw.githubusercontent.com/uncertainty-cc/Arduino-Rath-AS5600/main/docs/AS5600_DS000365_5-00.pdf) | [AS5600 用户手册 (英)](https://raw.githubusercontent.com/uncertainty-cc/Arduino-Rath-AS5600/main/docs/AS5600_DS000365_5-00.pdf)
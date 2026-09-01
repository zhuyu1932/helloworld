# helloworld

ESP32-S3 的第一个 ESP-IDF 工程，每隔 500 ms 输出一次日志。

## VS Code

1. 使用 VS Code 打开本目录。
2. 确认目标芯片为 `esp32s3`。
3. 确认串口为 `/dev/cu.usbmodem5C834298731`。
4. 依次执行“构建、烧录、监视”。

命令行也可以执行：

```sh
. ~/esp/esp-idf/export.sh
idf.py build
idf.py -p /dev/cu.usbmodem5C834298731 flash monitor
```

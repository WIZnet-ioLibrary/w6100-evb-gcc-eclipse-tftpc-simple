# Index
- [TFTP Client Example for W6100-EVB with GCC and Eclipse IDE](#TFTP-Client-Example-for-W6100-EVB-with-GCC-and-Eclipse-IDE)
- [Hardware Environment](#Hardware-Environment)
- [Software Environments](#Software-Environment)
- [Run](#Run)
- [Code review](#Code-review)
  - [Test packet capture file](#Test-packet-capture-file)


------
# TFTP Client Example for W6100-EVB with GCC and Eclipse IDE
Common to Any MCU, Easy to Add-on. Internet Offload co-Processor, HW TCP/IP chip,
best fits for low-end Non-OS devices connecting to Ethernet for the Internet of Things. These will be updated continuously.

## Hardware Environment
* W6100EVB
  - connecting Micro usb.
  - connecting Ethernet cable. <br>
<p align="center">
  <img width="60%" src="https://docs.wiznet.io/assets/images/w6100-evb_callout-d5d88d99555cd8b78d6a8327b849cd58.png" />
</p>

## Software Environment
* Compile Program : ARM GCC Toolchain 2018-q4-major
* Flash Program : FLASHER-STM32 Ver2.8.0 or STM32CubeProgrammer V2.0.0
* Compile method <br>
  - Git-Hub source file download <br>
  - Select File -> Import in Eclipse <br>
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/2120691/56175872-029e3780-6034-11e9-85ca-1517654225fc.PNG" />
  </p>

  - Select "Existing Projects into Workspace" 
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/2120691/56175933-409b5b80-6034-11e9-8dfe-73533017bf7b.PNG" />
  </p>
  - Select WorkSpace path. w6100-evb-gcc-eclipse-loopback\gcc-eclipse-projectfolder\w6100-evb-gcc-eclipse-loopback<br>
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/2120691/56175946-45600f80-6034-11e9-8bce-9094543fbbbf.PNG" />
  </p>

  - Build the Project  <br>
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/2120691/56176411-f2875780-6035-11e9-892b-43a040f3b17b.png" />
  </p>

  - Serial Flash Download<br>
    - Device Program upload, See site below.
      - [How to uploading to firmware ](https://docs.wiznet.io/Product/iEthernet/W6100/getting-started-w6100evb#how-to-upload-firmware)



## Run
* Demo Environment & Program <br>

  - Windows 10 <br>
  - [Hercules](https://www.hw-group.com/software/hercules-setup-utility) <br>
  - [TFTPd64](https://bitbucket.org/phjounin/tftpd64/downloads/Tftpd64-4.64-setup.exe) <br>
* Demo Result <br>
  - Run TFTPd64.exe and prepare test.md on the root directory of it.<br>
   <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/2120691/56182477-65e89380-604d-11e9-8bd6-206a08f57a16.PNG" />
  </p> 
  - And power on W6100EVB and press reset button<br>
  - Then, application get the specified file received and display the content of the file on serial console.<br>

  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/2120691/56182478-68e38400-604d-11e9-9531-9ae233facc24.PNG" />
  </p>


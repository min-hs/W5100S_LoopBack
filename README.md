## Index

- Loopback example for W5100S_ETH_SHIELD
- Hardware Environment
- Software Environment
- run
- Test packet capture file
- code review



### Loopback example for W5100S_ETH_SHIELD

- W5100S with Nucleo f103rb
  - connecting Micro USB to Nucleo f103rb
  - connecting Ethernet Cable to W5100S_ETH_SHIELD
  
  ![W5100S_PIN.jpg](https://github.com/min-hs/Image/blob/main/image/W5100S_PIN.jpg?raw=true)
  
  ![W5100S_PINOUT.jpg](https://github.com/min-hs/Image/blob/main/image/W5100S_PINOUT.jpg?raw=true)

### Software Environment

- Device Setting Program : STM32CubeIDE 1.6.1

- Compile Program : ST-LINK

- compile method

  - Git-hub source file download
  - workspace_1.6.1 -> W5100S_Loopback in folder, run `.project` file
  - workspace path select

  ![IDE_Luncher](C:\Users\Louis\Desktop\WORK\image\IDE_Luncher.jpg)

  - Open main.c file and build 
  - Debug start
  - If you have ST-LINK, Run Debug

![IDE_excute](C:\Users\Louis\Desktop\WORK\image\IDE_excute.jpg)

![IDE_Debug](C:\Users\Louis\Desktop\WORK\image\IDE_Debug.jpg)

### Run



- Demo Environment & Program

  - Window 10
  - Hercules

- Demo Result

  - W5100S <TCP Server> Listen [Port5000]

  ![W5100S_Server](C:\Users\Louis\Desktop\WORK\image\W5100S_Server.jpg)

  - Hercules <TCP Client> connect

  ![W5100S_Client](C:\Users\Louis\Desktop\WORK\image\W5100S_Client.jpg)

### Test packet capture file

![Capture Test](C:\Users\Louis\Desktop\WORK\image\Capture Test.jpg)

### Code review

- main.c code flow

![Loopback_codeflow](C:\Users\Louis\Desktop\WORK\image\Loopback_codeflow.jpg)
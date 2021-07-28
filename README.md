## Index

- [Hardware Environment](#hardwareEnvironment)
- [Software Environment](#softwareEnvironment)
- [Run](#run)
- [Test packet capture file](#testpacketcapturefile)
- [Code review](#codereview)


<a name="hardwareEnvironment"></a>
### Hardware Environment

- W5100S with Nucleo f103rb
  - connecting Micro USB to Nucleo f103rb
  - connecting Ethernet Cable to W5100S_ETH_SHIELD

![W5100S_PIN](https://github.com/min-hs/W5100S_LoopBack/blob/main/image/W5100S_PIN.jpg)

![W5100S_PINOUT](https://github.com/min-hs/W5100S_LoopBack/blob/main/image/W5100S_PINOUT.jpg)

<a name="softwareEnvironment"></a>
### Software Environment

- Device Setting Program : STM32CubeIDE 1.6.1

- Compile Program : ST-LINK

- compile method

  - Git-hub source file download
  - workspace_1.6.1 -> W5100S_Loopback in folder, run `.project` file
  - workspace path select

  ![IDE_Luncher](https://github.com/min-hs/W5100S_LoopBack/blob/main/image/IDE_Luncher.jpg)

  - Open main.c file and build 
  - Debug start
  - If you have ST-LINK, Run Debug

![IDE_excute](https://github.com/min-hs/W5100S_LoopBack/blob/main/image/IDE_excute.jpg)

![IDE_Debug](https://github.com/min-hs/W5100S_LoopBack/blob/main/image/IDE_Debug.jpg)

<a name="run"></a>
### Run

- Demo Environment & Program

  - Window 10
  - Hercules

- Demo Result

  - W5100S <TCP Server> Listen [Port5000]

  ![W5100S_Server](https://github.com/min-hs/W5100S_LoopBack/blob/main/image/W5100S_Server.jpg)

  - Hercules <TCP Client> connect

  ![W5100S_Client](https://github.com/min-hs/W5100S_LoopBack/blob/main/image/W5100S_Client.jpg)

<a name="testpacketcapturefile"></a>
### Test packet capture file

![Capture Test](https://github.com/min-hs/W5100S_LoopBack/blob/main/image/Capture%20Test.jpg)

  
<a name="codereview"></a>
### Code review

- main.c code flow

![Loopback_codeflow](https://github.com/min-hs/W5100S_LoopBack/blob/main/image/Loopback_codeflow.jpg)

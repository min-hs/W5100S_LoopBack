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

![image-20210727111741022](C:\Users\Louis\AppData\Roaming\Typora\typora-user-images\image-20210727111741022.png)

![image-20210727132504482](C:\Users\Louis\AppData\Roaming\Typora\typora-user-images\image-20210727132504482.png)

### Software Environment

- Device Setting Program : STM32CubeIDE 1.6.1

- Compile Program : ST-LINK

- compile method

  - Git-hub source file download
  - workspace_1.6.1 -> W5100S_Loopback in folder, run `.project` file
  - workspace path select

  ![image-20210727113021273](C:\Users\Louis\AppData\Roaming\Typora\typora-user-images\image-20210727113021273.png)

  - Open main.c file and build 
  - Debug start
  - If you have ST-LINK, Run Debug

![image-20210727125135991](C:\Users\Louis\AppData\Roaming\Typora\typora-user-images\image-20210727125135991.png)

![image-20210727125246614](C:\Users\Louis\AppData\Roaming\Typora\typora-user-images\image-20210727125246614.png)

### Run



- Demo Environment & Program

  - Window 10
  - Hercules

- Demo Result

  - W5100S <TCP Server> Listen [Port5000]

  ![image-20210727130519832](C:\Users\Louis\AppData\Roaming\Typora\typora-user-images\image-20210727130519832.png)

  - Hercules <TCP Client> connect

  ![image-20210727130733457](C:\Users\Louis\AppData\Roaming\Typora\typora-user-images\image-20210727130733457.png)

### Test packet capture file

![image-20210727131045741](C:\Users\Louis\AppData\Roaming\Typora\typora-user-images\image-20210727131045741.png)

### Code review

- main.c code flow

![image-20210727132259211](C:\Users\Louis\AppData\Roaming\Typora\typora-user-images\image-20210727132259211.png)
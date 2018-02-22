Multiple Masternodes setup Guide

Step-by-step guide for starting multiple masternodes (3 masternodes in this example)
Requirements
 - Olympic wallet running on your local computer with at least 1500 Olympic coins for every masternode 
 - White static IP with open ports for masternodes!!!

1.Open and Run the Olympic-qt.exe wallet for the first time.  
2.Your firewall and antivirus might pop up to allow connection. Please allow the connections by making appropriate tick marks.
3.In the lower left hand corner of the User Interface, you will see “Synchronizing with network” and other sync messages each time you open your Olympic Wallet. If there is a problem synchronizing, it may say “No Block Source Available” instead. If this happens, just close and re-open the wallet until it synchronizes. 

STEP 1 : Preparing masternodes
1 - Choose the place where you will hold your masternodes dirs (you need 1Gb free space for every masternode)
2 - Create folder "Masternode1" there (example in C: drive)
3 - Copy file "Olympic-qt.exe" in folder "Olympic1"
4 - Create in folder "Masternode1" new folder "data"
Olympic folder is located at C:/users/***Your windows username***/appdata(hidden)/roaming/Olympic
5 - Copy file "blk0001.dat" and folder "txleveldb" from the above folder into the created folder "data" 
6 - Rename "Olympic-qt.exe" to the "Olympic-masternode1.exe" 
7 - Press Win+R and type "cmd" and press Enter
8 - Now type there:
echo start Olympic-masternode1.exe -datadir=./data > %homepath%/Desktop/startmn1.cmd
9 - Move file "startmn1.cmd" from Desktop to the "Masternode1" folder
10 - Repeat the process from step 2 for each masternode you want to created, with changing mn1 to mn2, mn3
11 - Run startmn1.cmd, startmn2.cmd and startmn3.cmd, wait for complete loading wallets and complete syncing with blockchain
12 - Now you can exit from each running masternode wallets

Now you can follow the same steps of single masternode guide
4.Go to Help -> Debug Console.
5.In the Console window enter getaccountaddress 0 and copy the result. This is your MASTERNODE DEPOSIT ADDRESS, where you will deposit the coins to create a masternode. Pay 1500 Olympic exactly into this address. No more, no less.
-·Wait for the 1 confirmation of the transaction.
6.In the Console Debug window enter masternode genkey and copy the result. This is your MASTERNODE PRIVKEY.
7.Open Configuration File in Notepad. This config file is located at C:/users/***Your windows username***/appdata(hidden)/roaming/Olympic  Then paste in the following.

	rpcuser=ANYTHINGHERE
	rpcpassword=ANYTHINGHERE
	listen=1
	allowip=127.0.0.1
	port=25117
	masternode=1
	masternodeaddr=YOUR-IP:25117
	masternodeprivkey=PRIVATEKEYREPLACETHIS

8.Now save and close the config file.
9.Close the wallet by going to File -> Exit.
Open the Olympic Wallet again by running Olympic-qt.exe. This is how you will always start the wallet going forward.
10. Wait for 15 confirmations of the transaction of 1500 coins.
Go to Tools -> Debug Console. Enter "masternode start" in all the wallet's consoles. You will see the response “Masternode started successfully”. Congratulations, your masternode is now running.
All masternodes need to be active for a certain amount of blocks before they are recognized by the network and eligible for rewards.


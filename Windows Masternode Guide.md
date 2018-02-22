MASTERNODE SETUP GUIDE FOR WINDOWS

1.Open and Run the Olympic-qt.exe wallet for the first time.  

2.Your firewall and antivirus might pop up to allow connection. Please allow the connections by making appropriate tick marks.

3.In the lower left hand corner of the User Interface, you will see “Synchronizing with network” and other sync messages each time you open your Olympic Wallet. If there is a problem synchronizing, it may say “No Block Source Available” instead. If this happens, just close and re-open the wallet until it synchronizes. 

4.Go to Help -> Debug Console.

5.In the Console window enter getaccountaddress 0 and copy the result. This is your MASTERNODE DEPOSIT ADDRESS, where you will deposit the coins to create a masternode. You should pay 1500 Olympic exactly into this address. No more, no less.

Now wait for 1 confirmation of the transaction!!!

6.In the Console Debug window enter masternode genkey and copy the result. This is your MASTERNODE PRIVKEY.

7.Open Configuration File in Notepad. This config file is located at C:/users/***Your windows username***/appdata(hidden)/roaming/Olympic 

It should look like following:

	rpcuser=ANYTHINGHERE
	rpcpassword=ANYTHINGHERE
	listen=1
	allowip=127.0.0.1
	port=25117
	masternode=1
	masternodeaddr=YourIP:25117
	masternodeprivkey=PRIVATEKEYREPLACETHIS

8.Now save and close the config file.

9.Close the wallet by going to File -> Exit.
Open the Olympic Wallet again by running Olympic-qt.exe. This is how you will always start the wallet going forward.

10. Wait for 15 confirmations of the transaction of 1500 coins.

Go to Tools -> Debug Console. Enter masternode start. You will see the response “Masternode started successfully”. Congratulations, your masternode is now running.
Now click the Masternodes tab that is now visible. You should see your new masternode appear in the list with the status PRE_ENABLE.
This will change to ENABLED after a small amount of time. All masternodes need to be active for a certain amount of blocks before they are recognized by the network and eligible for rewards.





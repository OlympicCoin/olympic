## 1. Generate private key in the LOCAL DESKTOP wallet

- Open the the Windows destop wallet
- Click Help
- Click Debug Window
- Click Console Tab
- Type <code>masternode genkey</code>
- Then copy the output for the masternodeprivkey=

## 2. Purchase Ubuntu 14.04 VPS

- Save the IP address for the masternodeaddr= in step 5 and 11

## 3. Login as root and type these commands:

	sudo apt-get update
	sudo apt-get install -y build-essential libtool autotools-dev pkg-config
	sudo apt-get install -y libssl-dev libboost-all-dev autoconf automake git
	git clone https://github.com/bitcoin-core/secp256k1
	cd ~/secp256k1
	./autogen.sh
	./configure
	make
	./tests
	
		# Wait a few minutes for tests to finish<br />
	
	sudo make install  # optional
	sudo apt-get install -y libgmp-dev openssl software-properties-common
	sudo add-apt-repository ppa:bitcoin/bitcoin
	sudo apt-get install -y libdb4.8-dev libdb4.8++-dev

## 4. Login as user and type these commands:

	cd ~
	git clone https://github.com/OlympicCoin/olympic
	cd ~/olympic/src
	make -f makefile.unix
	./Olympicd
	
		# Wait 5 seconds or so
	
	./Olympicd stop
	nano ~/.Olympic/Olympic.conf

## 5. Make the Config file look like this:

	rpcuser=yourusername
	rpcpassword=yourpassword
	rpcallowip=127.0.0.1
	daemon=1
	server=1
	listen=1
	masternodeaddr=x.x.x.x:26667
	masternode=1
	masternodeprivkey=privatekey
	
## 6. Save and exit

## 7. Run VPS wallet

	./Olympicd

		# You should see server starting
	
	./Olympicd getinfo
		
		# To check the status of your masternode

- Once the block number is the same that you can see in the help-debug window-information of your synced local wallet, or on the block explorer, it means your vps wallet is synced.

## 8. Create a new Address for the masternode in LOCAL DESKTOP wallet

- Press "Receive" tab
- Press "New Address" button
- Type a name (like "MN1")
- Press OK
- click the new address to highlight it
- click "Copy Address" and save it for Address in step 9 and 11
- You can also repeat this step to create another address for rewards

## 9. Send exactly 1500 coins to LOCAL DESKTOP wallet

- Press "Send" tab
- In "Pay To", enter in the address from step 8
- In "Amount", enter 1500
- Press "Send" and agree to the fee
- You'll need a bit more than 1500 coins in your account to pay the fee

## 10. Get the transaction information in LOCAL DESKTOP wallet

- Press "Transactions" tab
- Hover the mouse over the top line that says "Payment to yourself"
- Wait for 15 confirmations
- Click Help
- Click Debug Window
- Click Console Tab
- Type 
<code>masternode outputs</code>
- Copy the long hash alphanumber for step 11
- Copy the index (normally 0 or 1) for step 11

## 11. Create the Masternode in LOCAL DESKTOP wallet

- Press "Masternodes" tab
- Press Update
- Press Create...
- Fill out the form to look like this:
	+ Alias <code>MN1</code>
	+ Address <code>24.56.235.22:26667</code> (your ip from step 2)
	+ PrivKey (from step 1)
	+ TxHash (the alphanumber from step 10)
	+ Output Index (the 0 or 1 from step 10)
	+ Reward Address (the address from step 8)
	+ Reward % (100)
- Press OK
- Press "Update"
- Click the line that shows the masternode information
- Click Start
- You should see masternode is running!

- Type to check masternode status: 
	<code>~./Olympicd masternode status</code>


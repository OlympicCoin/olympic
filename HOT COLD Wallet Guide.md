1. Purchase Ubuntu 14.04 VPS
2. Login as root and type these commands:

	apt-get upgrade
	apt-get install build-essential libtool autotools-dev pkg-config libssl-dev libboost-all-dev autoconf automake git
	git clone https://github.com/bitcoin-core/secp256k1
	cd ~/secp256k1
	./autogen.sh
	./configure
	make
	./tests
	sudo make install  # optional
	sudo apt-get install libgmp-dev  openssl software-properties-common
	sudo add-apt-repository ppa:bitcoin/bitcoin
	sudo apt-get install libdb4.8-dev libdb4.8++-dev

3. Login as user and type these commands:

	cd ~
	git clone https://github.com/OlympicCoin/olympic
	cd ~/olympic/src
	make -f makefile.unix
	nano ~/.Olympic/Olympic.conf

4. Config file should look like this:

	rpcuser=yourusername
	rpcpassword=yourpassword
	rpcallowip=127.0.0.1
	daemon=1
	server=1
	listen=1
	masternodeaddr=x.x.x.x:25117
	masternode=1
	masternodeprivkey=privatekey

5. Save and exit

6. 	cd ~/olympic/src

7. Run wallet

	./Olympicd

You should see server starting
To check the status of your masternode, 

	./Olympicd getinfo 

Once the block number is the same that you can see in the help-debug window-information of your synced local wallet, or on the block explorer, it means your vps wallet is synced.
Restart your local wallet and then go to masternodes. Press Update.
If you did the procedure to setup your local wallet, you should see your masternode with it's - alias - ID:Port - % - Reward address, so you can start it.

You should see masternode is running!

Type to check masternode status: 
	~./Olympicd masternode status


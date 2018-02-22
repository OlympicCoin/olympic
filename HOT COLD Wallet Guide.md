1. Purchase Ubuntu 14.04 VPS
2. Login as root and type these commands:

	apt-get upgrade<br />
	apt-get install build-essential libtool autotools-dev pkg-config libssl-dev libboost-all-dev autoconf automake git<br />
	git clone https://github.com/bitcoin-core/secp256k1<br />
	cd ~/secp256k1<br />
	./autogen.sh<br />
	./configure<br />
	make<br />
	./tests<br />
	sudo make install  # optional<br />
	sudo apt-get install libgmp-dev  openssl software-properties-common<br />
	sudo add-apt-repository ppa:bitcoin/bitcoin<br />
	sudo apt-get install libdb4.8-dev libdb4.8++-dev<br />

3. Login as user and type these commands:

	cd ~<br />
	git clone https://github.com/OlympicCoin/olympic<br />
	cd ~/olympic/src<br />
	make -f makefile.unix<br />
	nano ~/.Olympic/Olympic.conf<br /><br />

4. Config file should look like this:

	rpcuser=yourusername<br />
	rpcpassword=yourpassword<br />
	rpcallowip=127.0.0.1<br />
	daemon=1<br />
	server=1<br />
	listen=1<br />
	masternodeaddr=x.x.x.x:25117<br />
	masternode=1<br /><br />
	masternodeprivkey=privatekey<br />

5. Save and exit

6. 	cd ~/olympic/src <br />

7. Run wallet

	./Olympicd <br />

You should see server starting
To check the status of your masternode, 

	./Olympicd getinfo

Once the block number is the same that you can see in the help-debug window-information of your synced local wallet, or on the block explorer, it means your vps wallet is synced.
Restart your local wallet and then go to masternodes. Press Update.
If you did the procedure to setup your local wallet, you should see your masternode with it's - alias - ID:Port - % - Reward address, so you can start it.

You should see masternode is running!

Type to check masternode status: 
	~./Olympicd masternode status


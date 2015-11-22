DogecoinDark [DOGED] Source Code
================================

![Electrum-DOGED](http://dogecoindark.net/img/logo-dark@2x.png)

Specification
-------------

* Algorithm: scrypt
* PoW (proof of work)
* Blocktime: ~5 minutes
* RPC port: 20102
* P2P port: 21102
* Blockreward: 
  * Block 0 to 14,000 : 200,000 coins
  * 14,000 to 28,000 : 100,000 coins
  * 28,000 to 42,000: 50,000 coins
  * 42,000 to 210,000: 25,000 coins
  * 210,000 to 378,000: 12,500 coins
  * 378,000 to 546,000: 6,250 coins
  * 546,000 to 714,000: 3,125 coins
  * 714,000 to 2,124,000: 1,560 coins
  * 2,124,000 to 4,248,000: 730 coins

Total Supply
------------

Approximately total reward: 9 Billion (9,000,000,000) during first year then issuing 1 billion (1,000,000,000) each year after.


Compiling Linux Wallet
----------------------

if you have never compiled a wallet in linux before, here are the dependencies you will need:

    sudo apt-get install build-essential pkg-config libtool autotools-dev autoconf automake libssl-dev libboost-all-dev  libminiupnpc-dev libdb++-dev libdb-dev qt4-qmake libqt4-dev libboost-all-dev libssl-dev git

to clone and compile:

    git clone https://github.com/doged/dogedsource && cd dogedsource/src && make -f makefile.unix

then

    ./dogecoindarkd -daemon

(youll get a message telling you to make a DogeCoinDark.conf file)

then make a DogeCoinDark.conf file in the newly created `~/.DogeCoinDark` folder:

cd ~/.DogeCoinDark
sudo nano DogeCoinDark.conf
(then add text below)


(its hidden, so use la instead of ls to see it)

    example DogeCoinDark.conf:
    rpcuser=whateverusername
    rpcpassword=whateverpassword
    rpcport=20102
    port=21102

then go back into the /dogedsource/src folder and `./dogecoindarkd -daemon` again

now just wait for the blockchain to download. you can check status by typing `./dogecoindarkd getinfo` in the dogedsource/src/ directory

Live Chat
---------

come check out our live chat:
[![Visit our IRC Chat!](https://kiwiirc.com/buttons/chat.freenode.net/dogecoindark.png)](https://kiwiirc.com/client/chat.freenode.net/?nick=doged|?&theme=cli#dogecoindark)

DogecoinDark [DOGED] Source Code
Algorithm: scrypt
PoW
Blocktime: 30seconds
RPC port: 20102
P2P port: 21102

Blockreward: 

Block 0 to 14,000 : 200,000 coins

14,000 to 28,000 : 100,000 coins

28,000 to 42,000: 50,000 coins

42,000 to 210,000: 25,000 coins

210,000 to 378,000: 12,500 coins

378,000 to 546,000: 6,250 coins

546,000 to 714,000: 3,125 coins

714,000 to 2,124,000: 1,560 coins

2,124,000 to 4,248,000: 730 coins

Approximately total reward: 13 Billion (13,000,000,000) during first six months then issuing 1 billion every next year.


to clone and compile:
git clone https://github.com/doged/dogedsource
cd dogedsource/src
make -f makefile.unix

if you have never compiled a wallet in linux before, here are the dependencies you will need:

sudo apt-get install build-essential pkg-config

sudo apt-get install libtool autotools-dev autoconf automake

sudo apt-get install libssl-dev

sudo apt-get install libboost-all-dev libdb5.1-dev libdb5.1++-dev

sudo apt-get install libminiupnpc-dev 

apt-get install libdb++-dev

apt-get install qt4-qmake libqt4-dev libboost-dev libboost-system-dev

apt-get install libboost-filesystem-dev libboost-program-options-dev 

apt-get install libboost-thread-dev libssl-dev libminiupnpc8

apt-get install git

git clone https://github.com/doged/dogedsource

cd dogedsource/src

make -f makefile.unix

then ./dogecoindarkd -daemon

(youll get a message telling you to make a conf file)

then make a DogeCoinDark.conf file in the newly created ~/.DogeCoinDark folder

then go back into the /dogedsource/src folder and "./dogecoindarkd -daemon" again


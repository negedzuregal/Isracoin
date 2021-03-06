# Isracoin [ISR] Integration/Staging Tree
http://www.isracoin.org/

![IsraCoin](http://static.tumblr.com/bgodquo/Su9n2vc6h/cf6ac5_b7076162a3ad42df8fa31b56702c0bf5.png_srz_p_280_280_75_22_0.50_1.20_0.png)

## What is Isracoin?
Isracoin is the Israeli Cryptocurrency, based on Litecoin (scrypt).
http://www.isracoin.org/

## Community

Forums: http://www.isracoin.org/#!forum/mainPage

Irc: [#isracoin on freenode](http://webchat.freenode.net/?channels=%23isracoin)

http://www.reddit.com/r/isracoin

https://bitcointalk.org/index.php?topic=529409.0

### Hebrew resources

Hebrew Forums: www.isracoin.org.il/#!forum/mainPage

[Facebook group](https://www.facebook.com/groups/IsraelCoin/221631171369855/)

## Developers

Developers are encouraged to create tools for Isracoin to support the adoption of Isracoin in Israel, and around the world. Such software, e.g. for payments, will help Israeli start using the currency in their daily lives.

Interested in helping out? Please email contact@isracoin.org or open an isue in the [Github Tracker](https://github.com/israelcoin/Isracoin/issues).

## License
Isracoin is released under the terms of the MIT license. See [COPYING](COPYING)
for more information or see http://opensource.org/licenses/MIT.

## Development and contributions
Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

## Frequently Asked Questions

### How much Isracoin can exist?
The maximum quantity of Isracoin is 4.8 billion, with a 10% premine for distribution to Israeli citizens and businesses.
For details about the distribution plan please visit our website.
1 Minute Block Targets and 1 minute DigiShield diff retargeting mechanism.
Current reward per block: 50ISR  (to be halved in 3 years from launch).

### To compile Isracoin:

#### Linux (Debian / Ubuntu):

    sudo apt-get install build-essential \
                         libssl-dev \
                         libdb5.1++-dev \
                         libboost-all-dev \
                         libqrencode-dev \
                         libminiupnpc-dev

    cd src/
    make -f makefile.unix USE_UPNP=1 USE_IPV6=1 USE_QRCODE=1

for more information [See Linux build instructions](doc/build-unix.md)

#### Windows
[See windows build instructions](doc/build-msw.mdd)

#### Mac OS X
[See OS X build instructions](doc/build-osx.md)

### More Information

    RPC: 21947
    P2P: 21948
    Total coins: 4.8 billion
    50 coins per block
    Block every 1 minute
    1 minute DigiShield diff retargeting mechanism
    Coins mature after 260 blocks



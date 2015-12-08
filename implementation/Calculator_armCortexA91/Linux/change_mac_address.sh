#!/bin/sh

echo "++ Changing MAC address to 52:54:00:12:34:56"
ifdown eth0
ifconfig eth0 hw ether 52:54:00:12:34:56
ifup eth0
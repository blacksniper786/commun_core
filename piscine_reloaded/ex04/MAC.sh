#!/bin/bash
ifconfig | grep ether | cut -c 9- | cut -d" " -f2

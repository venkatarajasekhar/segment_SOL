TODO
====

1
---
	free -mt = montrer pas de swap

2
---
	df -h = montrer le virtualFS tmpfs 

3
---
	Pour montrer la version du kernel
	/proc/versions

4
---
	mount -t debugfs nodev /sys/kernel/debug/
	/sys/kernel/debug/trace

5
---
	setenv bootdelay 2
	saveenv

6
---
	#auto eth0
	iface eth0 inet dhcp
	dhclient eth0

7
---
	pour faire une sauvegarde
	dd if=/dev/sdb | gzip > ./debian_V1.gz

======================= RedHat ===================
*** Pacakge Installtion:
dnf install "Tool Name"
Ex: dnf install chrony -y 

*** system Time Configuration:
1. Time and Date Ctl:
Command 'timedatectl' sets timezone and more.
See 'man timedatectl' for all options.
2. NTP Synchronization:

*** Storage:
Disk => Physical Volume => Volume Group => Logical Volume => File System => Mount
1. Disc: Physical Storage Devices (Raw Hardware Space):
/dev/sdb
/dev/sdc
2. Physical Volume: Partitions of a disc (sudo fdisk -c /dev/sdb):
/dev/sdb1
/dev/sdb2

/dev/sdc1
/dev/sdc2

Once a Physical Volumes is created, it has to be Logical Volume Manager ready:
pvcreate /dev/sdb1

3.Volume Group: Storage Pool constists one or more Physical Volumes from the same disc or 
multiple discs
For Example: Storage Group 'myVolumeGroupOne' can be created using /dev/sdb1 and /dev/sdb2.
vgcreate myVolumeGroupOne /dev/sdb1
vgextend myVolumeGroupOne /dev/sdc1

4. Logical Volume(Virtual Partition): Flexible Partition Created from Volume Group 
lvcreate -L 5G -n myLogicalVolumeOne myVolumeGroupOne

*** /dev/myVolumeGroupOne/myLogicalVolumeOne 

5. File System: Logical Volume must be formated and must have filesystem.
mkfs.ext4 /dev/myVolumeGroupOne/myLogicalVolumeOne

6. Mount: Logical Volume must be attached to a directory tree so that I can be accessible
mkdir /data
mount /dev/myVolumeGroupOne/myLogicalVolumeOne /data

*** Web Server










Resources:
https://www.udemy.com/course/red-hat-rhcsa-practical-exams/learn/lecture/45562965#overview

1. Create file "exam". Change permision to rwx for user, r-- for group, and --- for others.
Soln:
touch exam
chmod 740 exam
2. Ensure that the file 'exam' is owned by the user 'root'
Soln:
chown root:root exam
3. Copy /etc/fstab to /var/fstab
Soln:
sudo cp /etc/fstab /var/fstab
A) Change the ownerhsip of /var/fstab to 'root'
Soln:
sudo chown root /var/fstab
B) Change ownership group of /var/fstab to 'root'
Soln:
sudo chown chgrp root /var/fstab
C) Don't allow anyone to execute /var/fstab
Soln:
sudo chmod a-x /var/fstab
** Note: 'a' is for all (user, group, others) and '-x' is for disabling execution
4. Find lines containing the word 'log' in /etc/passwd copy them to ./passwd
Soln:
grep "log" /etc/passwd > ./passwd
5. Delete all files with extension ".c"
Soln:
del *.c
6. Create compressed archieve of /etc named "arc.gz" in the current working directory
Soln:
tar cvfa arc.gz /etc
7. Change the default directory permissions as follows:
rwx for user
r-x for group and other
Soln:
umask 022
8. Find all files with the name "passwd" and copy them into dir called "Dir1" 
Sol:
find / -name passwd 2>/dev/null -exec cp {} ./Dir1 \;
**Note: {} is a placeholder and it get's replaced by the current file when 'cp {} ./Dir1' is executed.
9. Find all "passwd" files and check their size
Soln:
find / -name passwd 2>/dev/null -exec ls -lh {} \;

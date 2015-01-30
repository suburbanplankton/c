
if  [ `uname -r|grep el5|wc -l` = 1 ]
then
#    rpm -ivh $RUNDIR/RPMS/xrdp-0.5.0-0.13.el5.x86_64.rpm
echo "rhel5"
elif [ `uname -r|grep el6|wc -l` = 1 ]
then
#    rpm -ivh $RUNDIR/RPMS/xrdp-0.5.0-0.13.el6.x86_64.rpm
echo "rhel6"
fi



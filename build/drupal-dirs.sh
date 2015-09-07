#!/bin/bash
#Recreate the folder sites/all/modules/custom from the folder modules/custom
if [ -d www/sites/all/modules/custom ]
then
  rm -Rf www/sites/all/modules/custom
fi
cp -Rf modules/custom www/sites/all/modules/custom

#Recreate the folder sites/all/modules/features from the folder modules/features
if [ -d www/sites/all/modules/features ]
then
  rm -Rf www/sites/all/modules/features
fi
cp -Rf modules/features www/sites/all/modules/features

if [ ! -d www/sites/all/themes ]
then
  mkdir www/sites/all/themes
fi
if [ ! -d www/sites/default/themes ]
then
  mkdir www/sites/default/themes
fi
#Recreate the themes custom folder
if [ -d www/sites/all/themes/custom ]
then
  rm -Rf www/sites/all/themes/custom
fi

cp -Rf themes/custom/ www/sites/default/themes/

#Recreate the libraries custom folder
if [ -d www/sites/all/libraries/custom ]
then
  rm -Rf www/sites/all/libraries/custom
fi
if [ ! -d www/sites/all/libraries ]
then
  mkdir www/sites/all/libraries
fi
cp -Rf libraries/custom www/sites/all/libraries/custom

cp settings/settings.php www/sites/default/settings.php

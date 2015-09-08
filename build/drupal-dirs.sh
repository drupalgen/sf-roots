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
cp -Rf modules/feature_modules www/sites/all/modules/features

#Recreate the themes custom folder
if [ -d www/sites/all/themes/custom ]
then
  rm -Rf www/sites/all/themes/custom
fi

cp -Rf themes/custom/ www/sites/all/themes/custom

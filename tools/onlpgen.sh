#!/bin/bash
if [ $# -eq 0 ]
   then
      echo "No arguments supplied"
      exit 1
fi
set -x
VARIABLE=$1
DASH=`echo $1 | tr '_' '-'`
UNDER=`echo $1 | tr '-' '_'`
echo $1
cp -av $ONL/packages/platforms/onlp-stub/x86_64/platform_underscore/onlp .
grep -r -l platform_underscore onlp | xargs sed -i "s/platform_underscore/$UNDER/g"
grep -r -l platform-dash onlp | xargs sed -i "s/platform-dash/$DASH/g"
find ./onlp -type d -name "*platform_underscore*" | xargs rename "s/platform_underscore/$UNDER/g"
find ./onlp -type d -name "*platform-dash*" | xargs rename "s/platform-dash/'$DASH'/g"
find ./onlp -type f -name "*platform_underscore*" | xargs rename "s/platform_underscore/$UNDER/g"
find ./onlp -type f -name "*platform-dash*" | xargs rename "s/platform-dash/'$DASH'/g"

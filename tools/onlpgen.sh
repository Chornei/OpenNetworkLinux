#!/bin/bash
if [ $# -ne 2 ]
   then
      echo "two arguments necessary: ONIE-ID and model"
      exit 1
fi
VARIABLE=$1
DASH=`echo $1 | tr '_' '-'`
UNDER=`echo $1 | tr '-' '_'`
echo "building ONLP stub for platform" $1
cp -a $ONL/packages/platforms/generic/onlp-stub/x86_64/platform_underscore/onlp .
grep -r -l platform_underscore onlp | xargs sed -i "s/platform_underscore/$UNDER/g"
grep -r -l platform-dash onlp | xargs sed -i "s/platform-dash/$DASH/g"
grep -r -l model-name onlp | xargs sed -i "s/model-name/$2/g"
find ./onlp -type d -name "*platform_underscore*" | xargs rename "s/platform_underscore/$UNDER/g"
find ./onlp -type d -name "*platform-dash*" | xargs rename "s/platform-dash/'$DASH'/g"
find ./onlp -type f -name "*platform_underscore*" | xargs rename "s/platform_underscore/$UNDER/g"
find ./onlp -type f -name "*platform-dash*" | xargs rename "s/platform-dash/'$DASH'/g"
echo "The ONLP stub is ready, look for MODIFY in the files to see where to modify values"

#!/bin/bash

sw_list=$( for m in `module avail 2>&1 | grep -v '_modules'`; do echo $m; done | sort | awk 'func d(n){for(x=n;x<=NF-1;x++){y=x+1;$x=$y}NF--};BEGIN{FS=OFS="/"}{d(NF);print}'| uniq )

echo "| Software | Website | Use Guide |" 
echo "|:---------|:--------|:----------|" 

for sw in $sw_list; do module whatis $sw 2>&1 | grep ':' | awk -F ' : ' '{print $NF}'; done | sort | uniq

#! /bin/bash

#:显示(设置)shell变量
set -e

export LC_ALL=zh_CN.GB2312;export LANG=zh_CN.GB2312

isInstalled=false
if [ -d ~/.PodsRepertory ]
then
  isInstalled=true
  echo "Already installed podsrepertory"
  echo "Update podsrepertory..."
  cd ~/.PodsRepertory
  hash git >/dev/null && /usr/bin/env git pull --verbose|| {
	echo "git not installed"
	exit
  }
else
	echo "Cloning podsrepertory..."
	hash git >/dev/null && /usr/bin/env git clone https://github.com/heivin/PodsRepertory.git ~/.PodsRepertory || {
	  echo "git not installed"
	  exit
	}
fi

toPath=~/.cocoapods/repos/master/Specs/
if [ -d "$toPath" ]; then
	echo "${toPath} exists"
else 
	mkdir -p $toPath
	echo "create ${toPath} folder successed!"
fi

if $isInstalled ; then 
	echo "Update podspecs..."
else
	echo "Install podspecs..."
fi

cp -rf ~/.PodsRepertory/Podspecs/* $toPath
ls -l ~/.PodsRepertory/Podspecs | grep '^d' | awk '{ print $9 }'

if $isInstalled ; then 
	echo "Update successfully! please have try 'pod search VExtensions' ~_~！"
else
	echo "Installed successfully! please have try 'pod search VExtensions' ~_~！"
fi


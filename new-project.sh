#!/usr/bin/bash
title=$1
mkdir "$title"
cd "$title"
echo "$title" > README.md

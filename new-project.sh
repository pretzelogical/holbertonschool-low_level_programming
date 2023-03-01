#!/usr/bin/bash
title=$1
mkdir "$title"
cd "$title"
echo -e "$title\n" > README.md

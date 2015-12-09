#!/bin/bash
# To sync up all changes to github once

git status
git add -A
git commit -a -m"Sync"
git push
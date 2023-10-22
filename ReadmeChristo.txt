------------------------ Git commands -----------------------------------

git add .

git commit -m 'message'

git push bitbucket

git status
Shows which is he current branch.
Shows if there is something to commit. 

git log			(quit with q)

git branch			(gives list of branches)

git switch -c new-branch
	shorthand for	git branch new-branch
					git switch new-branch

Note: Before you switch branch make sure you've added and committed the changes to the current branch

git fetch --tags		(git by default doesn't pull tags)

git tag 				(list tags)
			
git checkout tags/4.3.1	(can undo this with git switch - )

When in master branch:
git pull		(pulls latest betaflight code from github)


bluecast.tech/blog/git-switch-branch/

git init

------------------------ Build / Make -----------------------------------

--------------- XL7 with MAMBAF722, STM32F7X7 (S7X2) --------------------

/UAV/Betaflight/betaflight$ make clean TARGET=MAMBAF722

/UAV/Betaflight/betaflight$ make TARGET=MAMBAF722 REVISION="2202-09-14-1301"

Flashed the XL7 FC without a full chip erase. All configuration retained.

---------------- AOS Falcon 7 with MAMBAF405US_I2C, STM32F405 (S405) -----

make clean TARGET=STM32F405

make TARGET=STM32F405 REVISION="2022-09-15-1407"

See which version the code is: src/main/build/version.h

--------------------------------------------------------------------------

~/Dev/betaflight$ git remote -v
origin	https://github.com/undeze/betaflight.git (fetch)
origin	https://github.com/undeze/betaflight.git (push)
upstream	https://github.com/betaflight/betaflight.git (fetch)
upstream	https://github.com/betaflight/betaflight.git (push)

~/Dev/betaflight$ git pull upstream master
From https://github.com/betaflight/betaflight
 * branch                master     -> FETCH_HEAD
Already up to date.

~/Dev/betaflight$ git branch
  Christo.4.4.2
* master

~/Dev/betaflight$ git switch Christo.4.4.2 
Switched to branch 'Christo.4.4.2'
Your branch is up to date with 'origin/Christo.4.4.2'.





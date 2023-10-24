# Git commands.

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

# Build / Make

https://betaflight.com/docs/development/Building-in-Ubuntu

This was required initially, before I could 'make' the first time:
~/Dev/betaflight$ make arm_sdk_install

~/Dev/betaflight$ make clean TARGET=STM32F7X2

Remove the /obj directory, and all its contents.

~/Dev/betaflight$ make TARGET=STM32F7X2 VERSION="2023-10-22-2036"

24-25OCT23

make TARGET=STM32F7X2 EXTRA_FLAGS="-DUSE_GPS"

Flashed this file onto XL7.

Copied and pasted the most recent Betaflight 4.3.1 dump all file into the CLI. Saved.
GPS is working. Motors arm. OSD appears to be correct. Haven't flown yet.

I had tried:
make TARGET=STM32F7X2 EXTRA_FLAGS="-DUSE_GPS" VERSION="2023-10-24-XXXX"
But this failed to build.


# XL7 with MAMBAF722, STM32F7X7 (S7X2)

/UAV/Betaflight/betaflight$ make clean TARGET=MAMBAF722

/UAV/Betaflight/betaflight$ make TARGET=MAMBAF722 REVISION="2202-09-14-1301"

Flashed the XL7 FC without a full chip erase. All configuration retained.

# AOS Falcon 7 with MAMBAF405US_I2C, STM32F405 (S405)

make clean TARGET=STM32F405

make TARGET=STM32F405 REVISION="2022-09-15-1407"

See which version the code is: src/main/build/version.h

# Git setup

~/Dev/betaflight$ git remote -v <br />
origin	https://github.com/undeze/betaflight.git (fetch) <br />
origin	https://github.com/undeze/betaflight.git (push) <br />
upstream	https://github.com/betaflight/betaflight.git (fetch) <br />
upstream	https://github.com/betaflight/betaflight.git (push) <br />

~/Dev/betaflight$ git pull upstream master <br />
From https://github.com/betaflight/betaflight <br />
\* branch                master     -> FETCH_HEAD
Already up to date.

~/Dev/betaflight$ git branch <br />
  Christo.4.4.2 <br />
\* master

~/Dev/betaflight$ git switch Christo.4.4.2 
Switched to branch 'Christo.4.4.2'
Your branch is up to date with 'origin/Christo.4.4.2'.

# Fork

https://docs.github.com/en/get-started/quickstart/fork-a-repo



git bash commonds 
cd ..(change directory)
cd ..
cd ..
cd ..
cd d
mkdir myproject2 (to create new directory)
ls
cd myproject2
git init (Initializing a new, empty repository)
git config --global user.name "shambhaviyadawad" (to add username )
git config --global user.email "shambhaviyadawad@gmail.com" (to add user email)
git confi --global --unset user.name or user.email "correct name or email"(if you have any mistakes in name and email to correct is command is used)
nano program2.c (to create file in folder and to write the content or to edit the content)
{after editing control 's' control 'x'}
git commit -m "this is my first commit" ( to commit )
git add program2.c ( to add the file )
git log (Viewing Commit History)
git show (Viewing Commit Details)
git branch feature_branch ( to create branch)
git checkout feature_branch ( to come in side the branch )
ls
git merge frature_branch ( to merge the branchs )
git status ( to check the status)
git remote add origin ("copy the path from github")
git push origin master ( to push the file to git hub )
git remote remove origin ( to remove the origin file)
git fetch origin (downloads the changes and updates your remote-tracking branches)
git rebase origin master (is used to integrate changes from the master branch of the origin)

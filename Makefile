build: 
	cargo build
	gcc main.c -L ./target/debug/ -ltexcreate -o main
git: 
	git add -A
	git commit -m "Update"
	git push 
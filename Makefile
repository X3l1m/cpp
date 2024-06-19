all:
	@echo "make push"
	@echo "make commit"

push:
	git add .
	git commit -m "update"
	git push

commit:
	git add .
	git commit -m "update"

student:stud_del_all.o stud_mod.o stud_save.o stud_sort.o stud_add.o stud_del.o stud_main.o stud_rev.o stud_show.o
	cc stud_del_all.o stud_mod.o stud_save.o stud_sort.o stud_add.o stud_del.o stud_main.o stud_rev.o stud_show.o -o student

stud_del_all.o : stud_del_all.c
	cc -c stud_del_all.c
stud_mod.o : stud_mod.c
	cc -c stud_mod.c
stud_save.o : stud_save.c
	cc -c stud_save.c
stud_sort.o : stud_sort.c
	cc -c stud_sort.c
stud_add.o : stud_add.c
	cc -c stud_add.c
stud_del.o : stud_del.c
	cc -c stud_del.c
stud_main.o : stud_main.c
	cc -c stud_main.c
stud_rev.o : stud_rev.c
	cc -c stud_rev.c
stud_show.o : stud_show.c
	cc -c stud_show.c

clear:
	@echo "cleaning up....."
	@rm -r *.o

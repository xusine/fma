fma_high:
	verilator -Wno-fatal -cc \
	../rtl/bsg_fma_high.v \
	--top-module bsg_fma_high \
	-Gexp_p=8 -Gsig_p=24 \
	-exe ./test_bsg_fma_high.cpp \
	--trace

	make -C obj_dir -f Vbsg_fma_high.mk


double64:
	verilator -Wno-fatal -cc \
	../rtl/bsg_fma.v \
	--top-module bsg_fma \
	-Gexp_p=11 -Gsig_p=52 \
	-exe ./test_bsg_64.cpp 

	make -C obj_dir -f Vbsg_fma.mk


float32:
	verilator -Wno-fatal -cc \
	../rtl/bsg_fma.v \
	--top-module bsg_fma \
	-exe ./test_bsg_32.cpp 

	make -C obj_dir -f Vbsg_fma.mk

clean:
	rm -rf obj_dir
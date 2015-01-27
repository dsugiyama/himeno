CC = xmpcc
CFLAGS = -O3
LDFLAGS =

ifndef NDX
NDX = 1
endif

ifndef NDY
NDY = 1
endif

all: himenoXMP-XS himenoXMP-S himenoXMP-M himenoXMP-L himenoXMP-XL

himenoXMP-XS:
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ himeno.c -DXSMALL -DNDX=$(NDX) -DNDY=$(NDY)
himenoXMP-S:
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ himeno.c -DSMALL -DNDX=$(NDX) -DNDY=$(NDY)
himenoXMP-M:
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ himeno.c -DMIDDLE -DNDX=$(NDX) -DNDY=$(NDY)
himenoXMP-L:
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ himeno.c -DLARGE -DNDX=$(NDX) -DNDY=$(NDY)
himenoXMP-XL:
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ himeno.c -DXLARGE -DNDX=$(NDX) -DNDY=$(NDY)

clean:
	rm himenoXMP-XS himenoXMP-S himenoXMP-M himenoXMP-L himenoXMP-XL *.o

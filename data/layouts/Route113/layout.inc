Route113_MapBorder:: @ 82A083C
	.incbin "data/layouts/Route113/border.bin"

Route113_MapBlockdata:: @ 82A0844
	.incbin "data/layouts/Route113/map.bin"

	.align 2
Route113_Layout:: @ 82A17E4
	.4byte 0x64
	.4byte 0x14
	.4byte Route113_MapBorder
	.4byte Route113_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Fallarbor

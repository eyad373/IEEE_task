ENTRY(Reset_Handler)

MEMORY{
	FLASH(rx): ORIGIN = 0x08000000, LENGTH = 128k
	SRAM(rwx): ORIGIN = 0x20000000, LENGTH = 20k
}


SECTIONS{
	.text : 
	{
		*(.isr_vector)
		*(.text)
		. = ALIGN(4);
		_etext = .; 
	}>FLASH
	
	.rodata :
	{
		_sro = .;
		*(.rodata)
		. = ALIGN(4);
		_ero = .;
	}>FLASH	
	
	.data :
	{
		_sdata = .;
		*(.data)
		. = ALIGN(4);
		_edata = .;
	}>SRAM AT>FLASH
	
	.bss :
	{
		_sbss = .;
		*(.bss)
		. = ALIGN(4);
		_ebss = .;
	}>SRAM
}	
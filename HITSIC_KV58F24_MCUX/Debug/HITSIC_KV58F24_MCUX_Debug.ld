/*
 * GENERATED FILE - DO NOT EDIT
 * Copyright (c) 2008-2013 Code Red Technologies Ltd,
 * Copyright 2015, 2018-2019 NXP
 * (c) NXP Semiconductors 2013-2020
 * Generated linker script file for MKV58F1M0xxx24
 * Created from linkscript.ldt by FMCreateLinkLibraries
 * Using Freemarker v2.3.23
 * MCUXpresso IDE v11.1.1 [Build 3241] [2020-03-02] on 2020-7-31 12:45:03
 */

INCLUDE "HITSIC_KV58F24_MCUX_Debug_library.ld"
INCLUDE "HITSIC_KV58F24_MCUX_Debug_memory.ld"

ENTRY(ResetISR)

SECTIONS
{
     /* MAIN TEXT SECTION */
    .text : ALIGN(8)
    {
        FILL(0xff)
        __vectors_start__ = ABSOLUTE(.) ;
        KEEP(*(.isr_vector))
        /* Global Section Table */
        . = ALIGN(4) ;
        __section_table_start = .;
        __data_section_table = .;
        LONG(LOADADDR(.data));
        LONG(    ADDR(.data));
        LONG(  SIZEOF(.data));
        LONG(LOADADDR(.data_RAM2));
        LONG(    ADDR(.data_RAM2));
        LONG(  SIZEOF(.data_RAM2));
        LONG(LOADADDR(.data_RAM3));
        LONG(    ADDR(.data_RAM3));
        LONG(  SIZEOF(.data_RAM3));
        LONG(LOADADDR(.data_RAM4));
        LONG(    ADDR(.data_RAM4));
        LONG(  SIZEOF(.data_RAM4));
        __data_section_table_end = .;
        __bss_section_table = .;
        LONG(    ADDR(.bss));
        LONG(  SIZEOF(.bss));
        LONG(    ADDR(.bss_RAM2));
        LONG(  SIZEOF(.bss_RAM2));
        LONG(    ADDR(.bss_RAM3));
        LONG(  SIZEOF(.bss_RAM3));
        LONG(    ADDR(.bss_RAM4));
        LONG(  SIZEOF(.bss_RAM4));
        __bss_section_table_end = .;
        __section_table_end = . ;
        /* End of Global Section Table */

        *(.after_vectors*)

        /* Kinetis Flash Configuration data */
        . = 0x400 ;
        PROVIDE(__FLASH_CONFIG_START__ = .) ;
        KEEP(*(.FlashConfig))
        PROVIDE(__FLASH_CONFIG_END__ = .) ;
        ASSERT(!(__FLASH_CONFIG_START__ == __FLASH_CONFIG_END__), "Linker Flash Config Support Enabled, but no .FlashConfig section provided within application");
        /* End of Kinetis Flash Configuration data */
        
    } > PROGRAM_FLASH

    .text : ALIGN(8)
    {
       *(.text*)
       *(.rodata .rodata.* .constdata .constdata.*)
       . = ALIGN(8);
            /* C++ constructors etc */
            . = ALIGN(8);
            KEEP(*(.init))
            
            . = ALIGN(8);
            __preinit_array_start = .;
            KEEP (*(.preinit_array))
            __preinit_array_end = .;
            
            . = ALIGN(8);
            __init_array_start = .;
            KEEP (*(SORT(.init_array.*)))
            KEEP (*(.init_array))
            __init_array_end = .;
            
            KEEP(*(.fini));
            
            . = ALIGN(8);
            KEEP (*crtbegin.o(.ctors))
            KEEP (*(EXCLUDE_FILE (*crtend.o) .ctors))
            KEEP (*(SORT(.ctors.*)))
            KEEP (*crtend.o(.ctors))
            
            . = ALIGN(8);
            KEEP (*crtbegin.o(.dtors))
            KEEP (*(EXCLUDE_FILE (*crtend.o) .dtors))
            KEEP (*(SORT(.dtors.*)))
            KEEP (*crtend.o(.dtors))
            . = ALIGN(8);
            /* End C++ */
    } > PROGRAM_FLASH
    /*
     * for exception handling/unwind - some Newlib functions (in common
     * with C++ and STDC++) use this.
     */
    .ARM.extab : ALIGN(8)
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > PROGRAM_FLASH

    .ARM.exidx : ALIGN(8)
    {
        __exidx_start = .;
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
        __exidx_end = .;
    } > PROGRAM_FLASH
 
    _etext = .;
        
    /* DATA section for SRAM_OC */

    .data_RAM2 : ALIGN(8)
    {
        FILL(0xff)
        PROVIDE(__start_data_RAM2 = .) ;
        PROVIDE(__start_data_SRAM_OC = .) ;
        *(.ramfunc.$RAM2)
        *(.ramfunc.$SRAM_OC)
        *(.data.$RAM2)
        *(.data.$SRAM_OC)
        *(.data.$RAM2.*)
        *(.data.$SRAM_OC.*)
        . = ALIGN(8) ;
        PROVIDE(__end_data_RAM2 = .) ;
        PROVIDE(__end_data_SRAM_OC = .) ;
     } > SRAM_OC AT>PROGRAM_FLASH

    /* DATA section for SRAM_ITC */

    .data_RAM3 : ALIGN(8)
    {
        FILL(0xff)
        PROVIDE(__start_data_RAM3 = .) ;
        PROVIDE(__start_data_SRAM_ITC = .) ;
        *(.ramfunc.$RAM3)
        *(.ramfunc.$SRAM_ITC)
        *(.data.$RAM3)
        *(.data.$SRAM_ITC)
        *(.data.$RAM3.*)
        *(.data.$SRAM_ITC.*)
        . = ALIGN(8) ;
        PROVIDE(__end_data_RAM3 = .) ;
        PROVIDE(__end_data_SRAM_ITC = .) ;
     } > SRAM_ITC AT>PROGRAM_FLASH

    /* DATA section for FLEX_RAM */

    .data_RAM4 : ALIGN(8)
    {
        FILL(0xff)
        PROVIDE(__start_data_RAM4 = .) ;
        PROVIDE(__start_data_FLEX_RAM = .) ;
        *(.ramfunc.$RAM4)
        *(.ramfunc.$FLEX_RAM)
        *(.data.$RAM4)
        *(.data.$FLEX_RAM)
        *(.data.$RAM4.*)
        *(.data.$FLEX_RAM.*)
        . = ALIGN(8) ;
        PROVIDE(__end_data_RAM4 = .) ;
        PROVIDE(__end_data_FLEX_RAM = .) ;
     } > FLEX_RAM AT>PROGRAM_FLASH

    /* MAIN DATA SECTION */
    .uninit_RESERVED (NOLOAD) : ALIGN(8)
    {
        _start_uninit_RESERVED = .;
        KEEP(*(.bss.$RESERVED*))
       . = ALIGN(8) ;
        _end_uninit_RESERVED = .;
    } > SRAM_DTC AT> SRAM_DTC

    /* Main DATA section (SRAM_DTC) */
    .data : ALIGN(8)
    {
       FILL(0xff)
       _data = . ;
       PROVIDE(__start_data_RAM = .) ;
       PROVIDE(__start_data_SRAM_DTC = .) ;
       *(vtable)
       *(.ramfunc*)
       KEEP(*(CodeQuickAccess))
       KEEP(*(DataQuickAccess))
       *(RamFunction)
       *(.data*)
       . = ALIGN(8) ;
       _edata = . ;
       PROVIDE(__end_data_RAM = .) ;
       PROVIDE(__end_data_SRAM_DTC = .) ;
    } > SRAM_DTC AT>PROGRAM_FLASH

    /* BSS section for SRAM_OC */
    .bss_RAM2 : ALIGN(8)
    {
       PROVIDE(__start_bss_RAM2 = .) ;
       PROVIDE(__start_bss_SRAM_OC = .) ;
       *(.bss.$RAM2)
       *(.bss.$SRAM_OC)
       *(.bss.$RAM2.*)
       *(.bss.$SRAM_OC.*)
       . = ALIGN (. != 0 ? 8 : 1) ; /* avoid empty segment */
       PROVIDE(__end_bss_RAM2 = .) ;
       PROVIDE(__end_bss_SRAM_OC = .) ;
    } > SRAM_OC AT> SRAM_OC

    /* BSS section for SRAM_ITC */
    .bss_RAM3 : ALIGN(8)
    {
       PROVIDE(__start_bss_RAM3 = .) ;
       PROVIDE(__start_bss_SRAM_ITC = .) ;
       *(.bss.$RAM3)
       *(.bss.$SRAM_ITC)
       *(.bss.$RAM3.*)
       *(.bss.$SRAM_ITC.*)
       . = ALIGN (. != 0 ? 8 : 1) ; /* avoid empty segment */
       PROVIDE(__end_bss_RAM3 = .) ;
       PROVIDE(__end_bss_SRAM_ITC = .) ;
    } > SRAM_ITC AT> SRAM_ITC

    /* BSS section for FLEX_RAM */
    .bss_RAM4 : ALIGN(8)
    {
       PROVIDE(__start_bss_RAM4 = .) ;
       PROVIDE(__start_bss_FLEX_RAM = .) ;
       *(.bss.$RAM4)
       *(.bss.$FLEX_RAM)
       *(.bss.$RAM4.*)
       *(.bss.$FLEX_RAM.*)
       . = ALIGN (. != 0 ? 8 : 1) ; /* avoid empty segment */
       PROVIDE(__end_bss_RAM4 = .) ;
       PROVIDE(__end_bss_FLEX_RAM = .) ;
    } > FLEX_RAM AT> FLEX_RAM

    /* MAIN BSS SECTION */
    .bss : ALIGN(8)
    {
        _bss = .;
        PROVIDE(__start_bss_RAM = .) ;
        PROVIDE(__start_bss_SRAM_DTC = .) ;
        *(.bss*)
        *(COMMON)
        . = ALIGN(8) ;
        _ebss = .;
        PROVIDE(__end_bss_RAM = .) ;
        PROVIDE(__end_bss_SRAM_DTC = .) ;
        PROVIDE(end = .);
    } > SRAM_DTC AT> SRAM_DTC

    /* NOINIT section for SRAM_OC */
    .noinit_RAM2 (NOLOAD) : ALIGN(8)
    {
       PROVIDE(__start_noinit_RAM2 = .) ;
       PROVIDE(__start_noinit_SRAM_OC = .) ;
       *(.noinit.$RAM2)
       *(.noinit.$SRAM_OC)
       *(.noinit.$RAM2.*)
       *(.noinit.$SRAM_OC.*)
       . = ALIGN(8) ;
       PROVIDE(__end_noinit_RAM2 = .) ;
       PROVIDE(__end_noinit_SRAM_OC = .) ;
    } > SRAM_OC AT> SRAM_OC

    /* NOINIT section for SRAM_ITC */
    .noinit_RAM3 (NOLOAD) : ALIGN(8)
    {
       PROVIDE(__start_noinit_RAM3 = .) ;
       PROVIDE(__start_noinit_SRAM_ITC = .) ;
       *(.noinit.$RAM3)
       *(.noinit.$SRAM_ITC)
       *(.noinit.$RAM3.*)
       *(.noinit.$SRAM_ITC.*)
       . = ALIGN(8) ;
       PROVIDE(__end_noinit_RAM3 = .) ;
       PROVIDE(__end_noinit_SRAM_ITC = .) ;
    } > SRAM_ITC AT> SRAM_ITC

    /* NOINIT section for FLEX_RAM */
    .noinit_RAM4 (NOLOAD) : ALIGN(8)
    {
       PROVIDE(__start_noinit_RAM4 = .) ;
       PROVIDE(__start_noinit_FLEX_RAM = .) ;
       *(.noinit.$RAM4)
       *(.noinit.$FLEX_RAM)
       *(.noinit.$RAM4.*)
       *(.noinit.$FLEX_RAM.*)
       . = ALIGN(8) ;
       PROVIDE(__end_noinit_RAM4 = .) ;
       PROVIDE(__end_noinit_FLEX_RAM = .) ;
    } > FLEX_RAM AT> FLEX_RAM

    /* DEFAULT NOINIT SECTION */
    .noinit (NOLOAD): ALIGN(8)
    {
        _noinit = .;
        PROVIDE(__start_noinit_RAM = .) ;
        PROVIDE(__start_noinit_SRAM_DTC = .) ;
        *(.noinit*)
         . = ALIGN(8) ;
        _end_noinit = .;
       PROVIDE(__end_noinit_RAM = .) ;
       PROVIDE(__end_noinit_SRAM_DTC = .) ;        
    } > SRAM_DTC AT> SRAM_DTC

    /* Reserve and place Heap within memory map */
    _HeapSize = 0x1000;
    .heap :  ALIGN(8)
    {
        _pvHeapStart = .;
        . += _HeapSize;
        . = ALIGN(8);
        _pvHeapLimit = .;
    } > SRAM_DTC

     _StackSize = 0x1000;
     /* Reserve space in memory for Stack */
    .heap2stackfill  :
    {
        . += _StackSize;
    } > SRAM_DTC
    /* Locate actual Stack in memory map */
    .stack ORIGIN(SRAM_DTC) + LENGTH(SRAM_DTC) - _StackSize - 0:  ALIGN(8)
    {
        _vStackBase = .;
        . = ALIGN(8);
        _vStackTop = . + _StackSize;
    } > SRAM_DTC

    /* Provide basic symbols giving location and size of main text
     * block, including initial values of RW data sections. Note that
     * these will need extending to give a complete picture with
     * complex images (e.g multiple Flash banks).
     */
    _image_start = LOADADDR(.text);
    _image_end = LOADADDR(.data) + SIZEOF(.data);
    _image_size = _image_end - _image_start;
}
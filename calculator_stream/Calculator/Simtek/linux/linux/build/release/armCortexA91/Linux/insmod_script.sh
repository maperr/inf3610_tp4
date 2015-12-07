#!/bin/sh

insmod axi_intc.ko
insmod fifo.ko
insmod xilinx_lkm_dma.ko
insmod xilinx_lkm_cdma.ko
insmod space_dma.ko
insmod space_cdma.ko

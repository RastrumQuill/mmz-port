// sub_0800BFF8 at 0x0800BFF8 (thumb)

undefined4 sub_0800BFF8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] =
         (ushort)*(undefined4 *)(param_1 + 0x5c) | 0x6047;
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    if ((DAT_02022ae4 & 0x10) == 0) {
      DAT_02022668._1_1_ = 0x78;
    }
    else {
      DAT_02022668._1_1_ = 0;
    }
  }
  *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 3;
  *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + 1;
  return in_lr;
}


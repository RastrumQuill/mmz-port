// sub_0800C078 at 0x0800C078 (thumb)

undefined4 sub_0800C078(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] =
         (ushort)*(undefined4 *)(param_1 + 0x5c) | 0x6047;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined4 *)(param_1 + 0x4c) = 0xf0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return in_lr;
}


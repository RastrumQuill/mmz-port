// sub_080192F0 at 0x080192F0 (thumb)

undefined4 sub_080192F0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    (&DAT_02000a04)[uVar1] = (&DAT_02000a04)[uVar1] & 0xfffc | 2;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x618;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


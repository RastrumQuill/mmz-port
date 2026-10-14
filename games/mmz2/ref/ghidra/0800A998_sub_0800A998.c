// sub_0800A998 at 0x0800A998 (thumb)

undefined4 sub_0800A998(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((byte)(&DAT_0831348c)[*(int *)(param_1 + 0x34) >> 4] < 0xc) {
      *(undefined4 *)(param_1 + 0x44) = 0x160;
      *(undefined4 *)(param_1 + 0x48) = 0x100;
      *(undefined4 *)(param_1 + 0x4c) = 0xfffffd30;
      uVar1 = 0xffffff60;
    }
    else if ((byte)(&DAT_0831348c)[*(int *)(param_1 + 0x34) >> 4] < 0x16) {
      *(undefined4 *)(param_1 + 0x44) = 0x160;
      *(undefined4 *)(param_1 + 0x48) = 0x100;
      *(undefined4 *)(param_1 + 0x4c) = 0xfffffa00;
      uVar1 = 0xffffff60;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0x160;
      *(undefined4 *)(param_1 + 0x48) = 0x160;
      *(undefined4 *)(param_1 + 0x4c) = 0xfffff5f0;
      uVar1 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


// sub_0800E1C8 at 0x0800E1C8 (thumb)

undefined4 sub_0800E1C8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x34) < 0x3c0) {
    *(undefined4 *)(param_1 + 0x44) = 0x40;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined4 *)(param_1 + 0x4c) = 0xb4;
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x38) < 0x141) {
    if (*(int *)(param_1 + 0x34) < 0x780) {
      *(undefined4 *)(param_1 + 0x44) = 0x40;
      *(undefined4 *)(param_1 + 0x48) = 0x40;
      *(undefined4 *)(param_1 + 0x4c) = 0x4ec;
      uVar1 = 0x78;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0xc0;
      *(undefined4 *)(param_1 + 0x48) = 0xc0;
      *(undefined4 *)(param_1 + 0x4c) = 0x21c;
      uVar1 = 0x28;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0x40;
    *(undefined4 *)(param_1 + 0x48) = 0x40;
    *(undefined4 *)(param_1 + 0x4c) = 0x4ec;
    uVar1 = 0x168;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return in_lr;
}


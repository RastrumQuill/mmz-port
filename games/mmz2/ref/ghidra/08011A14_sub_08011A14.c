// sub_08011A14 at 0x08011A14 (thumb)

undefined4 sub_08011A14(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    if (*(int *)(param_1 + 0x34) < 0x5a0) {
      *(undefined4 *)(param_1 + 0x4c) = 0x168;
      uVar1 = 400;
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0x4b0;
      uVar1 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


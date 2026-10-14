// sub_08012754 at 0x08012754 (thumb)

undefined4 sub_08012754(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 3;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x34) < 0x870) {
    uVar1 = 0x1a4;
  }
  else {
    uVar1 = 600;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  return in_lr;
}


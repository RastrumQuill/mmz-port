// sub_080E53DC at 0x080E53DC (thumb)

undefined4 sub_080E53DC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(param_1 + 0x13) == *(char *)(*(int *)(param_1 + 0xb4) + 0xb4)) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    if (*(char *)(param_1 + 0x13) == *(char *)(*(int *)(param_1 + 0xb4) + 0xb5)) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}


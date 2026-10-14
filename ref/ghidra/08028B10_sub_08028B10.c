// sub_08028B10 at 0x08028B10 (thumb)

undefined4 sub_08028B10(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0x12) = (&DAT_082ac820)[*(byte *)(*(int *)(param_1 + 0x20) + 0x197)];
  if (*(char *)(param_1 + 0x10) == '\a') {
    bVar1 = *(byte *)(param_1 + 10) >> 4 ^ 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
  }
  *(byte *)(param_1 + 0x13) = bVar1 & 1;
  sub_08028B54(param_1);
  return in_lr;
}


// sub_0803CC98 at 0x0803CC98 (thumb)

undefined4 sub_0803CC98(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0x12) = (&DAT_08338960)[*(byte *)(*(int *)(param_1 + 0x28) + 0x225)];
  if (*(char *)(param_1 + 0x10) == '\x04') {
    bVar1 = *(byte *)(param_1 + 10) >> 4 ^ 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
  }
  *(byte *)(param_1 + 0x13) = bVar1 & 1;
  sub_0803CCDC(param_1);
  return in_lr;
}


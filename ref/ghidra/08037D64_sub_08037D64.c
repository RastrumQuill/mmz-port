// sub_08037D64 at 0x08037D64 (thumb)

undefined4 sub_08037D64(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_08038BAC(param_1);
  if (0 < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 200) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08038A5C(param_1,8);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}


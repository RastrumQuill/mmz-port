// sub_080BE034 at 0x080BE034 (thumb)

undefined4 sub_080BE034(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 7;
  *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 7;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BDB6C(param_1);
  }
  return in_lr;
}


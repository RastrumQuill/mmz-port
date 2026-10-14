// sub_08030330 at 0x08030330 (thumb)

undefined4 sub_08030330(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,7);
  sub_080297C0(param_1);
  *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0xca);
  if (*(char *)(param_1 + 0xca) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x4c) + 0x800;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c) + -0x800;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(undefined4 *)(param_1 + 0x58) = 0x40;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080301B0(param_1);
  return in_lr;
}


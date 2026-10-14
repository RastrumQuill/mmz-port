// sub_08090D7C at 0x08090D7C (thumb)

undefined4 sub_08090D7C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801CD28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x3c00);
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(undefined *)(param_1 + 0x25) = 0xf;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + 0x400;
    iVar2 = -(int)*(short *)(&DAT_0885ce84 + (uint)*(byte *)(param_1 + 0x11) * 2);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + -0x400;
    iVar2 = (int)*(short *)(&DAT_0885ce84 + (uint)*(byte *)(param_1 + 0x11) * 2);
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x2c00;
  *(int *)(param_1 + 0x60) = -(int)*(short *)(&DAT_0885ce8c + (uint)*(byte *)(param_1 + 0x11) * 2);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885cce0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8091e29;
  *(undefined *)(param_1 + 0xbe) = 2;
  *(undefined *)(param_1 + 0xbd) = 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc1) = 0;
  return in_lr;
}


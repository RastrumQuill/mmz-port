// sub_080F5C48 at 0x080F5C48 (thumb)

undefined4 sub_080F5C48(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CD28(param_1);
  *(int *)(param_1 + 0x40) = param_1 + 0x5c;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08866c78,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08866c90;
  *(undefined2 *)(param_1 + 0x26) = 0x2001;
  uVar3 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08866c98 + (uint)(*(byte *)(param_1 + 0x11) >> 1) * 2));
  iVar2 = DAT_0202cabc + 0x800;
  *(int *)(param_1 + 0x58) = iVar2;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0x60) = iVar2;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return in_lr;
}


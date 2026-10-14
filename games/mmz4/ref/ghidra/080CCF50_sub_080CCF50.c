// sub_080CCF50 at 0x080CCF50 (thumb)

undefined4 sub_080CCF50(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  sub_08002B10(0x191);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x54);
  iVar2 = uVar3 * 2 + -1;
  *(int *)(param_1 + 100) = iVar2;
  *(int *)(param_1 + 0x5c) = iVar2 * 0x480;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_0801CC9C(param_1);
  sub_0801D3D0(param_1,6);
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar3 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar3 & 1) << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0886340c,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080CD008(param_1);
  return in_lr;
}


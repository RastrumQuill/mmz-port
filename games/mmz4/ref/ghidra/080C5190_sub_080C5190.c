// sub_080C5190 at 0x080C5190 (thumb)

undefined4 sub_080C5190(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  byte abStack_18 [4];
  
  sub_08128B5C(abStack_18,&DAT_08129a6c,2);
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar4 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x1f;
  }
  *(int *)(param_1 + 0x68) = -(iVar3 >> 5);
  sub_0801CC9C(param_1);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0886236c + (uint)abStack_18[bVar1] * 0x18,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080C52F0(param_1);
  return in_lr;
}


// sub_080F65CC at 0x080F65CC (thumb)

undefined4 sub_080F65CC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5e00);
  bVar4 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar4) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(bool *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar3 = param_1 + 0x54;
  sub_08005760(param_1 + 0x74,&DAT_08866d04,iVar3,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar2 = sub_0801FB14(&DAT_0202e9f8,iVar3);
  if (uVar2 < 0x5400) {
    sub_0801FE64(1,iVar3);
    sub_08002B10(0x17e);
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080F66AC(param_1);
  return in_lr;
}


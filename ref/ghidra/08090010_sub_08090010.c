// sub_08090010 at 0x08090010 (thumb)

undefined4 sub_08090010(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEB4(param_1,iVar3);
  sub_080033F0(param_1 + 0x6c,10);
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
  iVar2 = *(int *)(iVar3 + 0x54) * 0xa0;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar2 >> 8;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  *(bool *)(param_1 + 0x13) = *(char *)(iVar3 + 0xf) == '\x01';
  *(undefined *)(param_1 + 0x12) = 0x16;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808FFA0(param_1);
  return in_lr;
}


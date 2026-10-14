// sub_0809988C at 0x0809988C (thumb)

undefined4 sub_0809988C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  iVar3 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
  if (*(char *)(iVar3 + 9) != '\x02') {
    iVar3 = *(int *)(iVar3 + 0x24);
  }
  sub_0800DEB4(param_1,iVar3);
  *(byte *)(param_1 + 0x41) =
       *(byte *)(param_1 + 0x41) & 0xf3 | (byte)((*(byte *)(param_1 + 0x13) & 3) << 2);
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  *(char *)(param_1 + 0x44) = (char)uVar2;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  *(char *)(param_1 + 0x45) = (char)uVar2;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_080033F0(param_1 + 0x6c,3);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5004 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080999FC(param_1);
  return in_lr;
}


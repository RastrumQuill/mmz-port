// sub_080B3C48 at 0x080B3C48 (thumb)

undefined4 sub_080B3C48(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1a0e);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    iVar2 = sub_080EF330(uVar1 * 2 >> 0x11,0x180);
    iVar2 = iVar2 + 0x80;
  }
  else {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    iVar2 = sub_080EF330(uVar1 * 2 >> 0x11,0x180);
    iVar2 = -(iVar2 + 0x80);
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = -((uVar1 * 2 >> 0x11 & 0xff) + 0x100);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B3B44(param_1);
  return in_lr;
}


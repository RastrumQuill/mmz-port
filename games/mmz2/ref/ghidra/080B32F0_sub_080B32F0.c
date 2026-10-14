// sub_080B32F0 at 0x080B32F0 (thumb)

undefined4 sub_080B32F0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1706);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    uVar6 = uVar1 & 0x7fffffff;
    DAT_0202e188 = uVar6;
    uVar3 = sub_080EF330(uVar1 * 2 >> 0x11,0x34);
    uVar1 = uVar6 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    iVar2 = sub_080EF330(uVar1 * 2 >> 0x11,0x33);
    uVar1 = 0xff - iVar2;
    iVar2 = *(int *)(param_1 + 0x54);
    iVar5 = -0x1f00;
  }
  else {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    uVar6 = uVar1 & 0x7fffffff;
    DAT_0202e188 = uVar6;
    iVar2 = sub_080EF330(uVar1 * 2 >> 0x11,0x34);
    uVar3 = iVar2 + 0x80;
    uVar1 = uVar6 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    iVar2 = sub_080EF330(uVar1 * 2 >> 0x11,0x34);
    uVar1 = 0x80 - iVar2;
    iVar2 = *(int *)(param_1 + 0x54);
    iVar5 = 0x1f00;
  }
  *(int *)(param_1 + 0x78) = iVar2 + iVar5;
  *(int *)(param_1 + 0x74) = iVar2 + iVar5;
  *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[(uVar3 & 0xff) + 0x40 & 0xff] << 1;
  *(int *)(param_1 + 100) = (int)(short)(&DAT_080ef450)[uVar3 & 0xff] << 1;
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[(uVar1 & 0xff) + 0x40 & 0xff] << 1;
  *(int *)(param_1 + 0x68) = (int)(short)(&DAT_080ef450)[uVar1 & 0xff] << 1;
  piVar4 = (int *)(param_1 + 0x80);
  iVar2 = *(int *)(param_1 + 0x58) + -0x1300;
  *piVar4 = iVar2;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x5c) * -0x14;
  *(int *)(param_1 + 0x7c) = iVar2 + *(int *)(param_1 + 100) * -0x14;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x60) * -0x14;
  *piVar4 = *piVar4 + *(int *)(param_1 + 0x68) * -0x14;
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B3288(param_1);
  return in_lr;
}


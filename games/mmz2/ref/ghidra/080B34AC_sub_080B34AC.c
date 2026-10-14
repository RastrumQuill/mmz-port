// sub_080B34AC at 0x080B34AC (thumb)

undefined4 sub_080B34AC(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
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
    uVar4 = uVar1 * 2 >> 0x11 & 0x1f | 0x80;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    uVar3 = 0x80 - (uVar1 * 2 >> 0x11 & 0x1f);
  }
  else {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    uVar4 = uVar1 * 2 >> 0x11 & 0x1f;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    uVar3 = 0xff - (uVar1 * 2 >> 0x11 & 0x1f);
  }
  DAT_0202e188 = uVar1 & 0x7fffffff;
  iVar2 = (int)(short)(&DAT_080ef450)[uVar4 + 0x40 & 0xff];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 2;
  iVar2 = (int)(short)(&DAT_080ef450)[uVar4];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(int *)(param_1 + 100) = iVar2 >> 2;
  iVar2 = (int)(short)(&DAT_080ef450)[(uVar3 & 0xff) + 0x40 & 0xff];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 2;
  iVar2 = (int)(short)(&DAT_080ef450)[uVar3 & 0xff];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(int *)(param_1 + 0x68) = iVar2 >> 2;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x7c) = *(int *)(param_1 + 0x58) + (uVar1 * 2 >> 0x11 & 0xfff);
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x80) = *(int *)(param_1 + 0x58) - (uVar1 * 2 >> 0x11 & 0xfff);
  *(undefined *)(param_1 + 0x12) = 0x18;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B3288(param_1);
  return in_lr;
}


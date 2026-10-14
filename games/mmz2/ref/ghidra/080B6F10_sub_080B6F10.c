// sub_080B6F10 at 0x080B6F10 (thumb)

undefined4 sub_080B6F10(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar5 = bVar1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08012580(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  sub_080127E4(param_1,0x5f0d);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x12) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar5 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) =
         ((uVar5 * 0x80 >> 0x17) + 0x80) * ((uint)*(byte *)(param_1 + 0x11) * 2 + -1);
    uVar3 = 0xffffff00;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080b7072;
      uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
      iVar4 = (uVar5 * 0x80 >> 0x17) + 0x80;
      iVar2 = (uint)*(byte *)(param_1 + 0x11) * -2 + 1;
    }
    else {
      if (bVar1 == 2) {
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        *(uint *)(param_1 + 0x5c) =
             ((uVar5 * 0x80 >> 0x17) + 0x200) * ((uint)*(byte *)(param_1 + 0x11) * -2 + 1);
        uVar3 = 0xfffffc00;
        goto LAB_080b7070;
      }
      if (bVar1 != 3) goto LAB_080b7072;
      uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
      iVar4 = (uVar5 * 0x80 >> 0x17) + 0x200;
      iVar2 = (uint)*(byte *)(param_1 + 0x11) * 2 + -1;
    }
    DAT_0202e188 = uVar5 & 0x7fffffff;
    *(int *)(param_1 + 0x5c) = iVar4 * iVar2;
    uVar3 = 0xfffffe00;
  }
LAB_080b7070:
  *(undefined4 *)(param_1 + 0x60) = uVar3;
LAB_080b7072:
  sub_080B7090(param_1);
  return in_lr;
}


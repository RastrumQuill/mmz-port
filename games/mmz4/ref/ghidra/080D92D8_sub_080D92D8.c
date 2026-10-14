// sub_080D92D8 at 0x080D92D8 (thumb)

undefined4 sub_080D92D8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  bVar1 = *(byte *)(param_1 + 0x11) >> 4;
  if (bVar1 == 1) {
    sub_0801CF00(param_1,(byte)(&DAT_08864d61)[(uVar3 & 4) * 3] + 0x8109);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = -(uVar3 * 2 >> 0x11 & 0x7f);
    uVar2 = 0xfffffb80;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080d9424;
    sub_0801CF00(param_1,(byte)(&DAT_08864d60)[(uVar3 & 4) * 3] + 0x8109);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (uVar3 * 2 >> 0x11 & 0x7f) + 0x180;
    uVar2 = 0xfffffc80;
  }
  else {
    if (bVar1 != 2) goto LAB_080d9424;
    sub_0801CF00(param_1,(byte)(&DAT_08864d62)[(uVar3 & 4) * 3] + 0x8109);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (uVar3 * 2 >> 0x11 & 0x7f) + 0x80;
    uVar2 = 0xfffffc00;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar2;
LAB_080d9424:
  sub_0801CFF0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  *(byte *)(param_1 + 0x12) = '@' - (*(byte *)(param_1 + 0x11) >> 4);
  sub_080D90BC(param_1);
  return in_lr;
}


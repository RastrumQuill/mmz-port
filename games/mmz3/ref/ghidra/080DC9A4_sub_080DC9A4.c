// sub_080DC9A4 at 0x080DC9A4 (thumb)

undefined4 sub_080DC9A4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xda02);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0x25) = 0x1e;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = DAT_020302c0 + 0x87ff;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    iVar3 = -0x80 - (uVar2 * 2 >> 0x11 & 0x7f);
  }
  else {
    *(int *)(param_1 + 0x54) = DAT_020302c0 + -0x8800;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    iVar3 = (uVar2 * 2 >> 0x11 & 0x7f) + 0x80;
  }
  DAT_0202f608 = uVar2 & 0x7fffffff;
  *(int *)(param_1 + 0x5c) = iVar3;
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (0x20 - (uVar2 * 2 >> 0x11 & 0x3f)) * 0x100
  ;
  sub_080DC798(param_1);
  return in_lr;
}


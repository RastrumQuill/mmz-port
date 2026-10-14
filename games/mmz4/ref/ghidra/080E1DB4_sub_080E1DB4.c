// sub_080E1DB4 at 0x080E1DB4 (thumb)

undefined4 sub_080E1DB4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) != '\x03') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088655c0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  sub_0801CF00(param_1,*(byte *)(param_1 + 0x11) + 0x8a0a);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(&DAT_088655cc + (uint)*(byte *)(param_1 + 0x11) * 8);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(&DAT_088655d0 + (uint)*(byte *)(param_1 + 0x11) * 8);
  *(int *)(param_1 + 0x58) = iVar3;
  *(undefined4 *)(param_1 + 0x5c) =
       *(undefined4 *)(&DAT_088655f4 + (uint)*(byte *)(param_1 + 0x11) * 8);
  *(undefined4 *)(param_1 + 0x60) =
       *(undefined4 *)(&DAT_088655f8 + (uint)*(byte *)(param_1 + 0x11) * 8);
  if (DAT_0202cabc < iVar3 + -0x1000) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = 0x40;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  if (*(byte *)(param_1 + 0x11) < 3) {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x80 + (uVar2 * 2 >> 0x11 & 0xff);
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar2 * 2 >> 0x11) & 0x1f) + 0x1e;
  *(undefined *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080E1EEC(param_1);
  return in_lr;
}


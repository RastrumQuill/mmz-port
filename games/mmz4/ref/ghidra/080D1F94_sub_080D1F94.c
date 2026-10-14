// sub_080D1F94 at 0x080D1F94 (thumb)

undefined4 sub_080D1F94(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar4 = -0xf00;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar4 = 0xf00;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar4;
  uVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((uVar2 & 0xf) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1200;
    uVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
    if ((uVar2 & 0xf) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
  }
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar2 * 2 >> 0x11) & 7) + 0x3c;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 3) - 2) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (uVar2 * 2 >> 0x11 & 0x3f) + 0xc0;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xd);
  uVar3 = DAT_0202cabc;
  if ((DAT_02000c80 & 0x7f) == 2) {
    uVar3 = sub_08007B84(param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D19DC(param_1);
  return in_lr;
}


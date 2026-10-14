// sub_080D66DC at 0x080D66DC (thumb)

undefined4 sub_080D66DC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08864a24 + (uint)*(byte *)(param_1 + 0x11) * 2));
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar4 = (4 - (uint)*(byte *)(param_1 + 0x11)) * 0x100 + (uVar3 * 2 >> 0x11 & 0x7f);
  *(int *)(param_1 + 0x5c) = iVar4;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) =
       -((*(byte *)(param_1 + 0x11) + 2) * 0x100 + (uVar3 * 2 >> 0x11 & 0x7f));
  if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(iVar2 + 0x54)) {
    *(int *)(param_1 + 0x5c) = -iVar4;
  }
  *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D6508(param_1);
  return in_lr;
}


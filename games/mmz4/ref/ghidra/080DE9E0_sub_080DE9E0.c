// sub_080DE9E0 at 0x080DE9E0 (thumb)

undefined4 sub_080DE9E0(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar4 & 0x7fffffff;
  sVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,6);
  sub_0801CF00(param_1,sVar3 + 0x6c0c);
  uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar6 = (8 - (uVar4 * 2 >> 0x11 & 0xf)) * 0x100;
  *(int *)(param_1 + 100) = iVar6;
  uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar4 & 0x7fffffff;
  *(uint *)(param_1 + 0x68) = (8 - (uVar4 * 2 >> 0x11 & 0xf)) * 0x100;
  iVar2 = DAT_0202dbf0;
  *(int *)(param_1 + 0x54) = *(int *)(DAT_0202dbf0 + 0x54) + iVar6;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  uVar5 = sub_08008534();
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_0802B698(iVar1,8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DE8EC(param_1);
  return in_lr;
}


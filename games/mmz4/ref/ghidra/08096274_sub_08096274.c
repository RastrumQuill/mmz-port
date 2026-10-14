// sub_08096274 at 0x08096274 (thumb)

undefined4 sub_08096274(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined auStack_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  
  sub_08128B5C(auStack_30,&DAT_08129540,4);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  uVar1 = (uVar1 * 2 >> 0x11 & 3) + 0x10;
  if (uVar1 != 0) {
    local_24 = (uVar4 * 2 + -1) * -0x400;
    do {
      iVar5 = *(int *)(param_1 + 0x54) + local_24;
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar6 = uVar2 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar3 = sub_08128A9C(uVar2 * 2 >> 0x11,0x38);
      local_2c = iVar5 + (iVar3 + -0x1c) * 0x100;
      uVar2 = uVar6 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      local_28 = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0x3f) * 0x100 + -0x3f00;
      sub_080DFFC8(&local_2c,auStack_30[uVar1 & 3],uVar4);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}


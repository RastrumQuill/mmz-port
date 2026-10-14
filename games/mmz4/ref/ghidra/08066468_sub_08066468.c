// sub_08066468 at 0x08066468 (thumb)

undefined4 sub_08066468(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  int local_3c [6];
  int *local_24;
  
  local_24 = param_1;
  local_3c[0] = 0x1000;
  local_3c[1] = 0x2000;
  local_3c[2] = 0x3000;
  local_3c[3] = 4;
  local_3c[4] = 8;
  local_3c[5] = 0xc;
  iVar1 = *(int *)((int)local_3c + ((uint)(param_2 << 0x18) >> 0x16));
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  iVar3 = *(int *)((int)local_3c + ((uint)(param_3 << 0x18) >> 0x16) + 0xc) -
          (uVar2 * 2 >> 0x11 & 1);
  if (0 < iVar3) {
    do {
      iVar7 = *local_24;
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar8 = uVar2 & 0x7fffffff;
      DAT_0202dc38 = uVar8;
      iVar4 = sub_08128A9C(uVar2 * 2 >> 0x11,iVar1);
      iVar6 = local_24[1];
      uVar2 = uVar8 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      iVar5 = sub_08128A9C(uVar2 * 2 >> 0x11,iVar1);
      sub_080D0C00(iVar7 + -iVar1 / 2 + iVar4,iVar6 + -iVar1 / 2 + iVar5,0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return in_lr;
}


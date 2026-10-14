// sub_0806ACAC at 0x0806ACAC (thumb)

undefined4 sub_0806ACAC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined auStack_34 [4];
  byte abStack_30 [4];
  int local_2c [2];
  byte local_24;
  
  sub_08128B5C(auStack_34,&DAT_081291f6,4);
  sub_08128B5C(abStack_30,&DAT_081291fe,4);
  bVar1 = *(byte *)(param_1 + 0xc4);
  local_24 = 3;
  uVar3 = (uint)(bVar1 >> 6);
  local_2c[0] = *(int *)(param_1 + 0x54);
  local_2c[1] = *(undefined4 *)(param_1 + 0x58);
  pbVar4 = abStack_30 + uVar3;
  iVar6 = (uint)*pbVar4 * 2 + -1;
  iVar5 = local_2c[uVar3 & 1] + iVar6 * 0x2c00;
  iVar2 = sub_0806A748(param_1,auStack_34[uVar3]);
  if ((int)(((iVar5 - iVar6) - iVar2) * ((uint)*pbVar4 * 2 + -1)) < 0) {
    uVar3 = (bVar1 + 0x80) * 0x1000000 >> 0x1e & (uint)local_24;
    pbVar4 = abStack_30 + uVar3;
    iVar6 = (uint)*pbVar4 * 2 + -1;
    iVar5 = local_2c[uVar3 & 1] + iVar6 * 0x2c00;
    iVar2 = sub_0806A748(param_1,auStack_34[uVar3]);
    if ((int)(((iVar5 - iVar6) - iVar2) * ((uint)*pbVar4 * 2 + -1)) < 0) {
      sub_08005784(param_1 + 0x74,&DAT_08858148);
      return in_lr;
    }
    iVar2 = FUN_081288bc((0x1400 - -iVar6 * (iVar2 - iVar5)) * 0xe);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    iVar2 = iVar2 + 0xc;
  }
  else {
    iVar2 = FUN_081288bc(-iVar6 * (iVar2 - iVar5) * 0xc,0x1400);
    if (0xc < iVar2) {
      iVar2 = 0xc;
    }
  }
  sub_08005784(param_1 + 0x74,&DAT_088581a8 + iVar2 * 0x60);
  return in_lr;
}


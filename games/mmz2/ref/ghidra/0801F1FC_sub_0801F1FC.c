// sub_0801F1FC at 0x0801F1FC (thumb)

undefined8 sub_0801F1FC(int *param_1,ushort **param_2,ushort *param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  ushort **ppuVar8;
  int iVar9;
  undefined4 in_lr;
  ushort *local_28 [2];
  undefined4 uStack_4;
  
  ppuVar8 = param_2 + 0x26;
  bVar5 = *(byte *)ppuVar8;
  *(byte *)ppuVar8 = bVar5 & 0xcc;
  local_28[0] = param_2[0x22];
  local_28[1] = param_2[0x24];
  uStack_4 = in_lr;
  if ((int)param_2[0x24] < (int)param_2[0x22]) {
    uVar1 = 0;
  }
  else {
    if (param_3 == (ushort *)0x0) {
      param_3 = *param_2;
    }
    iVar9 = -1;
    if (param_4 != 0) {
      iVar9 = 1;
    }
    piVar6 = (int *)((int)local_28 + ((int)(-param_4 | param_4) >> 0x1f & 4U));
    *piVar6 = *piVar6 - (uint)*param_3 * iVar9;
    iVar2 = 0;
    if (param_4 == 0) {
      iVar2 = 4;
    }
    iVar7 = 0;
    if (param_4 == 0) {
      iVar7 = 4;
    }
    *(uint *)((int)local_28 + iVar2) = *(int *)((int)local_28 + iVar7) + (uint)param_3[1] * iVar9;
    uVar3 = (int)local_28[1] - (int)local_28[0];
    uVar1 = *param_1 - (int)local_28[0];
    iVar2 = *param_1;
    if (uVar3 < uVar1) {
      if ((int)uVar3 < (int)uVar1) {
        uVar1 = uVar1 - uVar3;
        bVar4 = 0x20;
      }
      else {
        bVar4 = 0x10;
      }
      *(byte *)ppuVar8 = bVar5 & 0xcc | bVar4;
      if ((int)(uVar1 * iVar9) < 1) {
        bVar5 = *(byte *)(param_2 + 0x26);
        bVar4 = 2;
      }
      else {
        bVar5 = *(byte *)(param_2 + 0x26);
        bVar4 = 1;
      }
      *(byte *)(param_2 + 0x26) = bVar4 | bVar5;
      if (param_5 != 0) {
        *param_1 = iVar2 - uVar1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return CONCAT44(uStack_4,uVar1);
}


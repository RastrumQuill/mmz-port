// sub_080314C4 at 0x080314C4 (thumb)

undefined4 sub_080314C4(byte *param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined4 in_lr;
  uint local_40 [6];
  uint *local_28;
  int local_24;
  undefined4 uStack_4;
  
  puVar8 = local_40;
  uStack_4 = in_lr;
  if ((((int)(uint)*param_1 >> (param_3 & 0xff) & 1U) != 0) && (param_3 != 0)) {
    local_40[4] = (uint)param_1[2];
    local_40[5] = (uint)param_1[3];
    puVar1 = local_40 + 4;
    *param_1 = *param_1 & ~(byte)(1 << (param_3 & 0xff));
    sub_080313C0(param_1,param_2,param_3);
    if (local_40[4] == param_3) {
      local_40[4] = 0xffffffff;
    }
    if (local_40[5] == param_3) {
      local_40[5] = 0xffffffff;
    }
    if ((int)puVar1[param_1[4]] < 0) {
      param_1[4] = 0;
    }
    if (param_3 == 1) {
      *param_1 = *param_1 & 0xf3;
      sub_080313D8(param_1,param_2);
      sub_08031418(param_1,param_2);
      sub_08031438(param_1,param_2);
      if (local_40[4] - 2 < 2) {
        local_40[4] = 0xffffffff;
      }
      if (local_40[5] - 2 < 2) {
        local_40[5] = 0xffffffff;
      }
    }
    iVar9 = 4;
    puVar3 = local_40 + 4;
    do {
      puVar3 = puVar3 + -1;
      iVar9 = iVar9 + -1;
      *puVar3 = 0xffffffff;
    } while (iVar9 != 0);
    uVar7 = 0;
    iVar9 = 0;
    do {
      uVar7 = uVar7 + 1;
      cVar2 = sub_08031670(param_1,uVar7);
      *puVar8 = (int)cVar2;
      if (-1 < cVar2) {
        puVar8 = (uint *)((int *)puVar8 + 1);
        iVar9 = iVar9 + 1;
      }
    } while ((iVar9 < 4) && (uVar7 < 4));
    iVar9 = 0;
    local_28 = puVar1;
    iVar5 = 0;
    do {
      uVar7 = puVar1[iVar5];
      local_24 = iVar5 + 1;
      while (((int)uVar7 < 0 && (iVar9 < 4))) {
        uVar7 = local_40[iVar9];
        iVar9 = iVar9 + 1;
        if (-1 < (int)uVar7) {
          iVar6 = 0;
          puVar8 = puVar1;
          uVar4 = local_40[4];
          while (uVar4 != uVar7) {
            puVar8 = puVar8 + 1;
            iVar6 = iVar6 + 1;
            if (1 < iVar6) goto LAB_080315fe;
            uVar4 = *puVar8;
          }
          if (1 < iVar6) {
LAB_080315fe:
            puVar1[iVar5] = uVar7;
          }
        }
        uVar7 = puVar1[iVar5];
      }
      iVar5 = local_24;
    } while (local_24 < 2);
    if ((int)local_40[4] < 0) {
      local_40[4] = local_40[5];
    }
    else if ((int)local_40[5] < 0) {
      local_40[5] = local_40[4];
    }
    param_1[2] = (byte)local_40[4];
    param_1[3] = (byte)local_40[5];
  }
  return uStack_4;
}


// sub_080DAE28 at 0x080DAE28 (thumb)

undefined4 sub_080DAE28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  int local_40 [8];
  undefined4 uStack_4;
  
  piVar6 = local_40;
  iVar10 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar10 + 0x54);
  iVar3 = *(int *)(iVar10 + 0x58);
  local_40[0] = iVar1;
  local_40[1] = iVar3;
  iVar2 = *(int *)(iVar10 + 100);
  iVar4 = *(int *)(iVar10 + 0x68);
  local_40[2] = iVar2;
  local_40[3] = iVar4;
  local_40[4] = *(int *)(iVar10 + 0x5c);
  local_40[5] = *(int *)(iVar10 + 0x60);
  local_40[7] = *(int *)(iVar10 + 0x80);
  local_40[6] = *(int *)(iVar10 + 0x7c);
  uVar9 = 1;
  uVar7 = 0;
  piVar8 = local_40 + 1;
  piVar5 = local_40 + 3;
  do {
    if (*piVar5 < piVar8[uVar7 * 2]) {
      uVar7 = uVar9;
    }
    piVar5 = piVar5 + 2;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  if (uVar7 == 2) {
    local_40[0] = local_40[4];
    local_40[1] = local_40[5];
    local_40[4] = iVar1;
    local_40[5] = iVar3;
    local_40[2] = local_40[6];
    local_40[3] = local_40[7];
    local_40[6] = iVar2;
    local_40[7] = iVar4;
  }
  else if (uVar7 < 3) {
    if (uVar7 == 1) {
      local_40[0] = iVar2;
      local_40[1] = iVar4;
      local_40[2] = local_40[4];
      local_40[3] = local_40[5];
      local_40[4] = local_40[6];
      local_40[5] = local_40[7];
      local_40[6] = iVar1;
      local_40[7] = iVar3;
    }
  }
  else if (uVar7 == 3) {
    local_40[0] = local_40[6];
    local_40[1] = local_40[7];
    local_40[6] = local_40[4];
    local_40[7] = local_40[5];
    local_40[4] = iVar2;
    local_40[5] = iVar4;
    local_40[2] = iVar1;
    local_40[3] = iVar3;
  }
  uVar7 = 0;
  iVar2 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0xc);
  uStack_4 = in_lr;
  do {
    *piVar6 = *piVar6 - iVar2 >> 8;
    *piVar8 = *piVar8 - iVar1 >> 8;
    piVar8 = piVar8 + 2;
    piVar6 = piVar6 + 2;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if (*(byte *)(iVar10 + 0x11) == 0) {
    DAT_03002ac0 = (ushort)*(byte *)(iVar10 + 0x74) |
                   (ushort)*(byte *)(iVar10 + 0x76) << 10 | (ushort)*(byte *)(iVar10 + 0x75) << 5;
  }
  else {
    (&DAT_03002ac0)[*(byte *)(iVar10 + 0x11)] =
         (ushort)*(byte *)(iVar10 + 0x74) |
         (ushort)*(byte *)(iVar10 + 0x76) << 10 | (ushort)*(byte *)(iVar10 + 0x75) << 5;
  }
  DAT_02000a56 = 0;
  DAT_02000a5a = 0;
  iVar1 = sub_08000A70(0x140);
  if (iVar1 != 0) {
    sub_08000AB4(0,iVar1,0x140);
    piVar8 = local_40 + 6;
    sub_080DB040(iVar1,local_40,piVar8,8);
    piVar5 = local_40 + 2;
    sub_080DB040(iVar1,local_40,piVar5,0);
    if (local_40[7] < local_40[5]) {
      sub_080DB040(iVar1,piVar8,local_40 + 4,8);
    }
    else {
      sub_080DB040(iVar1,local_40 + 4,piVar8,0);
    }
    if (local_40[3] < local_40[5]) {
      sub_080DB040(iVar1,piVar5,local_40 + 4,0);
    }
    else {
      sub_080DB040(iVar1,local_40 + 4,piVar5,8);
    }
    DAT_03001724 = 0x4000042;
    DAT_03001728 = 0xa2600001;
    DAT_03001720 = iVar1;
  }
  DAT_02000a5a = 0xa0;
  return uStack_4;
}


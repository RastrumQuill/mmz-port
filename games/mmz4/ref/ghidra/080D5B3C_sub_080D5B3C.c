// sub_080D5B3C at 0x080D5B3C (thumb)

undefined4 sub_080D5B3C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  undefined4 in_lr;
  int local_38 [5];
  int local_24;
  undefined4 uStack_4;
  
  piVar4 = local_38;
  iVar1 = *(int *)(param_1 + 8);
  local_38[0] = *(int *)(iVar1 + 0x54);
  local_38[1] = *(int *)(iVar1 + 0x58);
  local_38[2] = *(int *)(iVar1 + 100);
  local_38[3] = *(int *)(iVar1 + 0x68);
  local_38[4] = *(int *)(iVar1 + 0x5c);
  local_24 = *(int *)(iVar1 + 0x60);
  piVar6 = local_38 + 1;
  iVar5 = 0;
LAB_080d5b74:
  do {
    if (piVar6[iVar5 * 2] == piVar6[(iVar5 + 1) * 2]) {
      iVar3 = local_38[iVar5 * 2];
      iVar2 = local_38[(iVar5 + 1) * 2];
      if (iVar2 < iVar3) {
        local_38[(iVar5 + 1) * 2] = iVar3;
        local_38[iVar5 * 2] = iVar2;
        iVar5 = 0;
        goto LAB_080d5b74;
      }
    }
    piVar9 = piVar6 + iVar5 * 2;
    iVar2 = iVar5 + 1;
    piVar7 = piVar6 + iVar2 * 2;
    if (*piVar7 < *piVar9) {
      iVar3 = local_38[iVar2 * 2];
      local_38[iVar2 * 2] = local_38[iVar5 * 2];
      local_38[iVar5 * 2] = iVar3;
      iVar5 = *piVar7;
      *piVar7 = *piVar9;
      *piVar9 = iVar5;
      iVar5 = 0;
    }
    else {
      iVar5 = iVar2;
      if (iVar2 == 2) {
        uVar8 = 0;
        iVar2 = *(int *)(param_2 + 8);
        iVar5 = *(int *)(param_2 + 0xc);
        uStack_4 = in_lr;
        do {
          *piVar4 = *piVar4 - iVar2 >> 8;
          *piVar6 = *piVar6 - iVar5 >> 8;
          piVar6 = piVar6 + 2;
          piVar4 = piVar4 + 2;
          uVar8 = uVar8 + 1;
        } while (uVar8 < 3);
        DAT_03002ac0 = (ushort)*(byte *)(iVar1 + 0x74) |
                       (ushort)*(byte *)(iVar1 + 0x76) << 10 | (ushort)*(byte *)(iVar1 + 0x75) << 5;
        DAT_02000a56 = 0;
        DAT_02000a5a = 0;
        iVar5 = sub_08000A70(0x140);
        if (iVar5 != 0) {
          sub_08000AB4(0,iVar5,0x140);
          if ((local_24 - local_38[1]) * (local_38[2] - local_38[0]) -
              (local_38[3] - local_38[1]) * (local_38[4] - local_38[0]) < 0) {
            sub_080D5CF4(iVar5,local_38,local_38 + 2,8);
            sub_080D5CF4(iVar5,local_38,local_38 + 4,0);
            sub_080D5CF4(iVar5,local_38 + 2,local_38 + 4,8);
          }
          else {
            sub_080D5CF4(iVar5,local_38,local_38 + 2,0);
            sub_080D5CF4(iVar5,local_38,local_38 + 4,8);
            sub_080D5CF4(iVar5,local_38 + 2,local_38 + 4,0);
          }
          DAT_03001708 = 0x4000042;
          DAT_0300170c = 0xa2600001;
          DAT_03001704 = iVar5;
        }
        DAT_02000a5a = 0xa0;
        return uStack_4;
      }
    }
  } while( true );
}


// sub_0800A2FC at 0x0800A2FC (thumb)

int sub_0800A2FC(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined *puVar8;
  
  if (param_3 < param_2) {
    param_3 = sub_0800A094(param_1,param_3);
  }
  else {
    iVar1 = param_3 - param_2 >> 1;
    uVar4 = (uint)DAT_020011d2;
    if (uVar4 != 0) {
      piVar7 = &DAT_020011e0;
      piVar5 = &DAT_020011dc;
      puVar8 = &DAT_02001000;
      do {
        uVar6 = (uint)*(ushort *)(puVar8 + 0x1d8) * 2;
        uVar2 = (param_1 - *piVar5) + (uint)*(ushort *)(puVar8 + 0x1d8);
        if (uVar2 <= uVar6 && uVar6 - uVar2 != 0) {
          iVar3 = (uint)*(ushort *)(puVar8 + 0x1da) + iVar1;
          uVar6 = iVar3 * 2;
          uVar2 = ((param_2 + iVar1) - *piVar7) + iVar3;
          if ((uVar2 <= uVar6 && uVar6 - uVar2 != 0) &&
             (iVar3 = *piVar7 - (uint)*(ushort *)(puVar8 + 0x1da), iVar3 < param_3)) {
            param_3 = iVar3;
          }
        }
        piVar7 = piVar7 + 6;
        piVar5 = piVar5 + 6;
        puVar8 = puVar8 + 0x18;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return param_3;
}


// sub_0800972C at 0x0800972C (thumb)

int sub_0800972C(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined *puVar8;
  
  if (param_2 < param_3) {
    param_3 = sub_080094A8(param_1,param_3);
  }
  else {
    iVar1 = param_2 - param_3 >> 1;
    uVar4 = (uint)DAT_02000c82;
    if (uVar4 != 0) {
      piVar7 = &DAT_02000c90;
      piVar5 = &DAT_02000c8c;
      puVar8 = &DAT_02000ab0;
      do {
        uVar6 = (uint)*(ushort *)(puVar8 + 0x1d8) * 2;
        uVar2 = (param_1 - *piVar5) + (uint)*(ushort *)(puVar8 + 0x1d8);
        if (uVar2 <= uVar6 && uVar6 - uVar2 != 0) {
          iVar3 = (uint)*(ushort *)(puVar8 + 0x1da) + iVar1;
          if ((((uint)(((param_2 - iVar1) - *piVar7) + iVar3) <= (uint)(iVar3 * 2)) &&
              (iVar3 = *piVar7 + (uint)*(ushort *)(puVar8 + 0x1da) + 1, param_3 < iVar3)) &&
             ((*(ushort *)(puVar8 + 0x1d6) & 0x8400) == 0)) {
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


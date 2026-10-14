// sub_080097E4 at 0x080097E4 (thumb)

int sub_080097E4(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined *puVar8;
  
  if (param_3 < param_1) {
    param_3 = sub_08009544(param_3);
  }
  else {
    iVar1 = param_3 - param_1 >> 1;
    uVar2 = (uint)DAT_02000c82;
    if (uVar2 != 0) {
      piVar7 = &DAT_02000c8c;
      piVar5 = &DAT_02000c90;
      puVar8 = &DAT_02000ab0;
      do {
        uVar6 = (uint)*(ushort *)(puVar8 + 0x1da) * 2;
        uVar3 = (param_2 - *piVar5) + (uint)*(ushort *)(puVar8 + 0x1da);
        if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
          iVar4 = (uint)*(ushort *)(puVar8 + 0x1d8) + iVar1;
          uVar6 = iVar4 * 2;
          uVar3 = ((param_1 + iVar1) - *piVar7) + iVar4;
          if (((uVar3 <= uVar6 && uVar6 - uVar3 != 0) &&
              (iVar4 = *piVar7 - (uint)*(ushort *)(puVar8 + 0x1d8), iVar4 < param_3)) &&
             ((*(ushort *)(puVar8 + 0x1d6) & 0x8400) == 0)) {
            param_3 = iVar4 + -1;
          }
        }
        piVar7 = piVar7 + 6;
        piVar5 = piVar5 + 6;
        puVar8 = puVar8 + 0x18;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return param_3;
}


// sub_08081068 at 0x08081068 (thumb)

undefined8 sub_08081068(int param_1)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 in_lr;
  char acStack_54 [56];
  
  iVar1 = DAT_0202dbf0;
  sub_08128B5C(acStack_54,&DAT_08129350,0x38);
  if (((iVar1 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) ||
     ((short)acStack_54[(uint)*(byte *)(param_1 + 0x70) * 8 + (uint)*(byte *)(param_1 + 0x71)] ==
      0x7f)) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0xb6) = 0;
    *(undefined *)(param_1 + 0xb5) = 0;
    *(undefined *)(param_1 + 0x25) = 0x18;
    uVar4 = 0;
  }
  else {
    pbVar5 = (byte *)(param_1 + 0xb5);
    piVar7 = (int *)(param_1 + 0xb8);
    piVar8 = (int *)(param_1 + 0xbc);
    sVar3 = (short)((uint)((int)(short)acStack_54
                                       [(uint)*(byte *)(param_1 + 0x70) * 8 +
                                        (uint)*(byte *)(param_1 + 0x71)] << 0x18) >> 0x10);
    if (*pbVar5 == 0) {
      *pbVar5 = 1;
      iVar6 = DAT_0202dbf0;
      *piVar7 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
      *piVar8 = *(int *)(iVar6 + 0x58) - (*(int *)(param_1 + 0x58) + (int)sVar3);
      if (*piVar7 < -0x800) {
        *piVar7 = -0x800;
      }
      else if (0x800 < *piVar7) {
        *piVar7 = 0x800;
      }
      iVar6 = -0x800;
      if ((*piVar8 < -0x800) || (iVar6 = 0x400, 0x400 < *piVar8)) {
        *piVar8 = iVar6;
      }
      if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0xc0)) {
        bVar2 = 1;
      }
      else if (*(int *)(param_1 + 0xc0) < *(int *)(DAT_0202dbf0 + 0x54)) {
        bVar2 = 0;
      }
      else {
        bVar2 = (*(byte *)(DAT_0202dbf0 + 10) >> 4 ^ 1) & 1;
      }
      *(byte *)(param_1 + 0xb6) = bVar2;
      sub_08005784(param_1 + 0x74,
                   *(undefined4 *)
                    (*(char *)(param_1 + 0x71) * 4 +
                    *(int *)(&DAT_0885af38 +
                            (uint)*pbVar5 * 4 +
                            (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70))
                            - 0x1800) * 8)));
      *(undefined *)(param_1 + 0x25) = 0xf;
    }
    *(undefined *)(iVar1 + 0x171) = 1;
    *(undefined *)(iVar1 + 0x172) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(int *)(iVar1 + 0x54) = *(int *)(param_1 + 0x54) + *piVar7;
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + *piVar8 + (int)sVar3;
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}


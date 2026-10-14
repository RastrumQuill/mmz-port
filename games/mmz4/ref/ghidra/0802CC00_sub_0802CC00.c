// sub_0802CC00 at 0x0802CC00 (thumb)

undefined8 sub_0802CC00(int param_1,short *param_2,char param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\t') {
    piVar2 = (int *)(param_1 + 0x178);
    piVar5 = (int *)(param_1 + 0x17c);
    if (*piVar2 < *piVar5) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar7 = (int)*param_2;
      }
      else {
        iVar7 = -(int)*param_2;
      }
      iVar3 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
      iVar6 = iVar7 - iVar3;
      iVar7 = iVar7 + iVar3;
      if (*(int *)(param_1 + 0x54) + iVar6 < *piVar2) {
        *(int *)(param_1 + 0x54) = (*piVar2 - iVar6) + 1;
      }
      if (((param_3 == '\0') || (*piVar2 <= *(int *)(param_1 + 0x54) + iVar6 + -1)) ||
         ((sVar1 = sub_0802E040(param_1,*(int *)(param_1 + 0x54) + iVar7,
                                *(int *)(param_1 + 0x58) + (int)param_2[1] +
                                ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)), sVar1 == 0 &&
          (sVar1 = sub_0802E040(param_1,*(int *)(param_1 + 0x54) + iVar7,
                                (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)), sVar1 == 0)))) {
        if (*piVar5 < *(int *)(param_1 + 0x54) + iVar7) {
          *(int *)(param_1 + 0x54) = (*piVar5 - iVar7) + -1;
        }
        if (((param_3 == '\0') || (*(int *)(param_1 + 0x54) + iVar7 + 1 <= *piVar5)) ||
           ((sVar1 = sub_0802E040(param_1,*(int *)(param_1 + 0x54) + iVar6,
                                  *(int *)(param_1 + 0x58) + (int)param_2[1] +
                                  ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)), sVar1 == 0 &&
            (sVar1 = sub_0802E040(param_1,*(int *)(param_1 + 0x54) + iVar6,
                                  (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                  ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)), sVar1 == 0))))
        goto LAB_0802cd1e;
      }
      uVar4 = 1;
      goto LAB_0802cd20;
    }
  }
LAB_0802cd1e:
  uVar4 = 0;
LAB_0802cd20:
  return CONCAT44(in_lr,uVar4);
}


// sub_08026FB8 at 0x08026FB8 (thumb)

undefined8 sub_08026FB8(int param_1,short *param_2,char param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x14c) < *(int *)(param_1 + 0x150)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = (int)*param_2;
    }
    else {
      iVar5 = -(int)*param_2;
    }
    iVar2 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    iVar4 = iVar5 - iVar2;
    iVar5 = iVar5 + iVar2;
    iVar2 = *(int *)(param_1 + 0x14c);
    if (*(int *)(param_1 + 0x54) + iVar4 < iVar2) {
      *(int *)(param_1 + 0x54) = (iVar2 - iVar4) + 1;
    }
    if (((param_3 == '\0') || (*(int *)(param_1 + 0x14c) <= *(int *)(param_1 + 0x54) + iVar4 + -1))
       || ((sVar1 = sub_08028370(param_1,*(int *)(param_1 + 0x54) + iVar5,
                                 *(int *)(param_1 + 0x58) + (int)param_2[1] +
                                 ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)), sVar1 == 0 &&
           (sVar1 = sub_08028370(param_1,*(int *)(param_1 + 0x54) + iVar5,
                                 (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                 ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)), sVar1 == 0))))
    {
      iVar2 = *(int *)(param_1 + 0x150);
      if (iVar2 < *(int *)(param_1 + 0x54) + iVar5) {
        *(int *)(param_1 + 0x54) = (iVar2 - iVar5) + -1;
      }
      if (((param_3 == '\0') || (*(int *)(param_1 + 0x54) + iVar5 + 1 <= *(int *)(param_1 + 0x150)))
         || ((sVar1 = sub_08028370(param_1,*(int *)(param_1 + 0x54) + iVar4,
                                   *(int *)(param_1 + 0x58) + (int)param_2[1] +
                                   ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)), sVar1 == 0 &&
             (sVar1 = sub_08028370(param_1,*(int *)(param_1 + 0x54) + iVar4,
                                   (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                   ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)), sVar1 == 0)))
         ) goto LAB_080270cc;
    }
    uVar3 = 1;
  }
  else {
LAB_080270cc:
    iVar5 = *(int *)(param_1 + 0x154);
    if (((iVar5 < *(int *)(param_1 + 0x158)) && (*(int *)(param_1 + 0x58) - (int)param_2[3] < iVar5)
        ) && (*(int *)(param_1 + 0x58) = iVar5 + param_2[3],
             (*(uint *)(param_1 + 0xc) & 0xffff00) == 0x10100)) {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}


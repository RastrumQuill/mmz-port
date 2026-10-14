// sub_080D4720 at 0x080D4720 (thumb)

undefined4 sub_080D4720(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar6 + 0xd) != '\0') {
    return in_lr;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  piVar5 = *(int **)(*(int *)(param_1 + 0xc) + 8);
  iVar7 = *piVar5 + (int)*(short *)(iVar4 + 0x10);
  iVar8 = piVar5[1] + (int)*(short *)(iVar4 + 0x12);
  uVar2 = (uint)(*(ushort *)(iVar4 + 0x14) >> 1);
  uVar3 = (uint)(*(ushort *)(iVar4 + 0x16) >> 1);
  if (*(char *)(iVar6 + 0x10) == '\0') {
    sVar1 = sub_0800BB24(iVar7,iVar8);
    if (sVar1 == 0) {
      sVar1 = sub_0800BB24(iVar7 + uVar2,iVar8 + uVar3);
      if (sVar1 == 0) {
        sVar1 = sub_0800BB24(iVar7 + uVar2,iVar8 - uVar3);
        if (sVar1 == 0) {
          sVar1 = sub_0800BB24(iVar7 - uVar2,iVar8 + uVar3);
          if (sVar1 == 0) {
            sVar1 = sub_0800BB24(iVar7 - uVar2,iVar8 - uVar3);
            goto LAB_080d4864;
          }
        }
      }
    }
  }
  else if (*(char *)(iVar6 + 0x10) == '\x01') {
    sVar1 = sub_0800E964(iVar7,iVar8);
    if (sVar1 == 0) {
      sVar1 = sub_0800E964(iVar7 + uVar2,iVar8 + uVar3);
      if (sVar1 == 0) {
        sVar1 = sub_0800E964(iVar7 + uVar2,iVar8 - uVar3);
        if (sVar1 == 0) {
          sVar1 = sub_0800E964(iVar7 - uVar2,iVar8 + uVar3);
          if (sVar1 == 0) {
            sVar1 = sub_0800E964(iVar7 - uVar2,iVar8 - uVar3);
LAB_080d4864:
            if (sVar1 == 0) goto LAB_080d488a;
          }
        }
      }
    }
  }
  else {
    sVar1 = sub_08011768(iVar7,iVar8);
    if (sVar1 == 0) {
      sVar1 = sub_08011768(iVar7 + uVar2,iVar8 + uVar3);
      if (sVar1 == 0) {
        sVar1 = sub_08011768(iVar7 + uVar2,iVar8 - uVar3);
        if (sVar1 == 0) {
          sVar1 = sub_08011768(iVar7 - uVar2,iVar8 + uVar3);
          if (sVar1 == 0) {
            sVar1 = sub_08011768(iVar7 - uVar2,iVar8 - uVar3);
            goto LAB_080d4864;
          }
        }
      }
    }
  }
  *(int *)(iVar6 + 100) = iVar7;
  *(int *)(iVar6 + 0x68) = iVar8;
  *(uint *)(iVar6 + 0x5c) = uVar2;
  *(uint *)(iVar6 + 0x60) = uVar3;
  iVar4 = sub_08003390(0xf7);
  if (iVar4 == 0) {
    sub_080032EC(0xf7);
  }
  *(undefined *)(iVar6 + 0xd) = 1;
LAB_080d488a:
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
  return in_lr;
}


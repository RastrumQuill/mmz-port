// sub_080CB434 at 0x080CB434 (thumb)

undefined4 sub_080CB434(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar8 + 0xd) != '\0') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(iVar2 + 4);
  piVar6 = *(int **)(iVar2 + 8);
  if ((*(byte *)(*(int *)(iVar2 + 0x2c) + 10) & 0x10) == 0) {
    iVar2 = *piVar6 + (int)*(short *)(iVar5 + 0x10);
  }
  else {
    iVar2 = *piVar6 - (int)*(short *)(iVar5 + 0x10);
  }
  iVar7 = piVar6[1] + (int)*(short *)(iVar5 + 0x12);
  uVar3 = (uint)(*(ushort *)(iVar5 + 0x14) >> 1);
  uVar4 = (uint)(*(ushort *)(iVar5 + 0x16) >> 1);
  if (*(char *)(iVar8 + 0x10) == '\0') {
    sVar1 = sub_0800E41C(iVar2,iVar7);
    if (sVar1 == 0) {
      sVar1 = sub_0800E41C(iVar2 + uVar3,iVar7 + uVar4);
      if (sVar1 == 0) {
        sVar1 = sub_0800E41C(iVar2 + uVar3,iVar7 - uVar4);
        if (sVar1 == 0) {
          sVar1 = sub_0800E41C(iVar2 - uVar3,iVar7 + uVar4);
          if (sVar1 == 0) {
            sVar1 = sub_0800E41C(iVar2 - uVar3,iVar7 - uVar4);
LAB_080cb536:
            if (sVar1 == 0) goto LAB_080cb55c;
          }
        }
      }
    }
  }
  else {
    sVar1 = sub_08010E68(iVar2,iVar7);
    if (sVar1 == 0) {
      sVar1 = sub_08010E68(iVar2 + uVar3,iVar7 + uVar4);
      if (sVar1 == 0) {
        sVar1 = sub_08010E68(iVar2 + uVar3,iVar7 - uVar4);
        if (sVar1 == 0) {
          sVar1 = sub_08010E68(iVar2 - uVar3,iVar7 + uVar4);
          if (sVar1 == 0) {
            sVar1 = sub_08010E68(iVar2 - uVar3,iVar7 - uVar4);
            goto LAB_080cb536;
          }
        }
      }
    }
  }
  *(int *)(iVar8 + 100) = iVar2;
  *(int *)(iVar8 + 0x68) = iVar7;
  *(uint *)(iVar8 + 0x5c) = uVar3;
  *(uint *)(iVar8 + 0x60) = uVar4;
  iVar2 = sub_080047C0(0x3d);
  if (iVar2 == 0) {
    sub_0800471C(0x3d);
  }
  *(undefined *)(iVar8 + 0xd) = 1;
LAB_080cb55c:
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
  return in_lr;
}


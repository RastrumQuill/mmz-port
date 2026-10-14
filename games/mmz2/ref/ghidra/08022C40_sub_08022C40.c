// sub_08022C40 at 0x08022C40 (thumb)

int sub_08022C40(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_28;
  
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  uVar7 = *(int *)(param_1 + 0x58) - (uint)*(ushort *)(param_2 + 6);
  iVar8 = *(int *)(param_1 + 0x58) + (uint)*(ushort *)(param_2 + 4);
  iVar2 = (iVar8 - uVar7) + 0x100;
  local_28 = 0;
  iVar9 = 0;
  if ((DAT_0202d004 <= iVar8) && (local_28 = iVar2, (int)uVar7 < DAT_0202d004)) {
    local_28 = (iVar8 - DAT_0202d004) + 0x100;
  }
  if (local_28 == 0) {
    uVar5 = iVar8 + 0x1000;
LAB_08022c9e:
    do {
      uVar5 = uVar5 - 0x1000;
      if ((int)uVar5 < (int)uVar7) {
        uVar5 = uVar7;
      }
      sVar1 = sub_08008354(uVar4,uVar5);
      if (sVar1 == -0x8000) {
        iVar6 = (uVar5 & 0xfffff000) + 0xfff;
        if (iVar8 < iVar6) {
          iVar6 = iVar8;
        }
        do {
          uVar5 = uVar5 - 0x1000;
          if ((int)uVar5 < (int)uVar7) {
            uVar5 = uVar7 - 1;
          }
          sVar1 = sub_08008354(uVar4,uVar5);
        } while ((sVar1 == -0x8000) && ((int)uVar7 <= (int)uVar5));
        uVar3 = uVar5;
        if (sVar1 != -0x8000) {
          uVar3 = uVar5 + 0x1000;
        }
        uVar3 = uVar3 & 0xfffff000;
        if ((int)uVar3 < (int)uVar7) {
          uVar3 = uVar7 - 1;
        }
        iVar9 = iVar9 + (iVar6 - uVar3);
      }
      else if ((int)uVar7 < (int)uVar5) goto LAB_08022c9e;
    } while ((int)uVar7 < (int)uVar5);
    if (iVar9 != 0) {
      iVar9 = iVar9 + 0x100;
    }
  }
  if (iVar9 <= local_28) {
    iVar9 = local_28;
  }
  iVar9 = sub_080EF150(iVar9 * 100,iVar2);
  if (99 < iVar9) {
    iVar9 = 100;
  }
  return iVar9;
}


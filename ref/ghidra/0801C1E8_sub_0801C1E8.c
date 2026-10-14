// sub_0801C1E8 at 0x0801C1E8 (thumb)

undefined8 sub_0801C1E8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar8 = *(int *)(param_1 + 0x50) - (uint)*(ushort *)(param_2 + 6);
  iVar5 = (uint)*(ushort *)(param_2 + 4) + *(int *)(param_1 + 0x50);
  iVar2 = (iVar5 - uVar8) + 0x100;
  iVar9 = 0;
  if ((DAT_02021648 <= iVar5) && (iVar9 = iVar2, (int)uVar8 < DAT_02021648)) {
    iVar9 = (iVar5 - DAT_02021648) + 0x100;
  }
  if (iVar9 == 0) {
    uVar6 = iVar5 + 0x1000;
LAB_0801c23e:
    do {
      uVar6 = uVar6 - 0x1000;
      if ((int)uVar6 < (int)uVar8) {
        uVar6 = uVar8;
      }
      cVar1 = sub_08009AFC(uVar4,uVar6);
      if (cVar1 == -0x80) {
        iVar7 = (uVar6 & 0xfffff000) + 0xfff;
        if (iVar5 < iVar7) {
          iVar7 = iVar5;
        }
        do {
          uVar6 = uVar6 - 0x1000;
          if ((int)uVar6 < (int)uVar8) {
            uVar6 = uVar8 - 1;
          }
          cVar1 = sub_08009AFC(uVar4,uVar6);
        } while ((cVar1 == -0x80) && ((int)uVar8 <= (int)uVar6));
        uVar3 = uVar6 & 0xfffff000;
        if ((int)uVar3 < (int)uVar8) {
          uVar3 = uVar8 - 1;
        }
        iVar9 = iVar9 + (iVar7 - uVar3);
      }
      else if ((int)uVar8 < (int)uVar6) goto LAB_0801c23e;
    } while ((int)uVar8 < (int)uVar6);
    if (iVar9 != 0) {
      iVar9 = iVar9 + 0x100;
    }
  }
  iVar9 = sub_080C8AD0(iVar9 * 100,iVar2);
  if (iVar9 < 100) {
    iVar9 = (int)(char)iVar9;
  }
  else {
    iVar9 = 100;
  }
  return CONCAT44(in_lr,iVar9);
}


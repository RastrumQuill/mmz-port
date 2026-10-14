// sub_08028BDC at 0x08028BDC (thumb)

undefined4 sub_08028BDC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  iVar9 = *(int *)(param_1 + 0x4c);
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = sub_0801901C(uVar7,0);
  iVar3 = sub_08019068(uVar7,0);
  iVar2 = iVar2 - iVar9;
  iVar3 = iVar3 - iVar1;
  do {
    if (iVar2 < 0) {
      if (iVar2 == -0x7fff || -iVar2 < 0x7fff) {
LAB_08028c34:
        if (iVar3 < 0) {
          if (iVar3 == -0x7fff || -iVar3 < 0x7fff) goto LAB_08028c44;
        }
        else if (iVar3 < 0x8000) {
LAB_08028c44:
          uVar4 = sub_08025930(iVar2);
          uVar8 = (uint)*(byte *)(param_1 + 0x13);
          iVar6 = uVar8 - uVar4;
          iVar3 = iVar6 + 4;
          iVar2 = iVar3;
          if (iVar3 < 0) {
            iVar2 = iVar6 + 0x103;
          }
          iVar3 = iVar3 + (iVar2 >> 8) * -0x100;
          iVar5 = iVar3 + 0x100;
          iVar2 = iVar5;
          if (iVar5 < 0) {
            iVar2 = iVar3 + 0x1ff;
          }
          if (8 < iVar5 + (iVar2 >> 8) * -0x100) {
            if (*(char *)(param_1 + 0xf) == '\0') {
              if (uVar8 == 0) {
                iVar2 = -4;
              }
              else {
                iVar2 = uVar8 + 4;
              }
            }
            else {
              iVar2 = iVar6;
              if (iVar6 < 0) {
                iVar2 = iVar6 + 0xff;
              }
              iVar6 = iVar6 + (iVar2 >> 8) * -0x100;
              iVar3 = iVar6 + 0x100;
              iVar2 = iVar3;
              if (iVar3 < 0) {
                iVar2 = iVar6 + 0x1ff;
              }
              iVar6 = -1;
              if (0x7f < iVar3 + (iVar2 >> 8) * -0x100) {
                iVar6 = 1;
              }
              iVar2 = uVar8 + iVar6 * 4;
            }
            iVar3 = iVar2;
            if (iVar2 < 0) {
              iVar3 = iVar2 + 0xff;
            }
            iVar2 = iVar2 + (iVar3 >> 8) * -0x100;
            iVar6 = iVar2 + 0x100;
            iVar3 = iVar6;
            if (iVar6 < 0) {
              iVar3 = iVar2 + 0x1ff;
            }
            uVar4 = iVar6 + (iVar3 >> 8) * -0x100;
          }
          *(char *)(param_1 + 0x13) = (char)uVar4;
          iVar2 = 0x600 - ((short)(&DAT_080c8e24)[uVar4 & 0x7f] * 0x360 >> 8);
          iVar3 = (short)(&DAT_080c8e24)[uVar4 + 0x40] * iVar2 >> 8;
          *(int *)(param_1 + 0x54) = iVar3;
          iVar2 = iVar2 * (short)(&DAT_080c8e24)[uVar4] >> 8;
          *(int *)(param_1 + 0x58) = iVar2;
          *(int *)(param_1 + 0x4c) = iVar9 + iVar3;
          *(int *)(param_1 + 0x50) = iVar1 + iVar2;
          sub_080292A4(param_1);
          *(undefined *)(param_1 + 0xf) = 1;
          return in_lr;
        }
      }
    }
    else if (iVar2 < 0x8000) goto LAB_08028c34;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    iVar2 = iVar2 >> 4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar3 = iVar3 >> 4;
  } while( true );
}


// sub_0804655C at 0x0804655C (thumb)

undefined4 sub_0804655C(int param_1)

{
  undefined uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar2 = sub_08007C7C();
  if (uVar2 != 0) {
    sVar3 = sub_08007020(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c),
                         *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60));
    if (sVar3 != 0) {
      uVar2 = sub_08007020(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c),
                           *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60));
    }
    if ((uVar2 & 0xf) == 0xf) {
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xf;
    if (0xd < uVar2) {
      uVar2 = 1;
    }
    if (uVar2 != 0) {
      if (*(char *)(param_1 + 0x13) != '\0') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
        return in_lr;
      }
      if (*(int *)(param_1 + 0x5c) < 1) {
        iVar4 = sub_0800834C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar4 == -1) goto LAB_0804663c;
      }
      else {
        iVar4 = sub_0800816C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar4 == 1) {
LAB_0804663c:
          iVar4 = 0;
        }
      }
      if (*(int *)(param_1 + 0x60) < 1) {
        iVar5 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar5 == -1) goto LAB_08046666;
      }
      else {
        iVar5 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar5 == 1) {
LAB_08046666:
          iVar5 = 0;
        }
      }
      iVar8 = iVar5;
      if (iVar5 < 0) {
        iVar8 = -iVar5;
      }
      if (iVar8 == 1) {
        iVar5 = 0;
      }
      if ((iVar4 != 0) && (iVar5 != 0)) {
        iVar8 = iVar4;
        if (iVar4 < 0) {
          iVar8 = -iVar4;
        }
        iVar6 = iVar5;
        if (iVar5 < 0) {
          iVar6 = -iVar5;
        }
        if (iVar6 < iVar8) {
          iVar4 = 0;
        }
        else {
          iVar5 = 0;
        }
      }
      if (*(byte *)(param_1 + 0x12) < 0x81) {
        iVar8 = *(int *)(param_1 + 0x5c);
        if (iVar8 < 0) {
          if (uVar2 < 10) {
            if (uVar2 < 8) {
              if (iVar5 == 0) goto LAB_080466f4;
              uVar1 = 0x94;
            }
            else {
              uVar1 = 0xa5;
            }
          }
          else {
            uVar1 = 0x9c;
          }
        }
        else if ((uVar2 < 8) && (uVar2 != 1)) {
          if (uVar2 < 4) {
            uVar1 = 0xdb;
          }
          else {
            uVar1 = 0xe4;
          }
        }
        else {
          if (iVar5 == 0) goto LAB_080466f4;
          uVar1 = 0xec;
        }
LAB_080466ec:
        *(undefined *)(param_1 + 0x12) = uVar1;
      }
      else {
        if (iVar5 != 0) {
          if (*(int *)(param_1 + 0x5c) < 0) {
            uVar1 = 0x6c;
          }
          else {
            uVar1 = 0x14;
          }
          goto LAB_080466ec;
        }
        iVar8 = *(int *)(param_1 + 0x5c);
LAB_080466f4:
        if (iVar8 < 0) {
          if (*(int *)(param_1 + 0x60) < 0) {
            uVar1 = 0xd4;
          }
          else {
            uVar1 = 0x2c;
          }
        }
        else if (*(int *)(param_1 + 0x60) < 0) {
          uVar1 = 0xac;
        }
        else {
          uVar1 = 0x54;
        }
        *(undefined *)(param_1 + 0x12) = uVar1;
      }
      *(int *)(param_1 + 0x5c) =
           *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))
           * 6;
      *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 6;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
  }
  puVar9 = (uint *)(param_1 + 0x8c);
  if ((*puVar9 & 4) == 0) {
    uVar7 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (uVar7 < 0x4001) {
      if ((*puVar9 & 0x1000) == 0) {
        return in_lr;
      }
      *puVar9 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      uVar7 = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 10) = (char)uVar7;
      sub_080D17D8(param_1 + 0x54,6,uVar7 >> 4 & 1);
      sub_08002B10(0x2b);
      goto LAB_080467c8;
    }
  }
  *puVar9 = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
LAB_080467c8:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}


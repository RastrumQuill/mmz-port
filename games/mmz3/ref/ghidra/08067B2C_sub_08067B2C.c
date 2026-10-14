// sub_08067B2C at 0x08067B2C (thumb)

undefined4 sub_08067B2C(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xb9) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08362770);
    *(undefined *)(param_1 + 0x12) = 4;
    *(undefined *)(param_1 + 0xbb) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 1:
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      sub_08017700(param_1,0x603);
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      sub_08017700(param_1,0x605);
    }
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar1 = false;
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar7 = *(int *)(param_1 + 0x54);
      iVar6 = -0xe00;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54);
      iVar6 = 0xe00;
    }
    uVar3 = sub_08009A3C(iVar7 + *(int *)(param_1 + 0x5c) + iVar6,*(undefined4 *)(param_1 + 0x58));
    if ((uVar3 & 0xf) == 1) {
      bVar1 = true;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar7;
      iVar7 = sub_0800A104(iVar7,*(int *)(param_1 + 0x58) + -0x800);
      uVar3 = iVar7 - 0xe00;
      if ((int)(uVar3 - *(int *)(param_1 + 0x58)) < 0x701) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(uint *)(param_1 + 0x58) = uVar3;
        if (*(int *)(param_1 + 0x5c) < 0) {
          uVar5 = 0xfffffe00;
        }
        else {
          uVar5 = 0x200;
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar7;
        if (0x700 < iVar7) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        uVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        *(uint *)(param_1 + 0x58) = uVar4;
        if (uVar3 < uVar4) {
          *(uint *)(param_1 + 0x58) = uVar3;
        }
        if (*(int *)(param_1 + 0x5c) < 0) {
          uVar5 = 0xffffff00;
        }
        else {
          uVar5 = 0x100;
        }
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      bVar1 = true;
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    sub_080177F4(param_1);
    if (((byte)(*(char *)(param_1 + 0x71) - 2U) < 3) || ((byte)(*(char *)(param_1 + 0x71) - 8U) < 3)
       ) {
      sub_08007390(param_1 + 0x74,&DAT_083627a0);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08362770);
    }
    if (!bVar1) {
      return in_lr;
    }
    goto LAB_08067d72;
  case 4:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined *)(param_1 + 0xb9) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08362770);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar7;
    iVar7 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),iVar7 + -0xe00);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
    sub_080177F4(param_1);
    if (((byte)(*(char *)(param_1 + 0x71) - 2U) < 3) || ((byte)(*(char *)(param_1 + 0x71) - 8U) < 3)
       ) {
      sub_08007390(param_1 + 0x74,&DAT_083627a0);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08362770);
    }
    break;
  case 6:
    iVar7 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    if (iVar7 < 1) {
      iVar7 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    }
    if (iVar7 < 0xf001) {
      iVar7 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202f5c0 + 0x58);
      if (iVar7 < 1) {
        iVar7 = *(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58);
      }
      if (iVar7 < 0xa001) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    *(undefined *)(param_1 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  default:
    goto switchD_08067b40_caseD_7;
  }
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
LAB_08067d72:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08067b40_caseD_7:
  return in_lr;
}


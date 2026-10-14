// sub_080FBD90 at 0x080FBD90 (thumb)

undefined8 sub_080FBD90(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  pcVar7 = (char *)(param_1 + 0xdcc);
  *(undefined2 *)(param_1 + 0xddc) = DAT_02002130;
  *(undefined2 *)(param_1 + 0xdde) = DAT_02002134;
  iVar5 = *(int *)(param_1 + 0xdd4);
  piVar3 = (int *)(param_1 + 0xdc4);
  if (*piVar3 < *(int *)(iVar5 + 0x54)) {
    *(int *)(param_1 + 0xdfc) = *(int *)(param_1 + 0xdfc) + (*(int *)(iVar5 + 0x54) - *piVar3);
    *(int *)(param_1 + 0xdd0) = *(int *)(param_1 + 0xdd0) + (*(int *)(iVar5 + 0x54) - *piVar3);
    *(int *)(param_1 + 0xde8) = *(int *)(param_1 + 0xde8) + (*(int *)(iVar5 + 0x54) - *piVar3);
    iVar5 = *(int *)(param_1 + 0xdf0) + (*(int *)(iVar5 + 0x54) - *piVar3);
    *(int *)(param_1 + 0xdf0) = iVar5;
    if (*(int *)(param_1 + 0xdf4) <= iVar5) {
      iVar5 = *(int *)(param_1 + 0xdf4) + -0x100;
      *(int *)(param_1 + 0xdf4) = iVar5;
      if (iVar5 < 0x3c00) {
        *(undefined4 *)(param_1 + 0xdf4) = 0x3c00;
      }
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      sub_080CB57C(pcVar7,*(int *)(param_1 + 0xdd0) + 0xa7000,(uVar4 * 4 >> 0x12) + 0x5d000);
      *(undefined4 *)(param_1 + 0xdf0) = 0;
    }
    if (*(int *)(param_1 + 0xdec) <= *(int *)(param_1 + 0xde8)) {
      sVar1 = *(short *)(param_1 + 0xdf8) + 1;
      *(short *)(param_1 + 0xdf8) = sVar1;
      if (0x200 < sVar1) {
        *(undefined2 *)(param_1 + 0xdf8) = 0x200;
      }
      iVar5 = *(int *)(param_1 + 0xdec) + -0x100;
      *(int *)(param_1 + 0xdec) = iVar5;
      if (iVar5 < 0x5000) {
        *(undefined4 *)(param_1 + 0xdec) = 0x5000;
      }
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      iVar5 = *(int *)(param_1 + 0xde4) + -0x2000 + (uVar4 * 4 >> 0x12);
      *(int *)(param_1 + 0xde4) = iVar5;
      if (iVar5 < 0x5e000) {
        *(undefined4 *)(param_1 + 0xde4) = 0x5e000;
      }
      if (0x63000 < *(int *)(param_1 + 0xde4)) {
        *(undefined4 *)(param_1 + 0xde4) = 0x63000;
      }
      sub_080D8C84(pcVar7,*(int *)(param_1 + 0xdd0) + 0xa7000,*(undefined4 *)(param_1 + 0xde4),0);
      *(char *)(param_1 + 0xea0) = *(char *)(param_1 + 0xea0) + '\x01';
      *(undefined4 *)(param_1 + 0xde8) = 0;
    }
    iVar6 = *(int *)(param_1 + 0xdd0);
    iVar5 = sub_080FE390(iVar6,0xf000);
    if (iVar5 < iVar6) {
      uVar2 = 0xffff1000;
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0xde0) = uVar2;
    uVar2 = sub_080FE390(iVar6,0xf000);
    *(undefined4 *)(param_1 + 0xdd0) = uVar2;
    *(int *)(param_1 + 0xdc4) = 0x9d800;
    *(int *)(param_1 + 0xdc4) = *(int *)(param_1 + 0xdd0) + 0x9d800;
    if (0x1000 < *(int *)(param_1 + 0xdfc)) {
      *(int *)(param_1 + 0xdfc) = *(int *)(param_1 + 0xdfc) + -0x1000;
      *(int *)(param_1 + 0xe00) = *(int *)(param_1 + 0xe00) + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xde0) = 0;
  }
  if ((0x69000 < *(int *)(*(int *)(param_1 + 0xdd4) + 0x58)) || (*(char *)(param_1 + 0xea1) == '\0')
     ) {
    *(undefined *)(param_1 + 0xea2) = 1;
    *pcVar7 = *pcVar7 + '\x01';
    *(undefined *)(param_1 + 0xdcd) = 0;
    *(undefined *)(param_1 + 0xdce) = 0;
    *(undefined *)(param_1 + 0xdcf) = 0;
  }
  return CONCAT44(in_lr,1);
}


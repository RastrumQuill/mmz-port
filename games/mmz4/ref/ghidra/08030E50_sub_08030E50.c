// sub_08030E50 at 0x08030E50 (thumb)

undefined4 sub_08030E50(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_0801CF00(param_1,0x403);
    sVar1 = sub_080387F0(param_1);
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar1 = sub_080386E0(param_1);
    if (iVar3 < sVar1) {
      sVar1 = sub_080386E0(param_1);
      *(int *)(param_1 + 0x5c) = (int)sVar1;
    }
    *(undefined *)(param_1 + 0x13c) = 4;
    goto switchD_08030e64_caseD_6;
  case 1:
    sub_0801CF00(param_1,0x400);
    sVar1 = sub_08038814(param_1);
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    if (*(int *)(param_1 + 0x11c) != 0) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
      sVar1 = sub_080386E0(param_1);
      *(int *)(param_1 + 0x5c) = (int)sVar1;
    }
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar1 = sub_080386E0(param_1);
    if (iVar3 < sVar1) {
      sVar1 = sub_080386E0(param_1);
      *(int *)(param_1 + 0x5c) = (int)sVar1;
    }
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar1 = sub_0803879C(param_1);
    if (iVar3 <= sVar1) goto switchD_08030e64_caseD_6;
    sVar1 = sub_0803879C(param_1);
    iVar3 = (int)sVar1;
    break;
  case 2:
    sub_0801CF00(param_1,0x403);
    sVar1 = sub_080387F0(param_1);
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    sVar1 = sub_0803879C(param_1);
    iVar3 = (int)sVar1;
    break;
  case 3:
    sub_080D18C8(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    puVar4 = (uint *)(param_1 + 600);
    if ((*puVar4 & 8) == 0) {
      sub_0801CF00(param_1,0x501);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sVar1 = sub_080386E0(param_1);
        iVar3 = (int)sVar1;
      }
      else {
        sVar1 = sub_080386E0(param_1);
        iVar3 = -(int)sVar1;
      }
      *(int *)(param_1 + 0x5c) = iVar3;
    }
    else {
      sub_0801CF00(param_1,0x601);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if ((*puVar4 & 0x20) != 0) {
          iVar3 = *(int *)(param_1 + 0x54) + -0x1000;
          *(int *)(param_1 + 0x54) = iVar3;
          iVar3 = sub_08008448(iVar3,*(undefined4 *)(param_1 + 0x58));
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x700 + iVar3;
        }
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        sVar1 = sub_0803879C(param_1);
        iVar3 = (int)sVar1;
      }
      else {
        if ((*puVar4 & 0x10) != 0) {
          iVar3 = *(int *)(param_1 + 0x54) + 0x1000;
          *(int *)(param_1 + 0x54) = iVar3;
          iVar3 = sub_08008264(iVar3,*(undefined4 *)(param_1 + 0x58));
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x700 + iVar3;
        }
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        sVar1 = sub_0803879C(param_1);
        iVar3 = -(int)sVar1;
      }
      *(int *)(param_1 + 0x5c) = iVar3;
      if (*(int *)(param_1 + 0x108) == 0) {
        uVar2 = sub_080D229C(param_1);
        *(undefined4 *)(param_1 + 0x108) = uVar2;
      }
    }
    *(undefined *)(param_1 + 0x13b) = 7;
    sVar1 = sub_08038864(param_1);
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    sub_08002B10(0xc);
    goto switchD_08030e64_caseD_6;
  case 4:
    sub_0801CF00(param_1,0x400);
    sVar1 = sub_08038838(param_1);
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    if (*(int *)(param_1 + 0x11c) != 0) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    sVar1 = sub_080386E0(param_1);
    iVar3 = (int)sVar1;
    break;
  case 5:
    *(undefined *)(param_1 + 0x14c) = 0;
    if (*(char *)(param_1 + 0xc2) == '\x02') {
      sVar1 = sub_080388DC(param_1);
    }
    else {
      sVar1 = sub_080388B4(param_1);
    }
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar1 = sub_08038908(param_1);
      iVar3 = -(int)sVar1;
    }
    else {
      sVar1 = sub_08038908(param_1);
      iVar3 = (int)sVar1;
    }
    break;
  default:
    goto switchD_08030e64_caseD_6;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
switchD_08030e64_caseD_6:
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08031144(param_1);
  return in_lr;
}


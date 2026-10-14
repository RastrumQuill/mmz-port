// sub_08082DD4 at 0x08082DD4 (thumb)

undefined4 sub_08082DD4(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08006E08(param_1 + 0x74,&DAT_083410e8);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08082de8_caseD_1:
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (((bVar1 & 7) == 0) &&
       (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
       (uVar3 * 2 >> 0x11 & 3) == 0)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar5 = -0xc00;
      }
      else {
        iVar5 = 0xc00;
      }
      sub_080AC8A4(*(int *)(param_1 + 0x54) + iVar5,*(undefined4 *)(param_1 + 0x58),0);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    if (0 < iVar5) {
      *(int *)(param_1 + 0x60) = iVar5 + -0x10;
    }
    pbVar4 = (byte *)(param_1 + 0xbe);
    uVar3 = *pbVar4 + 4;
    if (0xff < uVar3) {
      uVar3 = 0;
    }
    *pbVar4 = (byte)uVar3;
    *(byte *)(param_1 + 0x24) = *pbVar4;
    if (*pbVar4 == 0) {
LAB_08082f64:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08082de8_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08082de8_caseD_1;
  case 2:
    sub_08012580(param_1);
    sub_080127E4(param_1,0x6e01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (((bVar1 & 7) == 0) &&
       (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
       (uVar3 * 2 >> 0x11 & 3) == 0)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar5 = -0xc00;
      }
      else {
        iVar5 = 0xc00;
      }
      sub_080AC8A4(*(int *)(param_1 + 0x54) + iVar5,*(undefined4 *)(param_1 + 0x58),0);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    if (0 < iVar5) {
      *(int *)(param_1 + 0x60) = iVar5 + -0xc;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08082f64;
  case 4:
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    sub_080127E4(param_1,0x6e00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (((bVar1 & 7) == 0) &&
       (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
       (uVar3 * 2 >> 0x11 & 3) == 0)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar5 = -0xc00;
      }
      else {
        iVar5 = 0xc00;
      }
      sub_080AC8A4(*(int *)(param_1 + 0x54) + iVar5,*(undefined4 *)(param_1 + 0x58),0);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar5 = *(int *)(param_1 + 0x60) + -6;
    *(int *)(param_1 + 0x60) = iVar5;
    if (iVar5 < 1) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08082de8_caseD_6;
  }
}


// sub_080AC920 at 0x080AC920 (thumb)

undefined4 sub_080AC920(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08017700(param_1,0xa00);
    }
    else {
      sub_08017700(param_1,0xa03);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080ac934_caseD_1:
    sub_080177F4(param_1);
    iVar2 = *(int *)(param_1 + 0xbc);
    if ((iVar2 == 0) || (iVar2 = iVar2 + -1, *(int *)(param_1 + 0xbc) = iVar2, iVar2 == 0)) {
      uVar1 = 0x7f;
LAB_080aca2e:
      *(undefined *)(param_1 + 0x12) = uVar1;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080ac934_caseD_5:
    return in_lr;
  case 1:
    goto switchD_080ac934_caseD_1;
  case 2:
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08017700(param_1,0xa01);
      sub_08007390(param_1 + 0x74,&DAT_08368f08);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      sub_08017700(param_1,0xa04);
      sub_08007390(param_1 + 0x74,&DAT_08368f20);
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x13) = (byte)(uVar3 * 2 >> 0x11) & 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    uVar1 = 0xff;
    goto LAB_080aca2e;
  case 4:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  default:
    goto switchD_080ac934_caseD_5;
  }
}


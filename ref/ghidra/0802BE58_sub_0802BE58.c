// sub_0802BE58 at 0x0802BE58 (thumb)

undefined4 sub_0802BE58(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082acdf8);
    sub_08029778(param_1,4);
    iVar5 = *(int *)(param_1 + 0x4c);
    iVar6 = *(int *)(param_1 + 200) - iVar5;
    if (iVar6 < 0) {
      iVar5 = *(int *)(param_1 + 0xc4) - iVar5;
      iVar7 = -0xe00;
    }
    else {
      iVar5 = *(int *)(param_1 + 0xc0) - iVar5;
      iVar7 = 0xe00;
    }
    *(byte *)(param_1 + 0x44) = (byte)((uint)iVar6 >> 0x1f);
    if ((iVar6 >> 0x1f) * -0x1000000 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = sub_080C8AD0(iVar5 + iVar7,0x14);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    iVar5 = sub_080C8C38(((uVar4 * 2 >> 0x11 & 1) * 0x20 + 0x48) * 0x100,200);
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x58) = iVar5 * -0x14;
    *(undefined *)(param_1 + 0x12) = 0x22;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08029778(param_1,5);
    }
    if (*(char *)(param_1 + 0x12) == '\x14') {
LAB_0802bfa2:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_0802B670(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') goto LAB_0802bfa2;
    break;
  case 4:
    sub_08029778(param_1,6);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080297C0(param_1);
  default:
    goto switchD_0802be6c_caseD_6;
  }
  sub_080297C0(param_1);
switchD_0802be6c_caseD_6:
  return in_lr;
}


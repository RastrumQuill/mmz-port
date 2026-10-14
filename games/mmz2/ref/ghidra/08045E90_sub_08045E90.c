// sub_08045E90 at 0x08045E90 (thumb)

undefined4 sub_08045E90(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa003);
    uVar3 = sub_08071BDC(param_1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
    iVar4 = *(int *)(param_1 + 0xc0);
    if (iVar4 != 0) {
      *(undefined *)(iVar4 + 0xb4) = 1;
      iVar4 = sub_08072398(param_1,3);
      *(int *)(param_1 + 0xc0) = iVar4;
    }
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\x02') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0x15;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar5 = (uint)*(byte *)(param_1 + 0x71);
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_08045f42;
    *(undefined *)(param_1 + 0x12) = 10;
    uVar1 = 1;
  }
  else {
    uVar5 = 4;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_08045f42;
    sub_08003338((int)*(short *)(param_1 + 0xcc));
    *(short *)(param_1 + 0xcc) = 0;
    *(undefined *)(param_1 + 0x12) = 0x24;
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0xf) = uVar1;
LAB_08045f42:
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_1c = *(int *)(param_1 + 0x54) + -0x2500;
      cVar2 = *(char *)(param_1 + 0x13) + -9;
    }
    else {
      local_1c = *(int *)(param_1 + 0x54) + 0x2500;
      cVar2 = *(char *)(param_1 + 0x13) + '\t';
    }
    *(char *)(param_1 + 0x13) = cVar2;
    local_18 = *(int *)(param_1 + 0x58) + *(int *)(&DAT_0833a9e8 + uVar5 * 4);
    if ((*(byte *)(param_1 + 0x12) & 3) == 2) {
      sub_080B3AD8(&local_1c,2,*(undefined *)(param_1 + 0x13));
      uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar5 & 0x7fffffff;
      sub_080B3AD8(&local_1c,2,uVar5 * 2 >> 0x11 & 0xff);
    }
    else {
      uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar5 & 0x7fffffff;
      sub_080B3AD8(&local_1c,2,uVar5 * 2 >> 0x11 & 0xff);
    }
  }
  return in_lr;
}


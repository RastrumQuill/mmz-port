// sub_0804ADD4 at 0x0804ADD4 (thumb)

undefined4 sub_0804ADD4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    bVar1 = false;
    if ((*(byte *)(param_1 + 0xc1) & 1) != 0) {
      bVar1 = true;
      local_18 = *(int *)(param_1 + 0x54) + -0x2a00;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        local_18 = *(int *)(param_1 + 0x54) + 0x2c00;
      }
      local_14 = *(int *)(param_1 + 0x58) + -0x1900;
      sub_080B2484(1,&local_18);
      sub_080BD610(local_18,local_14);
    }
    if ((*(byte *)(param_1 + 0xc1) & 2) != 0) {
      bVar1 = true;
      local_18 = *(int *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0x4c00;
      sub_080B2484(1,&local_18);
      sub_080BD610(local_18,local_14);
    }
    if (bVar1) {
      sub_0800471C(0x2a);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    sub_08017700(param_1,0xa737);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804adea_caseD_1:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
LAB_0804af2a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0804adea_caseD_4:
    return in_lr;
  case 1:
    goto switchD_0804adea_caseD_1;
  case 2:
    uVar2 = sub_080C73F8(param_1,&DAT_0835f68c);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
      return in_lr;
    }
    DAT_020301b2 = DAT_020301b2 | 2;
    goto LAB_0804af2a;
  default:
    goto switchD_0804adea_caseD_4;
  }
}


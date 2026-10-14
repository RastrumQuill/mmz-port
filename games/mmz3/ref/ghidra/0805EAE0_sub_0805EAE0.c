// sub_0805EAE0 at 0x0805EAE0 (thumb)

undefined4 sub_0805EAE0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    sub_08017700(param_1,0x3201);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805eaf2_caseD_1:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
LAB_0805eba2:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0805eaf2_caseD_4:
    return in_lr;
  case 1:
    goto switchD_0805eaf2_caseD_1;
  case 2:
    uVar1 = sub_080C73F8(param_1,&DAT_083619b8);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
      return in_lr;
    }
    DAT_020301b2 = DAT_020301b2 | 2;
    goto LAB_0805eba2;
  default:
    goto switchD_0805eaf2_caseD_4;
  }
}


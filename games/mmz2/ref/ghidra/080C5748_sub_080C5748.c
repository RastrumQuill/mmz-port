// sub_080C5748 at 0x080C5748 (thumb)

undefined4 sub_080C5748(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202e6ce = 0x300;
    DAT_0202e4ce = 8;
    sub_08002638(&DAT_0843396c,0x11000);
    sub_08002AEC(&DAT_08433978,(DAT_0202e4ce - 5) * 0x20 + 0x200);
    sub_080127E4(param_1,0x9f00);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c575c_caseD_1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      sub_080127E4(param_1,0x9f01);
LAB_080c5896:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080c575c_caseD_6:
    return in_lr;
  case 1:
    goto switchD_080c575c_caseD_1;
  case 2:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    goto LAB_080c5896;
  case 3:
    DAT_0202e6cc = 0x380;
    DAT_0202e4cc = 9;
    sub_080027AC(&DAT_08433958,0x13000);
    sub_08002AEC(&DAT_08433964,(DAT_0202e4cc - 4) * 0x20 + 0x200);
    sub_080127E4(param_1,0x9e00);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x140;
    uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar1 < 0x1000) {
      return in_lr;
    }
    goto LAB_080c5896;
  case 5:
    sub_080128D4(param_1);
  default:
    goto switchD_080c575c_caseD_6;
  }
}


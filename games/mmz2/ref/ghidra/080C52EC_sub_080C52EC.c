// sub_080C52EC at 0x080C52EC (thumb)

undefined4 sub_080C52EC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0x9f02);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c52fe_caseD_1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      sub_080127E4(param_1,0x9f03);
LAB_080c5392:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080c52fe_caseD_6:
    return in_lr;
  case 1:
    goto switchD_080c52fe_caseD_1;
  case 2:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    goto LAB_080c5392;
  case 3:
    sub_080127E4(param_1,0x9e00);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x140;
    uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar1 < 0x1000) {
      return in_lr;
    }
    goto LAB_080c5392;
  case 5:
    sub_080128D4(param_1);
  default:
    goto switchD_080c52fe_caseD_6;
  }
}


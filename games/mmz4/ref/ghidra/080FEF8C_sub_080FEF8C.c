// sub_080FEF8C at 0x080FEF8C (thumb)

undefined4 sub_080FEF8C(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5700) {
      sub_0801CF00(param_1);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined *)(param_1 + 0x12) = 8;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined *)(param_1 + 0x12) = 8;
      goto LAB_080ff046;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_080ff046;
    sub_08002B10(0x184);
    uVar2 = 1;
  }
  else {
    DAT_0202daec = DAT_0202daec + 2;
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x56ff) {
      sub_0801CF00(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x800;
      *(undefined *)(param_1 + 0x12) = 0x30;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(param_1 + 0x12) = 0x30;
      goto LAB_080ff046;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_080ff046;
    uVar2 = 0;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
LAB_080ff046:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return in_lr;
}


// sub_0801C928 at 0x0801C928 (thumb)

undefined8 sub_0801C928(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 0:
    sub_080DEF5C(*(undefined2 *)(*(int *)(param_1 + 0xc) + 4),
                 *(undefined2 *)(*(int *)(param_1 + 0xc) + 2));
    break;
  case 1:
    sub_080DEF4C(*(undefined2 *)(*(int *)(param_1 + 0xc) + 4));
    break;
  case 2:
    if (DAT_0202f65a != 0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar2 = 1;
      goto LAB_0801ca28;
    }
    break;
  case 3:
    *(short *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2) =
         (short)*(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 4:
    sVar1 = *(short *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2);
    if (sVar1 != -1) {
      sub_080DEF5C(sVar1,*(undefined2 *)(*(int *)(param_1 + 0xc) + 4));
LAB_0801c9e8:
      *(undefined2 *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2) = 0xffff;
    }
    break;
  case 5:
    if (*(short *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2) != -1) {
      sub_080DEF4C();
      goto LAB_0801c9e8;
    }
    break;
  case 6:
    *(undefined2 *)(param_1 + 0x15c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 2) = 0xffff;
    break;
  case 7:
    DAT_0202f658 = DAT_0202f658 | 2;
  }
  uVar2 = 0;
LAB_0801ca28:
  return CONCAT44(in_lr,uVar2);
}


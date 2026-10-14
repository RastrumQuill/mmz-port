// sub_0809DE24 at 0x0809DE24 (thumb)

undefined8 sub_0809DE24(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if ((*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54)) &&
       (*(int *)(param_1 + 0x54) + -0x6c00 < *(int *)(DAT_0202dbf0 + 0x54))) {
      if ((*(int *)(DAT_0202dbf0 + 0x58) < *(int *)(param_1 + 0x58) + 0x2600) &&
         (*(int *)(param_1 + 0x58) + -0x2600 < *(int *)(DAT_0202dbf0 + 0x58))) {
        uVar1 = 1;
        *(undefined *)(param_1 + 0xd) = 1;
        *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
        goto LAB_0809deb6;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) &&
          (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54) + 0x6c00)) {
    if ((*(int *)(DAT_0202dbf0 + 0x58) < *(int *)(param_1 + 0x58) + 0x2600) &&
       (*(int *)(param_1 + 0x58) + -0x2600 < *(int *)(DAT_0202dbf0 + 0x58))) {
      uVar1 = 1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_0809deb6;
    }
  }
  uVar1 = 0;
LAB_0809deb6:
  return CONCAT44(in_lr,uVar1);
}


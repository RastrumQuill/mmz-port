// sub_080B29B4 at 0x080B29B4 (thumb)

undefined8 sub_080B29B4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if ((*(int *)(param_1 + 0x54) <= *(int *)(DAT_0202dbf0 + 0x54)) ||
       (*(int *)(DAT_0202dbf0 + 0x54) <= *(int *)(param_1 + 0x54) + -0x4800)) {
LAB_080b29fa:
      uVar1 = 0;
      goto LAB_080b29fc;
    }
  }
  else if ((*(int *)(DAT_0202dbf0 + 0x54) <= *(int *)(param_1 + 0x54)) ||
          (*(int *)(param_1 + 0x54) + 0x4800 <= *(int *)(DAT_0202dbf0 + 0x54))) goto LAB_080b29fa;
  uVar1 = 1;
LAB_080b29fc:
  return CONCAT44(in_lr,uVar1);
}


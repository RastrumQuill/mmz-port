// sub_0801F89C at 0x0801F89C (thumb)

undefined8 sub_0801F89C(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  while (((int)uVar2 < 0x18 &&
         ((piVar1 = (int *)sub_0801F864(uVar2 & 0xff), 0x2fff < (*piVar1 - *param_1) + 0x1800U ||
          (0x1fff < (piVar1[1] - param_1[1]) + 0x1000U))))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 == 0x18) {
    uVar2 = 4;
  }
  if (3 < (int)uVar2) {
    uVar2 = (uVar2 - 4 & 3) + 4;
    if (DAT_02030167 + -2 < 1) {
      DAT_02030167 = '\0';
    }
    else {
      DAT_02030167 = DAT_02030167 + -2;
    }
  }
  DAT_02030328 = *param_1;
  DAT_0203032c = param_1[1];
  return CONCAT44(in_lr,&UNK_0834967c + uVar2 * 8);
}


// sub_0806096C at 0x0806096C (thumb)

undefined8 sub_0806096C(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  if (*(int *)(iVar4 + 0x60) < -0x7f) {
    iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar1 = (*(int *)(iVar4 + 0x58) - iVar1) + -0x500;
    if ((*(int *)(iVar4 + 0x54) - *(int *)(param_1 + 0x54)) + 0x1000U < 0x2001) {
      piVar2 = (int *)&UNK_08361a08;
      iVar4 = 0;
      do {
        iVar3 = iVar4;
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -0x80;
        iVar4 = iVar3 + 1;
      } while (iVar1 <= -(*piVar2 + -0x900));
      iVar4 = iVar3 * 0x1000000 >> 0x18;
      goto LAB_08060a08;
    }
    piVar2 = (int *)&UNK_08361a08;
    iVar4 = 0;
    do {
      iVar3 = iVar4;
      piVar2 = piVar2 + 1;
      iVar4 = iVar3 + 1;
    } while (*piVar2 + -0x900 < 0x2001);
    if (iVar1 + (iVar3 + 8) * -0x80 < -0x1fff) {
      iVar4 = iVar3 * 0x1000000 >> 0x18;
      goto LAB_08060a08;
    }
  }
  iVar4 = -1;
LAB_08060a08:
  return CONCAT44(in_lr,iVar4);
}


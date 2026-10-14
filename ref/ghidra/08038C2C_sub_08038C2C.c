// sub_08038C2C at 0x08038C2C (thumb)

undefined8 sub_08038C2C(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar4 + 0x58) < -0x7f) {
    iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    iVar1 = (*(int *)(iVar4 + 0x50) - iVar1) + -0x500;
    if ((*(int *)(iVar4 + 0x4c) - *(int *)(param_1 + 0x4c)) + 0x1000U < 0x2001) {
      piVar2 = (int *)&UNK_082ad77c;
      iVar4 = 0;
      do {
        iVar3 = iVar4;
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -0x80;
        iVar4 = iVar3 + 1;
      } while (iVar1 <= -(*piVar2 + -0x900));
      iVar4 = iVar3 * 0x1000000 >> 0x18;
      goto LAB_08038cc8;
    }
    piVar2 = (int *)&UNK_082ad77c;
    iVar4 = 0;
    do {
      iVar3 = iVar4;
      piVar2 = piVar2 + 1;
      iVar4 = iVar3 + 1;
    } while (*piVar2 + -0x900 < 0x2001);
    if (iVar1 + (iVar3 + 8) * -0x80 < -0x1fff) {
      iVar4 = iVar3 * 0x1000000 >> 0x18;
      goto LAB_08038cc8;
    }
  }
  iVar4 = -1;
LAB_08038cc8:
  return CONCAT44(in_lr,iVar4);
}


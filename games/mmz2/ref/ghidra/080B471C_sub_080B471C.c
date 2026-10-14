// sub_080B471C at 0x080B471C (thumb)

undefined8 sub_080B471C(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = (int)*(short *)(param_2 + 2) + (uint)(*(ushort *)(param_2 + 6) >> 1);
  if (*(int *)(param_1 + 0x60) == 0) {
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar4 + 0x100);
    if (sVar2 != 0) {
      uVar3 = 1;
      goto LAB_080b47a0;
    }
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar4 + 0x800);
    if (sVar2 != 0) {
      iVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar4 + *(short *)(param_2 + 2);
      uVar3 = 1;
      goto LAB_080b47a0;
    }
  }
  cVar1 = sub_080B47A8(param_1,*(undefined4 *)(param_1 + 0x60),param_2);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar3 = 1;
  }
LAB_080b47a0:
  return CONCAT44(in_lr,uVar3);
}


// sub_080D4938 at 0x080D4938 (thumb)

undefined8 sub_080D4938(undefined param_1,undefined4 *param_2,undefined param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08006B84(DAT_0202f08c);
  if (iVar2 == 0) goto LAB_080d49da;
  *(undefined *)(iVar2 + 0x25) = 1;
  *(undefined *)(iVar2 + 9) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0x80d49e5;
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined *)(iVar2 + 0x22) = 0;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  param_2[1] = param_2[1] + -0x400;
  if (*(byte *)(iVar2 + 0x11) < 2) {
    sVar1 = sub_08008CFC(*param_2);
    if (sVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x54) = *param_2;
      uVar3 = param_2[1];
      goto LAB_080d49d4;
    }
    iVar4 = sub_080093C4(*param_2,param_2[1]);
    *(int *)(iVar2 + 0x58) = iVar4;
    if ((int)param_2[1] < iVar4) {
      uVar3 = sub_0800958C(*param_2);
      *(undefined4 *)(iVar2 + 0x58) = uVar3;
    }
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
  }
  else {
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    uVar3 = sub_080093C4(*param_2,param_2[1]);
LAB_080d49d4:
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
  }
  *(undefined *)(iVar2 + 0x10) = param_1;
  *(undefined *)(iVar2 + 0x11) = param_3;
LAB_080d49da:
  return CONCAT44(in_lr,iVar2);
}


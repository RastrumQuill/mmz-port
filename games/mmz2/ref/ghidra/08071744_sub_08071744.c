// sub_08071744 at 0x08071744 (thumb)

undefined8 sub_08071744(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xffff;
  param_3 = param_3 & 0xffff;
  if (*(int *)(param_1 + 0x68) == 0) {
    sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + param_2 + -1,
                         *(int *)(param_1 + 0x58) + param_3 + 0x100);
    if ((sVar2 == 0) &&
       (sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) - param_2,
                             *(int *)(param_1 + 0x58) + param_3 + 0x100), sVar2 == 0)) {
      sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + param_2 + -1,
                           *(int *)(param_1 + 0x58) + param_3 + 0x800);
      if ((sVar2 == 0) &&
         (sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) - param_2,
                               *(int *)(param_1 + 0x58) + param_3 + 0x800), sVar2 == 0))
      goto LAB_080717ca;
      iVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(uint *)(param_1 + 0x58) = iVar3 - param_3;
    }
  }
  else {
LAB_080717ca:
    if (*(int *)(param_1 + 0x2c) == 0) {
      cVar1 = sub_0807181C(param_1,&DAT_0833ee98,*(undefined4 *)(param_1 + 0x68));
      if (cVar1 == '\0') goto LAB_08071804;
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      cVar1 = sub_0807181C(param_1,&DAT_0833eea0,*(undefined4 *)(param_1 + 0x68));
      if (cVar1 == '\0') {
LAB_08071804:
        iVar3 = *(int *)(param_1 + 0x68) + 0x40;
        *(int *)(param_1 + 0x68) = iVar3;
        if (0x700 < iVar3) {
          *(undefined4 *)(param_1 + 0x68) = 0x700;
        }
        uVar4 = 0;
        goto LAB_08071816;
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  uVar4 = 1;
LAB_08071816:
  return CONCAT44(in_lr,uVar4);
}


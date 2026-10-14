// sub_08001574 at 0x08001574 (thumb)

undefined8 sub_08001574(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (DAT_02004d00 != 0) {
    piVar4 = &DAT_02004d04;
    piVar3 = &DAT_02004d08;
    do {
      if ((*piVar3 == param_1) && (*piVar4 == param_2)) goto LAB_080015ca;
      piVar4 = piVar4 + 2;
      piVar3 = piVar3 + 2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_02004d00);
  }
  if (DAT_02004d00 < 0x10) {
    (&DAT_02004d04)[uVar2 * 2] = param_2;
    (&DAT_02004d08)[uVar2 * 2] = param_1;
    DAT_02004d00 = DAT_02004d00 + 1;
LAB_080015ca:
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}


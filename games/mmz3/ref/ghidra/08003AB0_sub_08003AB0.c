// sub_08003AB0 at 0x08003AB0 (thumb)

undefined8 sub_08003AB0(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (DAT_02002180 != 0) {
    piVar4 = &DAT_02002188;
    piVar2 = &DAT_0200218c;
    do {
      if ((*piVar2 == param_1) && (*piVar4 == param_2)) goto LAB_08003b20;
      piVar4 = piVar4 + 3;
      piVar2 = piVar2 + 3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_02002180);
  }
  if (DAT_02002180 < 0x10) {
    (&DAT_02002188)[uVar3 * 3] = param_2;
    (&DAT_02002184)[uVar3 * 0xc] = (&DAT_02002184)[uVar3 * 0xc] & 0xfc;
    (&DAT_0200218c)[uVar3 * 3] = param_1;
    DAT_02002180 = DAT_02002180 + 1;
LAB_08003b20:
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}


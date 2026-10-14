// sub_080027AC at 0x080027AC (thumb)

undefined8 sub_080027AC(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (DAT_02000d60 != 0) {
    piVar4 = &DAT_02000d68;
    piVar2 = &DAT_02000d6c;
    do {
      if ((*piVar2 == param_1) && (*piVar4 == param_2)) goto LAB_0800281c;
      piVar4 = piVar4 + 3;
      piVar2 = piVar2 + 3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_02000d60);
  }
  if (DAT_02000d60 < 0x10) {
    (&DAT_02000d68)[uVar3 * 3] = param_2;
    (&DAT_02000d64)[uVar3 * 0xc] = (&DAT_02000d64)[uVar3 * 0xc] & 0xfc;
    (&DAT_02000d6c)[uVar3 * 3] = param_1;
    DAT_02000d60 = DAT_02000d60 + 1;
LAB_0800281c:
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}


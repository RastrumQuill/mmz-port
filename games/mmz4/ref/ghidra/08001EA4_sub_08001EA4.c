// sub_08001EA4 at 0x08001EA4 (thumb)

undefined8 sub_08001EA4(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (DAT_020007c0 != 0) {
    piVar4 = &DAT_020007c8;
    piVar2 = &DAT_020007cc;
    do {
      if ((*piVar2 == param_1) && (*piVar4 == param_2)) goto LAB_08001f14;
      piVar4 = piVar4 + 3;
      piVar2 = piVar2 + 3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_020007c0);
  }
  if (DAT_020007c0 < 0x10) {
    (&DAT_020007c8)[uVar3 * 3] = param_2;
    (&DAT_020007c4)[uVar3 * 0xc] = (&DAT_020007c4)[uVar3 * 0xc] & 0xfc;
    (&DAT_020007cc)[uVar3 * 3] = param_1;
    DAT_020007c0 = DAT_020007c0 + 1;
LAB_08001f14:
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}


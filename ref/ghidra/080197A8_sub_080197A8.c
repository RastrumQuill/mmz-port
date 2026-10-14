// sub_080197A8 at 0x080197A8 (thumb)

undefined8
sub_080197A8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,uint param_9,int param_10)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((param_9 & 0x80) == 0) {
    if (-0xc01 < param_8) goto LAB_0801989c;
  }
  else {
    iVar2 = *(int *)(param_1 + 4) + param_5;
    param_5 = *(int *)(param_2 + 4) + param_5;
    bVar1 = true;
    do {
      if (((&DAT_02005210)[param_10] & 0x80) == 0) {
        bVar1 = false;
      }
      piVar3 = (int *)(&DAT_020053b0)[param_10];
      if (piVar3 == (int *)0x0) {
        iVar5 = 0;
        iVar4 = 0;
      }
      else {
        iVar5 = *piVar3;
        iVar4 = piVar3[1];
      }
      param_8 = (&DAT_02005234)[param_10 * 2] - (uint)(ushort)(&DAT_02005370)[param_10];
      iVar4 = param_8 - iVar4;
      if (((!bVar1) ||
          (((param_5 <= iVar2 || (param_6 != 1)) &&
           (((param_8 <= iVar4 && ((iVar2 < iVar4 || (param_5 < iVar4)))) || (param_5 < param_8)))))
          ) && ((param_3 - (iVar5 + (&DAT_02005230)[param_10 * 2])) +
                (uint)(ushort)(&DAT_02005330)[param_10] <
                (uint)(ushort)(&DAT_02005330)[param_10] << 1)) {
        param_8 = param_8 - (param_4 + 1);
        goto LAB_0801989c;
      }
    } while ((bVar1) && (param_10 = sub_08008F34(param_10,param_3,param_4), -1 < param_10));
  }
  param_8 = 0;
LAB_0801989c:
  return CONCAT44(in_lr,param_8);
}


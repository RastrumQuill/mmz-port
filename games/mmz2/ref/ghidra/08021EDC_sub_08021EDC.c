// sub_08021EDC at 0x08021EDC (thumb)

ulonglong sub_08021EDC(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
                      int param_6,int param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((param_5 != 0) &&
     ((cVar1 = sub_08021CD0(param_1,param_2,param_6), cVar1 != '\0' ||
      (cVar1 = sub_08021E18(param_1,param_2,param_6), cVar1 != '\0')))) goto LAB_08021f96;
  iVar3 = -1;
  if (param_4 == 1) {
    iVar3 = 1;
  }
  uVar4 = (uint)(ushort)(&DAT_020011d8)[param_6 * 0xc];
  if (iVar3 < 0) {
    uVar4 = uVar4 - 1;
  }
  iVar5 = -iVar3 * uVar4 + (&DAT_020011dc)[param_6 * 6];
  iVar2 = iVar5 - *param_3;
  if (param_7 == 0xff) {
LAB_08021f60:
    *param_3 = iVar5;
  }
  else {
    if (iVar2 != 0) {
      if (-iVar3 * iVar2 < 1) goto LAB_08021f96;
      goto LAB_08021f60;
    }
    iVar2 = *(int *)(param_1 + 4) - ((&DAT_020011e0)[param_6 * 6] + 1);
    iVar3 = *(int *)(param_1 + 4) - ((&DAT_020011e0)[param_7 * 6] + 1);
    if (iVar3 * iVar3 <= iVar2 * iVar2) goto LAB_08021f96;
  }
  param_7 = param_6;
LAB_08021f96:
  return CONCAT44(in_lr,param_7) & 0xffffffff000000ff;
}


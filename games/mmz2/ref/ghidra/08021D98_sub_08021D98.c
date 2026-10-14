// sub_08021D98 at 0x08021D98 (thumb)

ulonglong sub_08021D98(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                      int param_6,int param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = sub_08021E18(param_1,param_2,param_6);
  if ((param_5 == 0) || (cVar1 != '\0')) {
    iVar2 = (&DAT_020011e0)[param_6 * 6] + (uint)(ushort)(&DAT_020011da)[param_6 * 0xc];
    if ((param_7 == 0xff) || (*(int *)(param_3 + 4) < iVar2)) {
      *(int *)(param_3 + 4) = iVar2;
    }
    else if ((iVar2 != *(int *)(param_3 + 4)) ||
            (iVar3 = *param_1 - (&DAT_020011dc)[param_6 * 6],
            iVar2 = *param_1 - (&DAT_020011dc)[param_7 * 6], iVar2 * iVar2 <= iVar3 * iVar3))
    goto LAB_08021e0a;
    param_7 = param_6;
  }
LAB_08021e0a:
  return CONCAT44(in_lr,param_7) & 0xffffffff000000ff;
}


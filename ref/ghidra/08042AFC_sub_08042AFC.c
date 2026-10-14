// sub_08042AFC at 0x08042AFC (thumb)

longlong sub_08042AFC(int param_1,uint param_2,undefined param_3)

{
  undefined extraout_var;
  int iVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_lr;
  int local_14;
  int local_10;
  
  iVar5 = *(int *)(param_1 + 0xb8 + ((param_2 & 0xff) + 2) * 4);
  sub_0804283C(param_1,param_2 & 0xff,param_3,&local_14);
  iVar4 = local_14 - *(int *)(iVar5 + 0x4c);
  iVar3 = local_10 - *(int *)(iVar5 + 0x50);
  iVar1 = iVar4;
  if (iVar4 < 0) {
    iVar1 = -iVar4;
  }
  if (iVar1 < 0x800) {
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = -iVar3;
    }
    if (iVar1 < 0x800) {
      uVar2 = 0;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar2 = 0x80;
      }
      *(undefined *)(iVar5 + 0x12) = uVar2;
      *(int *)(iVar5 + 0x4c) = local_14;
      *(int *)(iVar5 + 0x50) = local_10;
      goto LAB_08042b94;
    }
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + (iVar3 >> 2);
  *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + (iVar4 >> 2);
  sub_080C88E8((iVar4 >> 2) * -0x100 >> 0x10,(iVar3 >> 2) * -0x100 >> 0x10);
  *(undefined *)(iVar5 + 0x12) = extraout_var;
LAB_08042b94:
  return (ulonglong)in_lr << 0x20;
}


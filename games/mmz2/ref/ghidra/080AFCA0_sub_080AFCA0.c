// sub_080AFCA0 at 0x080AFCA0 (thumb)

undefined8 sub_080AFCA0(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = param_1[1];
  iVar3 = DAT_0202d004;
  if (0xa000 < (DAT_0202d004 - iVar2) + 0x5000U) {
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = iVar2 + 0xfff;
    }
    iVar4 = (iVar3 >> 0xc) * 0x1000;
    sVar1 = sub_08008354(*param_1,iVar4);
    iVar3 = iVar2;
    while (sVar1 == -0x8000) {
      sVar1 = sub_08008354(*param_1,iVar4 + -0x1000);
      iVar3 = iVar4;
      iVar4 = iVar4 + -0x1000;
    }
  }
  return CONCAT44(in_lr,iVar3);
}


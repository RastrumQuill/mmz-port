// sub_080219CC at 0x080219CC (thumb)

undefined8 sub_080219CC(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  uVar3 = *param_1;
  iVar2 = param_1[1];
  iVar1 = sub_0800901C(uVar3,iVar2);
  if (0 < iVar1) {
    uVar4 = sub_08008D80(uVar3,iVar2 + iVar1 + -1);
    uVar4 = uVar4 & 0xffff;
    if (param_3 != 0) {
      param_1[1] = iVar2 + iVar1;
    }
  }
  return CONCAT44(in_lr,uVar4);
}


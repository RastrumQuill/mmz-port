// sub_080259D8 at 0x080259D8 (thumb)

undefined8 sub_080259D8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = param_1 - param_2;
  iVar2 = iVar4 + param_3;
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = iVar2 + 0xff;
  }
  iVar2 = iVar2 + (iVar1 >> 8) * -0x100;
  iVar3 = iVar2 + 0x100;
  iVar1 = iVar3;
  if (iVar3 < 0) {
    iVar1 = iVar2 + 0x1ff;
  }
  if ((uint)(param_3 * 2) < (uint)(iVar3 + (iVar1 >> 8) * -0x100)) {
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = iVar4 + 0xff;
    }
    iVar4 = iVar4 + (iVar1 >> 8) * -0x100;
    iVar2 = iVar4 + 0x100;
    iVar1 = iVar2;
    if (iVar2 < 0) {
      iVar1 = iVar4 + 0x1ff;
    }
    iVar4 = -1;
    if (iVar2 + (iVar1 >> 8) * -0x100 < 0x80) {
      iVar4 = 1;
    }
    param_2 = param_2 + param_3 * iVar4;
    iVar1 = param_2;
    if (param_2 < 0) {
      iVar1 = param_2 + 0xff;
    }
    param_2 = param_2 + (iVar1 >> 8) * -0x100;
    param_1 = param_2 + 0x100;
    iVar1 = param_1;
    if (param_1 < 0) {
      iVar1 = param_2 + 0x1ff;
    }
    param_1 = param_1 + (iVar1 >> 8) * -0x100;
  }
  return CONCAT44(in_lr,param_1);
}


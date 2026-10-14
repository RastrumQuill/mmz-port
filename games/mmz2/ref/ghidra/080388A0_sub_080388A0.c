// sub_080388A0 at 0x080388A0 (thumb)

undefined8
sub_080388A0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((iVar3 != 0) && (*(int *)(&DAT_08335ed4 + (uint)*(byte *)(iVar3 + 9) * 4) == 0)) {
    iVar3 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x2a0);
  if ((iVar2 != 0) && (*(int *)(&DAT_08335ed4 + (uint)*(byte *)(iVar2 + 9) * 4) == 0)) {
    iVar2 = 0;
  }
  uVar4 = 0;
  if ((iVar3 == 0) && (iVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    if ((iVar2 != 0) && (iVar3 != iVar2)) {
      uVar4 = sub_080EF124(iVar2,param_1,param_2,param_3,param_4,param_5);
    }
    if (iVar3 != 0) {
      uVar1 = sub_080EF124(iVar3,param_1,param_2,param_3,param_4,param_5);
      uVar4 = uVar4 | uVar1;
    }
  }
  return CONCAT44(in_lr,uVar4);
}


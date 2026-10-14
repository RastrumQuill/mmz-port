// sub_08073984 at 0x08073984 (thumb)

undefined4 sub_08073984(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  iVar4 = 0x7fffffff;
  iVar5 = iVar1 + -0xa00;
  iVar6 = 1;
  do {
    iVar2 = sub_08008534(iVar5,uVar3);
    if (iVar2 + -0xe01 < iVar4) {
      iVar4 = iVar2 + -0xe01;
    }
    iVar5 = iVar5 + 0x1000;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  iVar1 = sub_08008534(iVar1 + 0xa00,uVar3);
  if (iVar1 + -0xe01 < iVar4) {
    iVar4 = iVar1 + -0xe01;
  }
  *(int *)(param_1 + 0x58) = iVar4 + 0xe00;
  return in_lr;
}


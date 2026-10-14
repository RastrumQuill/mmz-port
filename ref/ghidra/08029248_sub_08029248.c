// sub_08029248 at 0x08029248 (thumb)

undefined8 sub_08029248(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar1 = sub_0801901C(uVar3,0);
  iVar2 = sub_08019068(uVar3,0);
  iVar1 = iVar1 - *(int *)(param_1 + 0x4c);
  iVar2 = iVar2 - *(int *)(param_1 + 0x50);
  if (((iVar1 + 0x1000U < 0x2001) && (iVar2 + 0x1000U < 0x2001)) &&
     (iVar1 * iVar1 + iVar2 * iVar2 < 0x1000001)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}


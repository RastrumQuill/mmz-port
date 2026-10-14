// sub_08094B68 at 0x08094B68 (thumb)

undefined8 sub_08094B68(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(DAT_0202dbf0 + 0x58) + -0x1000;
  if (iVar2 < *(int *)(param_1 + 0x58) + -0x3800) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x58) + 0x800 < iVar2) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}


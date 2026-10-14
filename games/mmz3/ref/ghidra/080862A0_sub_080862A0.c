// sub_080862A0 at 0x080862A0 (thumb)

undefined8 sub_080862A0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(0,param_1,&DAT_08364d74);
    *(int *)(param_1 + 0xbc) = iVar1;
  }
  return CONCAT44(in_lr,1);
}


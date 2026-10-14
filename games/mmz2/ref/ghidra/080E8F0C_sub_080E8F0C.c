// sub_080E8F0C at 0x080E8F0C (thumb)

undefined8 sub_080E8F0C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar2 = sub_080DBBFC(param_1,(uint)bVar1);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 3) = 1;
    *(undefined *)(*(int *)(param_1 + 0x10) + 0x20a + (uint)bVar1) = 0;
    *(int *)(param_1 + 0x14) = iVar2;
  }
  return CONCAT44(in_lr,2);
}


// sub_080C37E0 at 0x080C37E0 (thumb)

undefined8 sub_080C37E0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar2 = sub_080BAA88(param_1,(uint)bVar1);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 3) = 1;
    *(undefined *)(*(int *)(param_1 + 0x10) + 0x180 + (uint)bVar1) = 0;
    *(int *)(param_1 + 0x14) = iVar2;
  }
  return CONCAT44(in_lr,2);
}


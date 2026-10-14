// sub_080E8B00 at 0x080E8B00 (thumb)

undefined8 sub_080E8B00(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 6) - 1;
  uVar1 = (undefined)iVar2;
  *(undefined *)(param_1 + 6) = uVar1;
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 1) = uVar1;
  }
  return CONCAT44(in_lr,1);
}


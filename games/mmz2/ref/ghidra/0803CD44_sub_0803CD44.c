// sub_0803CD44 at 0x0803CD44 (thumb)

undefined4 sub_0803CD44(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0x12) - 1;
  uVar1 = (undefined)iVar2;
  *(undefined *)(param_1 + 0x12) = uVar1;
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = uVar1;
  }
  sub_0803D17C(param_1);
  return in_lr;
}


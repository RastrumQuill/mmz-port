// sub_080C352C at 0x080C352C (thumb)

undefined4 sub_080C352C(int param_1)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = *(byte *)(param_1 + 6) - 1;
  uVar1 = (undefined)iVar2;
  *(undefined *)(param_1 + 6) = uVar1;
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 1) = uVar1;
  }
  return 1;
}


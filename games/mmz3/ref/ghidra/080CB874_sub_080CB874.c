// sub_080CB874 at 0x080CB874 (thumb)

undefined8 sub_080CB874(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(byte *)(param_1 + 0x10) < 4) {
      for (iVar2 = *(int *)(param_1 + 0x2c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
        *(undefined4 *)(iVar2 + 0xc) = 2;
        *(undefined4 *)(iVar2 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar2 + 9) * 4) + 8);
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = *(int *)(param_1 + 0x2c);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x2c) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x28) = iVar2;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CBC80(param_1);
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}


// sub_080A16C4 at 0x080A16C4 (thumb)

undefined4 sub_080A16C4(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    iVar3 = *(int *)(iVar4 + 0x54);
    if (iVar2 < iVar3) {
      *(undefined *)(iVar4 + 0xbb) = 0;
    }
    else if (iVar3 < iVar2) {
      *(undefined *)(iVar4 + 0xbb) = 1;
    }
    else {
      *(bool *)(iVar4 + 0xbb) = iVar3 < *(int *)(DAT_0202dbf0 + 0x54);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (DAT_0202dbf0 != 0)) {
      uVar1 = sub_0803A584(DAT_0202dbf0,6,4);
      *(undefined *)(iVar4 + 0xbc) = uVar1;
    }
  }
  return in_lr;
}


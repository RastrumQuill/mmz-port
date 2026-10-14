// sub_0806F024 at 0x0806F024 (thumb)

undefined4 sub_0806F024(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar4 = 1;
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    iVar2 = *(int *)(iVar3 + 0x54);
    if (iVar1 < iVar2) {
      *(undefined *)(iVar3 + 0xc2) = 0;
    }
    else {
      if ((iVar1 <= iVar2) && (uVar4 = 0, iVar2 < *(int *)(DAT_0202dbf0 + 0x54))) {
        uVar4 = 1;
      }
      *(undefined *)(iVar3 + 0xc2) = uVar4;
    }
  }
  return in_lr;
}


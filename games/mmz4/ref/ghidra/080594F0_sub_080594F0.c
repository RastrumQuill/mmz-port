// sub_080594F0 at 0x080594F0 (thumb)

undefined4 sub_080594F0(int param_1)

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
      *(undefined *)(iVar3 + 0xc0) = 0;
    }
    else {
      if ((iVar1 <= iVar2) && (uVar4 = 0, iVar2 < *(int *)(DAT_0202dbf0 + 0x54))) {
        uVar4 = 1;
      }
      *(undefined *)(iVar3 + 0xc0) = uVar4;
    }
  }
  return in_lr;
}


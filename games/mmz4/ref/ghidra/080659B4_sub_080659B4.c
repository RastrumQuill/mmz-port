// sub_080659B4 at 0x080659B4 (thumb)

undefined4 sub_080659B4(int param_1)

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
      *(undefined *)(iVar4 + 0xb6) = 0;
    }
    else if (iVar3 < iVar2) {
      *(undefined *)(iVar4 + 0xb6) = 1;
    }
    else {
      *(bool *)(iVar4 + 0xb6) = iVar3 < *(int *)(DAT_0202dbf0 + 0x54);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x20000) != 0) && (DAT_0202dbf0 != 0)) &&
       (*(char *)(iVar4 + 0xb4) == '\b')) {
      uVar1 = sub_0803A584(DAT_0202dbf0,8,0);
      *(undefined *)(iVar4 + 0xcf) = uVar1;
    }
  }
  return in_lr;
}


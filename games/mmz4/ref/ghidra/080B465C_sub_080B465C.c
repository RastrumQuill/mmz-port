// sub_080B465C at 0x080B465C (thumb)

undefined4 sub_080B465C(int param_1)

{
  undefined uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    return in_lr;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar4 + 0x10) == '\0') {
    sub_08006984(0x24);
  }
  else {
    sub_08006984(0x23);
  }
  *(bool *)(iVar4 + 0xbc) = *(int *)(iVar4 + 0x54) < *(int *)(iVar5 + 0x54);
  if (*(char *)(iVar5 + 8) == '\x01') {
    if (*(char *)(iVar4 + 0x10) == '\0') {
      if (*(char *)(iVar5 + 9) == '6') {
        puVar2 = (undefined *)(iVar4 + 0xb8);
        uVar1 = 3;
        goto LAB_080b46fe;
      }
    }
    else if (*(char *)(iVar5 + 9) == '5') {
      puVar2 = (undefined *)(iVar4 + 0xb8);
      uVar1 = 3;
      goto LAB_080b46fe;
    }
  }
  if ((*(uint *)(param_1 + 0x14) & 0x200) == 0) {
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x14) & 0x20000) == 0) {
    return in_lr;
  }
  if (DAT_0202dbf0 == 0) {
    return in_lr;
  }
  if (*(char *)(iVar4 + 0x10) == '\0') {
    uVar3 = 0xc;
  }
  else {
    uVar3 = 0xd;
  }
  uVar1 = sub_0803A584(DAT_0202dbf0,5,uVar3);
  puVar2 = (undefined *)(iVar4 + 0xbd);
LAB_080b46fe:
  *puVar2 = uVar1;
  return in_lr;
}


// sub_080FA2AC at 0x080FA2AC (thumb)

undefined4 sub_080FA2AC(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((*(char *)(iVar2 + 8) == '\x03') && (*(char *)(iVar2 + 9) == '@')) {
    *(undefined *)(iVar3 + 0xbe) = 1;
  }
  if (((*(char *)(iVar2 + 8) == '\0') && (*(int *)(iVar2 + 0x58) < *(int *)(iVar3 + 0x58))) &&
     (*(char *)(iVar2 + 0x1b9) != '\0')) {
    *(undefined *)(iVar3 + 0xbe) = 1;
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(iVar3 + 0xbc) = *(int *)(iVar3 + 0x54) < *(int *)(iVar2 + 0x54);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (DAT_0202dbf0 != 0)) {
      uVar1 = sub_0803A584(DAT_0202dbf0,3,0x10);
      *(undefined *)(iVar3 + 0xbd) = uVar1;
    }
  }
  return in_lr;
}


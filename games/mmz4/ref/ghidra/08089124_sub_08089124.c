// sub_08089124 at 0x08089124 (thumb)

undefined4 sub_08089124(int param_1,int *param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  *(int *)(iVar2 + 0xb4) = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(iVar2 + 0x54);
  sub_08006984(0x1b);
  if ((*(uint *)(param_1 + 0x14) & 0x40) != 0) {
    if ((*(uint *)(iVar2 + 0x8c) & 0x200) != 0) {
      *(int *)(iVar2 + 0xb4) = *param_2 - *(int *)(iVar2 + 0x54);
    }
    if ((((*(char *)(iVar2 + 0xc0) == '\0') &&
         (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 4) == '\x04')) &&
        ((*(byte *)(*(int *)(param_1 + 0xc) + 0x39) & 0x20) != 0)) &&
       (((*(byte *)(iVar3 + 10) ^ *(byte *)(iVar2 + 10)) >> 4 & 1) != 0)) {
      if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
        if (0 < *(int *)(iVar2 + 0x54) - *(int *)(iVar3 + 0x54)) goto LAB_080891ca;
      }
      else if (*(int *)(iVar2 + 0x54) - *(int *)(iVar3 + 0x54) < 0) {
LAB_080891ca:
        sub_0803A584(DAT_0202dbf0,4,1);
        *(char *)(iVar2 + 0xc0) = '\x01';
        *(int *)(iVar2 + 0xb4) = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(iVar2 + 0x54);
        *(undefined *)(iVar2 + 0xd) = 6;
        *(undefined *)(iVar2 + 0xe) = 0;
        if ((*(uint *)(iVar2 + 0x8c) & 0x200) == 0) {
          return in_lr;
        }
        *(undefined2 *)(iVar2 + 0xa4) = 1;
        return in_lr;
      }
    }
  }
  if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
     && (DAT_0202dbf0 != 0)) {
    uVar1 = sub_0803A584(DAT_0202dbf0,3,4);
    *(undefined *)(iVar2 + 0xc1) = uVar1;
  }
  return in_lr;
}


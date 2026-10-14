// sub_08029C78 at 0x08029C78 (thumb)

undefined4 sub_08029C78(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    uVar1 = sub_0800773C(*(int *)(param_1 + 0xc),param_1);
    sub_08019AC8(uVar1);
    *(undefined *)(iVar3 + 0x149) = 1;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 & 0x200) == 0) {
    if (*(char *)(iVar3 + 0xd) == '\a') {
      return in_lr;
    }
    if ((uVar2 & 0x400) != 0) {
      *(bool *)(iVar3 + 0x118) = *(int *)(iVar3 + 0x54) < *(int *)(iVar4 + 0x54);
      *(undefined *)(iVar3 + 0xd) = 7;
      *(undefined *)(iVar3 + 0xe) = 0;
      return in_lr;
    }
  }
  if ((((uVar2 & 1) != 0) && (*(char *)(iVar3 + 0xd) != '\x05')) && (*(char *)(iVar3 + 0xd) != '\v')
     ) {
    *(bool *)(iVar3 + 0x118) = *(int *)(iVar3 + 0x54) < *(int *)(iVar4 + 0x54);
    *(undefined *)(iVar3 + 0xd) = 4;
    *(undefined *)(iVar3 + 0xe) = 0;
  }
  return in_lr;
}


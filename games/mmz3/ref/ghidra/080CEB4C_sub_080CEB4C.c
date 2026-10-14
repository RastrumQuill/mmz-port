// sub_080CEB4C at 0x080CEB4C (thumb)

undefined4 sub_080CEB4C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(char *)(iVar2 + 8) == '\0')) &&
     (*(int *)(DAT_0202f5c0 + 0x58) <= *(int *)(iVar1 + 0x58))) {
    *(undefined *)(iVar1 + 0x12) = 1;
    if (*(char *)(iVar1 + 0xd) == '\0') {
      *(undefined *)(iVar1 + 0xd) = 1;
      *(undefined *)(iVar1 + 0xe) = 0;
    }
  }
  if ((((*(uint *)(param_1 + 0x14) & 0x20) != 0) && (*(short *)(iVar2 + 8) == 0x1106)) &&
     (*(char *)(iVar1 + 0xd) == '\x01')) {
    *(undefined *)(iVar1 + 0xd) = 2;
    *(undefined *)(iVar1 + 0xe) = 0;
  }
  return in_lr;
}


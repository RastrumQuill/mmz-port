// sub_080912A8 at 0x080912A8 (thumb)

undefined4 sub_080912A8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar1 + 0x10) == '\f') {
    if (((((*(uint *)(param_1 + 0x14) & 8) != 0) && (*(char *)(iVar2 + 8) == '\x02')) &&
        (*(char *)(iVar2 + 0xd) == '\x01')) &&
       ((((byte)(*(char *)(iVar2 + 0xe) - 1U) < 2 && (*(char *)(iVar2 + 9) == '\x15')) &&
        ((*(uint *)(iVar1 + 0xc) & 0xffff00) == 0x30800)))) {
      *(int *)(iVar1 + 0xb4) = *(int *)(iVar2 + 0x54) - *(int *)(iVar1 + 0x54);
      *(undefined *)(iVar1 + 0xd) = 9;
      *(undefined *)(iVar1 + 0xe) = 0;
    }
  }
  else {
    *(int *)(iVar1 + 0xb4) = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(iVar1 + 0x54);
  }
  return in_lr;
}


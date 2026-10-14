// sub_0807FA64 at 0x0807FA64 (thumb)

undefined4 sub_0807FA64(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 0x800) != 0) && (*(char *)(iVar1 + 0xd) != '\x04')) {
    *(undefined *)(iVar1 + 0xd) = 4;
    *(undefined *)(iVar1 + 0xe) = 0;
  }
  return in_lr;
}


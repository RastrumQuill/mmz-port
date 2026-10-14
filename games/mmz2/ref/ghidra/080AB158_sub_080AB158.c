// sub_080AB158 at 0x080AB158 (thumb)

undefined4 sub_080AB158(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((((*(char *)(*(int *)(param_1 + 0x2c) + 0xd) == '\x02') &&
       ((*(uint *)(param_1 + 0x14) & 4) != 0)) && (*(char *)(iVar1 + 8) == '\0')) &&
     (((*(uint *)(iVar1 + 0x8c) & 0x200) == 0 && (*(short *)(iVar1 + 0xa4) != 0)))) {
    sub_08007800(param_1,iVar1 + 0x74);
  }
  return in_lr;
}


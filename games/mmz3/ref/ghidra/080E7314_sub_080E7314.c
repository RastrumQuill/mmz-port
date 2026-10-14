// sub_080E7314 at 0x080E7314 (thumb)

undefined4 sub_080E7314(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar1 + 3) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x54) = 0xa00;
    *(undefined4 *)(param_1 + 0x58) = 0x900;
    *(uint *)(param_1 + 0x54) = (uint)*(byte *)(iVar1 + 0xe04) * 0x1000 + 0xa00;
  }
  else if (*(char *)(iVar1 + 3) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x54) = 0x800;
    *(undefined4 *)(param_1 + 0x58) = 0x1700;
    *(uint *)(param_1 + 0x58) = (uint)*(byte *)(iVar1 + 0xe05) * 0x1000 + 0x1700;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x10000;
  return in_lr;
}


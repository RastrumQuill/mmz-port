// sub_0806A174 at 0x0806A174 (thumb)

undefined4 sub_0806A174(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    iVar1 = *(int *)(param_1 + 0x2c);
    *(bool *)(iVar1 + 0xbc) = *(int *)(iVar1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(int *)(iVar1 + 0xc0) = *(int *)(iVar1 + 0x58) - *(int *)(iVar2 + 0x58);
  }
  return in_lr;
}


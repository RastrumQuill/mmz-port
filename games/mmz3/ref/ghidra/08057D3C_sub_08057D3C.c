// sub_08057D3C at 0x08057D3C (thumb)

undefined4 sub_08057D3C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(int *)(param_1 + 0xb8) == 0)) {
    iVar1 = sub_080253D8(0x19,param_1,&DAT_0836123c);
    *(int *)(param_1 + 0xb8) = iVar1;
  }
  return in_lr;
}


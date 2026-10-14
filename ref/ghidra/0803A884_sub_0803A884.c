// sub_0803A884 at 0x0803A884 (thumb)

ulonglong sub_0803A884(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x4c) - *(int *)(*(int *)(param_1 + 0xcc) + 0x4c);
  iVar1 = *(int *)(param_1 + 0x50) - (*(int *)(*(int *)(param_1 + 0xcc) + 0x50) + 0x3400);
  iVar2 = iVar2 * iVar2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar1 = iVar1 * iVar1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = sub_080C88FC((iVar2 >> 8) + (iVar1 >> 8));
  iVar2 = sub_080C8AD0((uint)(iVar2 << 0x10) >> 0xc,0x14);
  return CONCAT44(in_lr,(iVar2 >> 8) + 1) & 0xffffffff000000ff;
}


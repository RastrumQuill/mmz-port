// sub_08062230 at 0x08062230 (thumb)

undefined4 sub_08062230(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffc;
  iVar1 = *(int *)(param_1 + 0x60) * 0xe0;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar1 >> 8;
  iVar1 = *(int *)(param_1 + 0x58) + (iVar1 >> 8);
  *(int *)(param_1 + 0x58) = iVar1;
  iVar2 = *(int *)(param_1 + 0xbc);
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x58) = iVar2;
  }
  iVar1 = *(int *)(param_1 + 0xbc) + 0xf000;
  if (iVar1 < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = iVar1;
  }
  return in_lr;
}


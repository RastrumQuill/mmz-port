// sub_0803AC44 at 0x0803AC44 (thumb)

undefined4 sub_0803AC44(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xbc) + 0x800;
  for (iVar2 = *(int *)(param_1 + 0x24); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
    *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + *(int *)(iVar2 + 0x54);
    *(int *)(iVar2 + 0x50) = *(int *)(iVar2 + 0x50) + *(int *)(iVar2 + 0x58);
    iVar1 = *(int *)(iVar2 + 0x58) + 0x40;
    *(int *)(iVar2 + 0x58) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(iVar2 + 0x58) = 0x700;
    }
    if (iVar3 < *(int *)(iVar2 + 0x50)) {
      *(int *)(iVar2 + 0x50) = iVar3;
    }
  }
  return in_lr;
}


// sub_080B5CB0 at 0x080B5CB0 (thumb)

undefined4 sub_080B5CB0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_38 [4];
  int local_28;
  int local_24;
  
  local_38[0] = -0xc00;
  local_38[1] = 0xfffff000;
  local_38[2] = 0xc00;
  local_38[3] = 0xfffff000;
  iVar3 = *(int *)(param_1 + 0x28);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  uVar1 = (uVar1 * 2 >> 0x11 & 1) + 2;
  if (uVar1 != 0) {
    do {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_28 = *(int *)(iVar3 + 0x54) + local_38[(uVar1 & 1) * 2] +
                 (uVar2 * 2 >> 0x11 & 0x1f) * 0x100 + -0x1000;
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      local_24 = *(int *)(iVar3 + 0x58) + local_38[(uVar1 & 1) * 2 + 1] +
                 (uVar2 * 2 >> 0x11 & 0x1f) * 0x100 + -0x1000;
      sub_080E7DDC(iVar3,local_38 + 4,0,0);
      uVar1 = uVar1 - 1;
    } while (0 < (int)uVar1);
  }
  return in_lr;
}


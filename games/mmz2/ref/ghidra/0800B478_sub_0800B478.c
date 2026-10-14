// sub_0800B478 at 0x0800B478 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800B478(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = (uint)_DAT_0202e020;
  local_10 = 0xc4000000;
  local_c = 0x7800f000;
  if (uVar2 < 0x60) {
    iVar1 = -0x48;
  }
  else if (uVar2 < 0x80) {
    iVar1 = (uVar2 - 0x60) * (uVar2 - 0x60) * 0x48;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x3ff;
    }
    iVar1 = -0x48 - (iVar1 >> 10);
  }
  else if (uVar2 < 0xe0) {
    iVar1 = -0x90;
  }
  else {
    iVar1 = (uVar2 - 0xe0) * 0x48;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x1f;
    }
    iVar1 = (iVar1 >> 5) + -0x90;
  }
  *(int *)(param_1 + 0x50) = iVar1;
  local_18 = (*(int *)(param_1 + 0x34) + 0x78) * 0x100;
  local_14 = *(int *)(param_1 + 0x50) * -0x100 + 0x10000;
  if (0x171800 < local_18) {
    local_18 = 0x171800;
  }
  if (local_18 < 0x143000) {
    local_18 = 0x143000;
  }
  sub_080099BC(0xe001,0xf,&local_18,&local_10);
  if (uVar2 == 0x80) {
    sub_08015518(8,&local_18);
    sub_080032EC(0x60);
  }
  return in_lr;
}


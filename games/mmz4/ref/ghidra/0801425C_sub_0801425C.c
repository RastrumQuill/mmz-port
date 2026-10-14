// sub_0801425C at 0x0801425C (thumb)

undefined4 sub_0801425C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    return in_lr;
  }
  uVar1 = *(uint *)(param_1 + 0x5c) << 0x10;
  uVar2 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (uVar2 == 0x38) {
    (&DAT_02000a04)[uVar1 >> 0x14] = (&DAT_02000a04)[uVar1 >> 0x14] & 0xfffc | 3;
    *(undefined4 *)(param_1 + 0x4c) = 0x2d0;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
  }
  else {
    if (uVar2 != 0x24) goto LAB_080142c2;
    (&DAT_02000a04)[uVar1 >> 0x14] = (&DAT_02000a04)[uVar1 >> 0x14] & 0xfffc | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0x1e0;
    *(undefined4 *)(param_1 + 0x44) = 0xe0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0x100;
LAB_080142c2:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


// sub_080E7B24 at 0x080E7B24 (thumb)

/* WARNING: Removing unreachable block (ram,0x080e7b4e) */
/* WARNING: Removing unreachable block (ram,0x080e7b66) */

undefined4 sub_080E7B24(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CF00(param_1,*(byte *)(param_1 + 0x11) + 0xe901);
  *(undefined4 *)(param_1 + 0x5c) = 0x5d;
  *(undefined4 *)(param_1 + 0x60) = 0x174;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe8c;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffa3;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  }
  *(undefined *)(param_1 + 0xd) = 3;
  return in_lr;
}


// sub_080E7A50 at 0x080E7A50 (thumb)

/* WARNING: Removing unreachable block (ram,0x080e7acc) */
/* WARNING: Removing unreachable block (ram,0x080e7a80) */
/* WARNING: Removing unreachable block (ram,0x080e7a98) */
/* WARNING: Removing unreachable block (ram,0x080e7ae4) */

undefined4 sub_080E7A50(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CF00(param_1,*(byte *)(param_1 + 0x11) + 0xe905);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x2d9;
    iVar1 = 0x376;
    *(undefined4 *)(param_1 + 0x60) = 0x376;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffd27;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x5d;
    iVar1 = 0x17d;
    *(undefined4 *)(param_1 + 0x60) = 0x17d;
  }
  iVar1 = iVar1 * -0x100;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar1 >> 8;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0xd) = 2;
  return in_lr;
}


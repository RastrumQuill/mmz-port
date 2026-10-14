// sub_080C7C28 at 0x080C7C28 (thumb)

undefined4 sub_080C7C28(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    if (1 < *(byte *)(iVar1 + 0xc)) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (iVar1 != 0) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_08862a44 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  sub_080C7EC4(param_1);
  return in_lr;
}


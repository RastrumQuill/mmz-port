// sub_080C5308 at 0x080C5308 (thumb)

undefined4 sub_080C5308(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08862350 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C5A6C(param_1);
  }
  return in_lr;
}


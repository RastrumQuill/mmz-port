// sub_080CAD4C at 0x080CAD4C (thumb)

undefined4 sub_080CAD4C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08862f54 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CAD94(param_1);
  }
  return in_lr;
}


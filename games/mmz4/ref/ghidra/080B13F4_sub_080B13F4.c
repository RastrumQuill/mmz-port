// sub_080B13F4 at 0x080B13F4 (thumb)

undefined4 sub_080B13F4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080B1644(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885ff2c + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_0801CFF0(param_1);
    }
    else {
      sub_080B169C(param_1);
      sub_0801D1F4(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B1464(param_1);
  }
  return in_lr;
}


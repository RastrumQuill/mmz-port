// sub_080A0570 at 0x080A0570 (thumb)

undefined4 sub_080A0570(int param_1)

{
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083678bc + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083678d0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}


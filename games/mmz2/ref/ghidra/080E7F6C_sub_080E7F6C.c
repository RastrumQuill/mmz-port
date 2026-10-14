// sub_080E7F6C at 0x080E7F6C (thumb)

undefined4 sub_080E7F6C(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0835e538 + (uint)*(byte *)(param_1 + 2) * 4));
  sub_080E83EC(param_1);
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_08002EA0(0x1d);
    sub_08002EA0(0x1e);
  }
  sub_08002824(param_1 + 0xee0,(DAT_02000f96 & 0x1f00) << 3,0x1000);
  return in_lr;
}


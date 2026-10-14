// sub_0803E8A0 at 0x0803E8A0 (thumb)

undefined4 sub_0803E8A0(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08339ef0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
    sub_080032EC(0x2b);
  }
  return in_lr;
}


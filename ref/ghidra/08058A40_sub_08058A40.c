// sub_08058A40 at 0x08058A40 (thumb)

undefined4 sub_08058A40(int param_1)

{
  undefined4 in_lr;
  
  sub_08058A7C();
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afbcc + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}


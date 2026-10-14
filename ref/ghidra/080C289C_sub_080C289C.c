// sub_080C289C at 0x080C289C (thumb)

undefined4 sub_080C289C(int param_1)

{
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cbf4c + (uint)*(byte *)(param_1 + 2) * 4));
  sub_08001574(param_1 + 0xae0,(DAT_02004f36 & 0x1f00) << 3);
  return in_lr;
}


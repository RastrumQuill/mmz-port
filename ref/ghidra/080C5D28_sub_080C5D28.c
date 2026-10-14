// sub_080C5D28 at 0x080C5D28 (thumb)

undefined4 sub_080C5D28(int param_1)

{
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cc3d0 + (uint)*(byte *)(param_1 + 2) * 4));
  sub_080B498C(&DAT_0202b5a0,(int)*(char *)(param_1 + 0x9e5),*(undefined4 *)(param_1 + 0x9e0));
  sub_08001574(param_1 + 0xae0,(DAT_02004f36 & 0x1f00) << 3);
  return in_lr;
}


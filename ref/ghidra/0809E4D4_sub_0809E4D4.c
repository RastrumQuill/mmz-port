// sub_0809E4D4 at 0x0809E4D4 (thumb)

undefined4 sub_0809E4D4(int param_1)

{
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5504 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5514 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (*(char *)(param_1 + 0xd) == '\x02') {
    sub_0809E514(param_1);
  }
  return in_lr;
}


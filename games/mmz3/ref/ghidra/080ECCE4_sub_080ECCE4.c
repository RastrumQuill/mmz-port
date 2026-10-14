// sub_080ECCE4 at 0x080ECCE4 (thumb)

undefined4 sub_080ECCE4(int param_1)

{
  undefined4 in_lr;
  
  sub_08017C40();
  sub_0800393C(&DAT_085d849c,(uint)DAT_0202fb3a * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d84a8,(DAT_0202f93a - 2) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d84b0,(DAT_0202fb3c - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d84bc,(DAT_0202f93c - 3) * 0x20 + 0x200);
  *(undefined2 *)(param_1 + 0x240) = 0;
  *(undefined *)(param_1 + 0x243) = 10;
  return in_lr;
}


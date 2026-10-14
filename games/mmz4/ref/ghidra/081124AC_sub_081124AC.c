// sub_081124AC at 0x081124AC (thumb)

undefined4 sub_081124AC(int param_1)

{
  undefined4 in_lr;
  
  sub_08006D80();
  sub_081284E4(param_1 + 0x1ee0,&DAT_02000a40,0);
  sub_081284E8(param_1 + 0x1ee0,&DAT_02000a40,&DAT_04000002);
  sub_081284E4(param_1 + 0x1ee8,&DAT_02000a50,0);
  sub_081284E8(param_1 + 0x1ee8,&DAT_02000a50,&DAT_04000004);
  sub_081284E4(param_1 + 0x2058,&DAT_06014000,0x1000);
  sub_081284E4(param_1 + 0x6058,&DAT_03002cc0,0x80);
  DAT_03002ac0 = (short)*(undefined4 *)(param_1 + 0x6258);
  return in_lr;
}


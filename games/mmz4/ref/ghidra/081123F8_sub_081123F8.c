// sub_081123F8 at 0x081123F8 (thumb)

undefined4 sub_081123F8(int param_1)

{
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0x6258) = (uint)DAT_03002ac0;
  sub_08006D3C();
  sub_081284E4(&DAT_02000a40,param_1 + 0x1ee0,0);
  sub_081284E8(&DAT_02000a40,param_1 + 0x1ee0,&DAT_04000002);
  DAT_02000a40 = 0;
  sub_081284E4(&DAT_02000a50,param_1 + 0x1ee8,0);
  sub_081284E8(&DAT_02000a50,param_1 + 0x1ee8,&DAT_04000004);
  DAT_02000a50 = 0;
  DAT_02000a5e = 0xff;
  sub_081284E4(&DAT_06014000,param_1 + 0x2058,0x1000);
  sub_081284E4(&DAT_03002cc0,param_1 + 0x6058,0x80);
  return in_lr;
}


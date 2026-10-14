// sub_080C222C at 0x080C222C (thumb)

undefined4 sub_080C222C(int param_1)

{
  undefined4 in_lr;
  
  sub_08006328();
  FUN_080c88ec(param_1 + 0x1af4,&DAT_02004f70,0);
  FUN_080c88f0(param_1 + 0x1af4,&DAT_02004f70,&DAT_04000002);
  FUN_080c88ec(param_1 + 0x1afc,&DAT_02004f80,0);
  FUN_080c88f0(param_1 + 0x1afc,&DAT_02004f80,&DAT_04000004);
  FUN_080c88ec(param_1 + 0x1c90,&DAT_06014000,0x1000);
  FUN_080c88ec(param_1 + 0x5c90,&DAT_030019a0,0x80);
  FUN_080c88ec(param_1 + 0x5e90,(DAT_02004f36 & 0x1f00) * 8 + 0x6000000,0x400);
  return in_lr;
}


// sub_080E3E98 at 0x080E3E98 (thumb)

undefined4 sub_080E3E98(int param_1)

{
  undefined4 in_lr;
  
  sub_08008188();
  sub_080EEF68(param_1 + 0x1ee8,&DAT_02000fd0,0);
  sub_080EEF6C(param_1 + 0x1ee8,&DAT_02000fd0,&DAT_04000002);
  sub_080EEF68(param_1 + 0x1ef0,&DAT_02000fe0,0);
  sub_080EEF6C(param_1 + 0x1ef0,&DAT_02000fe0,&DAT_04000004);
  sub_080EEF68(param_1 + 0x2050,&DAT_06014000,0x1000);
  sub_080EEF68(param_1 + 0x6050,&DAT_03002cc0,0x80);
  sub_080EEF68(param_1 + 0x6250,(DAT_02000f96 & 0x1f00) * 8 + 0x6000000,0x400);
  return in_lr;
}


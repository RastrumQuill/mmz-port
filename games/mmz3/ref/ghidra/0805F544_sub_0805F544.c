// sub_0805F544 at 0x0805F544 (thumb)

undefined4 sub_0805F544(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08060890(param_1);
  uVar1 = sub_080AF630(param_1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return in_lr;
}


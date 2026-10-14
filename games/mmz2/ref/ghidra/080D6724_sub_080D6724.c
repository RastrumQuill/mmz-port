// sub_080D6724 at 0x080D6724 (thumb)

undefined4 sub_080D6724(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_080378B4(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,0);
  uVar1 = sub_080D635C(param_1,0,param_1 + 0x54,param_1 + 0xb8,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  sub_080128D4(param_1);
  return in_lr;
}


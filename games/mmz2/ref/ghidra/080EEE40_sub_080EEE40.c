// sub_080EEE40 at 0x080EEE40 (thumb)

undefined4 sub_080EEE40(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = **(byte **)(param_2 + 0x40);
  *(byte **)(param_2 + 0x40) = *(byte **)(param_2 + 0x40) + 1;
  sub_080EF11C(param_1,param_2,*(undefined4 *)(&DAT_080ffd4c + (uint)bVar1 * 4));
  return in_lr;
}


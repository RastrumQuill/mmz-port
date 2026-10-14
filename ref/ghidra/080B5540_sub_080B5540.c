// sub_080B5540 at 0x080B5540 (thumb)

undefined4 sub_080B5540(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08018FF8(*(undefined4 *)(param_1 + 0x20),param_1 + 0x4c,0);
  uVar1 = sub_080B52CC(param_1,0,param_1 + 0x4c,param_1 + 0xc0,0);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  sub_080B3E80(param_1);
  return in_lr;
}


// sub_0805FF44 at 0x0805FF44 (thumb)

undefined4 sub_0805FF44(int param_1)

{
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  *(undefined *)(param_1 + 0xf) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffa40;
  sub_08060890(param_1);
  *(undefined4 *)(param_1 + 0xc4) = 2;
  sub_0805FF7C(param_1);
  return in_lr;
}


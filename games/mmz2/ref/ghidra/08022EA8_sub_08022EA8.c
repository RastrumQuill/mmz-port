// sub_08022EA8 at 0x08022EA8 (thumb)

undefined4
sub_08022EA8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined2 param_7,undefined param_8)

{
  undefined4 in_lr;
  
  sub_080EF11C(param_1,param_2,*(undefined4 *)(&DAT_08333b78 + (uint)*(byte *)(param_1 + 9) * 4));
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  *(undefined4 *)(param_1 + 0x60) = param_4;
  *(undefined4 *)(param_1 + 100) = param_5;
  *(undefined4 *)(param_1 + 0x68) = param_6;
  *(undefined2 *)(param_1 + 0x18e) = param_7;
  *(undefined *)(param_1 + 400) = param_8;
  return in_lr;
}


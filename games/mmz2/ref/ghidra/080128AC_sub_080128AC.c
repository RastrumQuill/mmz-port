// sub_080128AC at 0x080128AC (thumb)

undefined4 sub_080128AC(int param_1,undefined2 param_2,undefined param_3,undefined param_4)

{
  undefined4 in_lr;
  
  sub_080127E4(param_1,param_2);
  *(undefined *)(param_1 + 0x71) = param_3;
  *(undefined *)(param_1 + 0x72) = param_4;
  return in_lr;
}


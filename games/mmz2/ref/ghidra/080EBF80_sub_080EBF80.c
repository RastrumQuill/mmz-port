// sub_080EBF80 at 0x080EBF80 (thumb)

undefined4 sub_080EBF80(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined *)(param_1 + 0xddc) = 4;
  sub_080EBF9C();
  return in_lr;
}


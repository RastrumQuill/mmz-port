// sub_080378FC at 0x080378FC (thumb)

undefined4 sub_080378FC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_0803A3BC(param_1,0x2c00);
  sub_0803A3FC(param_1,0x2c00);
  cVar1 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x101) = 2;
    *(undefined *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


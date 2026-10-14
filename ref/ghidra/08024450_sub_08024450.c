// sub_08024450 at 0x08024450 (thumb)

undefined4 sub_08024450(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  sub_08018C20(param_1,0x20,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  *(undefined *)(param_1 + 0x121) = 6;
  sub_08027188(param_1,0xc,0);
  return in_lr;
}


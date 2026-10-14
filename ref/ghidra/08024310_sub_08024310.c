// sub_08024310 at 0x08024310 (thumb)

undefined4 sub_08024310(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  sub_08018C20(param_1,0x20,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  *(undefined *)(param_1 + 0x11f) = 0;
  *(undefined *)(param_1 + 0x120) = 0;
  *(undefined *)(param_1 + 0x121) = 2;
  return in_lr;
}


// sub_08022794 at 0x08022794 (thumb)

undefined4 sub_08022794(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  sub_08018C20(param_1,0x87,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  sub_08028DA0(param_1,1,0);
  return in_lr;
}


// sub_0802EE98 at 0x0802EE98 (thumb)

undefined4 sub_0802EE98(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801EA38(param_1,0x42,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  *(undefined *)(param_1 + 0x2b7) = 0;
  *(undefined *)(param_1 + 0x2b8) = 0;
  *(undefined *)(param_1 + 0x2b9) = 2;
  return in_lr;
}


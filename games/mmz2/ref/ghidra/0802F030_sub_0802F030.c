// sub_0802F030 at 0x0802F030 (thumb)

undefined4 sub_0802F030(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801EA38(param_1,0x42,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  *(undefined *)(param_1 + 0x2b9) = 6;
  sub_08033A80(param_1,4,1,0,0x13,*(undefined *)(param_1 + 0x215),0);
  return in_lr;
}


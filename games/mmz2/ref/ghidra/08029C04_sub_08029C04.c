// sub_08029C04 at 0x08029C04 (thumb)

undefined4 sub_08029C04(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0801EA38(param_1,0x15,1,1);
  }
  sub_08029BDC(param_1);
  return in_lr;
}


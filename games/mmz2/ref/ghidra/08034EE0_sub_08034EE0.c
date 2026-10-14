// sub_08034EE0 at 0x08034EE0 (thumb)

undefined4 sub_08034EE0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 2;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801E9FC(param_1,0x41);
  sub_08033A80(param_1,3,1,0,0x10,*(undefined *)(param_1 + 0x215),0);
  return in_lr;
}


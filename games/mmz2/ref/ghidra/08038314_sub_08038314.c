// sub_08038314 at 0x08038314 (thumb)

undefined4 sub_08038314(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 10;
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 3;
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 0;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  sub_0801E9FC(param_1,*(undefined *)(param_1 + 0x180));
  sub_08038958(param_1);
  return in_lr;
}


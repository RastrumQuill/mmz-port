// sub_080290BC at 0x080290BC (thumb)

undefined4 sub_080290BC(int param_1)

{
  undefined4 in_lr;
  
  if (DAT_0202ed84 == 0) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    DAT_030032e0 = DAT_030032e0 & 0xfe;
  }
  sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
               *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
  return in_lr;
}


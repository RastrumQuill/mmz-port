// sub_0802E058 at 0x0802E058 (thumb)

undefined4 sub_0802E058(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  *(undefined2 *)(param_1 + 0x2c2) = 0x4000;
  *(undefined *)(param_1 + 0x2b7) = 8;
  sub_0801E9FC(param_1,(&DAT_08335c9a)[*(byte *)(param_1 + 0x177)]);
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) | 0x80;
  sub_080360E0(param_1);
  return in_lr;
}


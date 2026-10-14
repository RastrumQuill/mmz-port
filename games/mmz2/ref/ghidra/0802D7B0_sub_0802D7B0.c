// sub_0802D7B0 at 0x0802D7B0 (thumb)

undefined4 sub_0802D7B0(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  *(undefined *)(param_1 + 0x2b7) = 0;
  uVar1 = 0;
  if (*(char *)(param_1 + 0x1fc) != '\x05') {
    uVar1 = 0xff;
  }
  *(undefined *)(param_1 + 0x2b8) = uVar1;
  sub_0801E9FC(param_1,0x3b);
  return in_lr;
}


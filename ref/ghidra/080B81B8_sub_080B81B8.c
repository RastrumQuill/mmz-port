// sub_080B81B8 at 0x080B81B8 (thumb)

undefined4 sub_080B81B8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xcd) = 0;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return in_lr;
}


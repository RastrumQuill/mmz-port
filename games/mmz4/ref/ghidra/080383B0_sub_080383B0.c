// sub_080383B0 at 0x080383B0 (thumb)

undefined4 sub_080383B0(int param_1)

{
  undefined4 in_lr;
  
  if (2 < *(byte *)(param_1 + 0xc)) {
    *(undefined *)(param_1 + 0xc) = 2;
  }
  if (2 < *(byte *)(param_1 + 0xd)) {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0x32) = 0;
  return in_lr;
}


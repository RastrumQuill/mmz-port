// sub_0807FC20 at 0x0807FC20 (thumb)

undefined4 sub_0807FC20(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
      uVar1 = 6;
    }
    else {
      uVar1 = 7;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


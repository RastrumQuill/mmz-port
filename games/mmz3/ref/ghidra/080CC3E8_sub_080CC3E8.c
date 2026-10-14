// sub_080CC3E8 at 0x080CC3E8 (thumb)

undefined4 sub_080CC3E8(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 8) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30)) {
    sub_0800471C(0x40);
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


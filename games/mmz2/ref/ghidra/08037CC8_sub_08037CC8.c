// sub_08037CC8 at 0x08037CC8 (thumb)

undefined4 sub_08037CC8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x2b4) = *(undefined *)(param_1 + 0x212);
  *(undefined *)(param_1 + 0x2b5) = *(undefined *)(param_1 + 0x213);
  sub_0801E054(*(undefined *)(param_1 + 0x215));
  return in_lr;
}


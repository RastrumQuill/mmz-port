// sub_0803CE30 at 0x0803CE30 (thumb)

undefined4 sub_0803CE30(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08338d30 + (uint)*(byte *)(param_1 + 0xe) * 4));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    sub_080128D4(param_1);
  }
  return in_lr;
}


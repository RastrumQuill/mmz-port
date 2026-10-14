// sub_0800FD40 at 0x0800FD40 (thumb)

undefined4 sub_0800FD40(int param_1)

{
  undefined4 in_lr;
  
  if ((((DAT_02023690 != 0) && ((DAT_02004ca8 & 8) != 0)) && (*(int *)(param_1 + 0x1c) == 0)) &&
     ((*(char *)(param_1 + 0x174) == '\x01' && (*(undefined **)(param_1 + 0x14) == &DAT_082a0b8c))))
  {
    sub_0800FBF4(1);
    sub_080BF0A4(&DAT_020236e0,0x200);
  }
  return in_lr;
}


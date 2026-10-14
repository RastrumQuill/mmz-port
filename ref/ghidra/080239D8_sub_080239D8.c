// sub_080239D8 at 0x080239D8 (thumb)

undefined4 sub_080239D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
    sub_08018C20(param_1,0x1c,6,1);
    sub_08023888(param_1);
  }
  return in_lr;
}


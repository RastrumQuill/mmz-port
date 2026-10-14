// sub_08040150 at 0x08040150 (thumb)

undefined4 sub_08040150(int param_1)

{
  undefined4 in_lr;
  
  sub_080297C0();
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


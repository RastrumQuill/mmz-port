// sub_08052FD8 at 0x08052FD8 (thumb)

undefined4 sub_08052FD8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((0 < *(int *)(param_1 + 0x58)) &&
     (cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x40),
     cVar1 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


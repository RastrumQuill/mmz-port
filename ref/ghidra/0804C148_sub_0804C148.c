// sub_0804C148 at 0x0804C148 (thumb)

undefined4 sub_0804C148(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (0x1f < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(char *)(param_1 + 0x11) == '\x05') {
      uVar1 = 7;
    }
    else {
      uVar1 = 4;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    sub_080033F0(param_1 + 0x6c,4);
  }
  return in_lr;
}


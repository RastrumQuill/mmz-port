// sub_0804C2E4 at 0x0804C2E4 (thumb)

undefined4 sub_0804C2E4(int param_1)

{
  undefined4 in_lr;
  
  if (0x3fff < *(int *)(param_1 + 0xb8)) {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080033F0(param_1 + 0x6c,0);
  }
  return in_lr;
}


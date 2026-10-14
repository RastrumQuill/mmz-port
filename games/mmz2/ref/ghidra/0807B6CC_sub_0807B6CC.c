// sub_0807B6CC at 0x0807B6CC (thumb)

undefined4 sub_0807B6CC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) =
         *(undefined *)(*(int *)(param_1 + 0x28) + 0xc0 + (uint)*(byte *)(param_1 + 0x10));
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


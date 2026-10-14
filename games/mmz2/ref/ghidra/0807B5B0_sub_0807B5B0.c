// sub_0807B5B0 at 0x0807B5B0 (thumb)

undefined4 sub_0807B5B0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  if (*(char *)(iVar1 + 0xbe) == '\x01') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


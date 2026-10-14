// sub_080BA648 at 0x080BA648 (thumb)

undefined4 sub_080BA648(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (*(char *)(param_1 + 0x75) == '\0') {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 0xb4);
    uVar1 = 0x20;
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 0xb4);
    uVar1 = 0x40;
  }
  if ((uVar2 & uVar1) == 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


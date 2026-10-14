// sub_080757C0 at 0x080757C0 (thumb)

undefined8 sub_080757C0(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 8) != 0) && (*(char *)(param_1 + 0xb5) == '\x01')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(char *)(param_1 + 0xb5) = '\0';
  }
  return CONCAT44(in_lr,1);
}


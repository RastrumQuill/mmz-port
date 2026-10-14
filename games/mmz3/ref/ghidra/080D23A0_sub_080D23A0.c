// sub_080D23A0 at 0x080D23A0 (thumb)

undefined4 sub_080D23A0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar1 + -0x1c00;
    sub_08017700(param_1,0xca00);
    *(undefined *)(param_1 + 0x25) = 0x1f;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  return in_lr;
}


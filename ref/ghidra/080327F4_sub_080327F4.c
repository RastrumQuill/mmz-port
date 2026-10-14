// sub_080327F4 at 0x080327F4 (thumb)

undefined4 sub_080327F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xb);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0807A5F8(param_1,1,0);
    sub_08001EAC(0x37);
    *(undefined2 *)(param_1 + 0xcc) = 0;
    *(undefined *)(*(int *)(param_1 + 0x20) + 0x11) = 1;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


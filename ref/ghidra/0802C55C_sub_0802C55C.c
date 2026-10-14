// sub_0802C55C at 0x0802C55C (thumb)

undefined4 sub_0802C55C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,0x1a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0802B670(param_1);
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0x13) == '\x04') {
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    *(undefined2 *)(param_1 + 0xd0) = 1;
  }
  return in_lr;
}


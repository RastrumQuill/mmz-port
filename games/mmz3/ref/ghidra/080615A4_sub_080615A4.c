// sub_080615A4 at 0x080615A4 (thumb)

undefined4 sub_080615A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08004230(0xa7);
    sub_08004230(0xa8);
    sub_08004230(0xa9);
    sub_08004230(0xaa);
    sub_080040A8(0xa7,0x2c0);
    sub_080616C4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_080616C4(param_1);
    sub_080041E4(0xa7);
    if (*(char *)(*(int *)(param_1 + 0xcc) + 0xd) != '\a') {
      sub_08004230(0xa7);
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


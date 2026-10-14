// sub_0803CFE0 at 0x0803CFE0 (thumb)

undefined4 sub_0803CFE0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,6);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0808093C(param_1,0,0);
      sub_08029778(param_1,9);
      sub_08001EAC(0x3b);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xf) = 10;
    *(undefined *)(param_1 + 0x12) = 4;
  }
  sub_080297C0(param_1);
  return in_lr;
}


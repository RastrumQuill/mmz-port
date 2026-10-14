// sub_0803D048 at 0x0803D048 (thumb)

undefined4 sub_0803D048(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,7);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0808093C(param_1,0,1);
      sub_08029778(param_1,10);
      sub_08001EAC(0x3b);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xf) = 0xb;
    *(undefined *)(param_1 + 0x12) = 4;
  }
  sub_080297C0(param_1);
  return in_lr;
}


// sub_0809177C at 0x0809177C (thumb)

undefined4 sub_0809177C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x3c06);
    sub_08002B10(0xe7);
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + -0x700;
    sub_080DC974(&local_10,2,0);
    sub_080DC974(&local_10,2,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


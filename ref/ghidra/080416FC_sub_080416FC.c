// sub_080416FC at 0x080416FC (thumb)

undefined4 sub_080416FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xc);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0x1d;
    sub_08083968(param_1,4,0);
    sub_08083968(param_1,4,1);
    sub_08083968(param_1,4,2);
    sub_08083968(param_1,4,3);
    sub_08083968(param_1,4,4);
    sub_08083968(param_1,4,5);
    sub_08083968(param_1,4,6);
    sub_08083968(param_1,4,7);
    *(undefined *)(param_1 + 0xca) = 0;
    *(undefined *)(param_1 + 0x12) = 0x28;
    sub_08001EAC(0xa1);
  }
  return in_lr;
}


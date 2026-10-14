// sub_08050B9C at 0x08050B9C (thumb)

undefined4 sub_08050B9C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xce) != '\0') {
      sub_080177F4(param_1);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0x12) = 2;
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835fd34);
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xffffffbf | 0x120;
    sub_08017700(param_1,0xaf08);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffeff;
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


// sub_0807CDA0 at 0x0807CDA0 (thumb)

undefined4 sub_0807CDA0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x2c);
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_0807C970(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      sub_0807CA00(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(undefined *)(param_1 + 0xb8) = 0;
    sub_08017700(param_1,*(undefined2 *)(&DAT_08364410 + (uint)*(byte *)(param_1 + 0x10) * 2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


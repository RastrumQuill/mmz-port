// sub_0804A6D0 at 0x0804A6D0 (thumb)

undefined4 sub_0804A6D0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x5c);
    sub_08007390(param_1 + 0x74,&DAT_0835efbc);
    *(undefined *)(param_1 + 0xbe) = 0;
    sub_08017700(param_1,0xa716);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


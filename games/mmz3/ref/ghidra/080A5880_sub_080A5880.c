// sub_080A5880 at 0x080A5880 (thumb)

undefined4 sub_080A5880(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083682f8);
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836831c + (uint)*(byte *)(param_1 + 0x12) * 2));
    *(undefined *)(param_1 + 0x13) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080041E4(0x57);
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


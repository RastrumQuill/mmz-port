// sub_080643EC at 0x080643EC (thumb)

undefined4 sub_080643EC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1404);
    sub_08007390(param_1 + 0x74,&DAT_08362290);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}


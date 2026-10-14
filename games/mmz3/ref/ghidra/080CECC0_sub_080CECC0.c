// sub_080CECC0 at 0x080CECC0 (thumb)

undefined4 sub_080CECC0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836cd9c);
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836cdcc + (uint)*(byte *)(param_1 + 0x10) * 2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  return in_lr;
}


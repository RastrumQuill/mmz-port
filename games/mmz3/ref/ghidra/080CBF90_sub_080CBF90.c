// sub_080CBF90 at 0x080CBF90 (thumb)

undefined4 sub_080CBF90(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836c66c);
    sub_08017700(param_1,0x3800);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080cbfc0;
  sub_080177F4(param_1);
LAB_080cbfc0:
  sub_080CB8EC(param_1);
  return in_lr;
}


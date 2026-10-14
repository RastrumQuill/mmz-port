// sub_0806564C at 0x0806564C (thumb)

undefined4 sub_0806564C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08017700(param_1,0x1303);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}


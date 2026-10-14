// sub_08055FE8 at 0x08055FE8 (thumb)

undefined4 sub_08055FE8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb305);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 2;
  *(undefined *)(param_1 + 0x12) = 6;
  return in_lr;
}


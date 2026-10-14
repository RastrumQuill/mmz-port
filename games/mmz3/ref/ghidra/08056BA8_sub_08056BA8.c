// sub_08056BA8 at 0x08056BA8 (thumb)

undefined4 sub_08056BA8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb303);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_0800471C(0x46);
  }
  sub_080177F4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    sub_080A9520(param_1,0,0);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x20;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xc6) = 0;
  }
  return in_lr;
}


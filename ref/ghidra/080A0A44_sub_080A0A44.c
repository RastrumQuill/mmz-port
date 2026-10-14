// sub_080A0A44 at 0x080A0A44 (thumb)

undefined4 sub_080A0A44(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08001EE8((int)*(short *)(param_1 + 0xc4));
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0x80;
  }
  sub_0809C980(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


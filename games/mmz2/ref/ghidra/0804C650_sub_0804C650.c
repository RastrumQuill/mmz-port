// sub_0804C650 at 0x0804C650 (thumb)

undefined4 sub_0804C650(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa117);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080032EC(0x67);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\f') {
    sub_0809DA88(param_1 + 0x54,2,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x21;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


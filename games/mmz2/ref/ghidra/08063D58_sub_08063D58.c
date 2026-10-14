// sub_08063D58 at 0x08063D58 (thumb)

undefined4 sub_08063D58(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x2201);
    sub_08006E08(param_1 + 0x74,&DAT_0833d690);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 0x30;
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


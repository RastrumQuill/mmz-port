// sub_080A8C10 at 0x080A8C10 (thumb)

undefined4 sub_080A8C10(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_0834535c,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined *)(param_1 + 0x12) = 0x20;
      sub_080127E4(param_1,0x6b0d);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080128D4(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


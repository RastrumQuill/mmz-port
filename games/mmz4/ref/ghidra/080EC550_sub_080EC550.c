// sub_080EC550 at 0x080EC550 (thumb)

undefined4 sub_080EC550(int param_1)

{
  undefined4 in_lr;
  byte abStack_10 [4];
  
  sub_08128B5C(abStack_10,&DAT_08129c74,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x2701);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((int)(uint)abStack_10[*(byte *)(param_1 + 0x12)] <= (int)*(char *)(param_1 + 0x71)) {
    sub_08002B10(0x5b);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


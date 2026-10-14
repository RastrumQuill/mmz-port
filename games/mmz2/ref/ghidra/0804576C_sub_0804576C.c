// sub_0804576C at 0x0804576C (thumb)

undefined4 sub_0804576C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa011);
    sub_080032EC(0x4f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  sub_080128D4(param_1);
  if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 3) {
    sub_08006E08(param_1 + 0x74,&DAT_0833a968);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  return in_lr;
}


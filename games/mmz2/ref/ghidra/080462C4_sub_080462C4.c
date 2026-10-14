// sub_080462C4 at 0x080462C4 (thumb)

undefined4 sub_080462C4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa00b);
    sub_08006E08(param_1 + 0x74,&DAT_0833a980);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_08003338((int)*(short *)(param_1 + 0xcc));
    *(short *)(param_1 + 0xcc) = 0;
    *(undefined *)(param_1 + 0xbe) = 0x1d;
    *(undefined *)(param_1 + 0xbf) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  return in_lr;
}


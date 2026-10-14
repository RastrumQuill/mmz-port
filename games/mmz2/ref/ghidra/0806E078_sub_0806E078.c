// sub_0806E078 at 0x0806E078 (thumb)

undefined4 sub_0806E078(int param_1)

{
  undefined4 in_lr;
  undefined auStack_18 [4];
  undefined2 auStack_14 [4];
  
  sub_080EF3F0(auStack_18,&DAT_080ef780,3);
  sub_080EF3F0(auStack_14,&DAT_080ef784,6);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,auStack_14[*(byte *)(param_1 + 0xb5)]);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = auStack_18[*(byte *)(param_1 + 0xb5)];
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


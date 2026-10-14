// sub_0805C7CC at 0x0805C7CC (thumb)

undefined4 sub_0805C7CC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa91c);
    sub_0807AE7C(param_1,0,1);
    *(undefined *)(param_1 + 0xbe) = 0;
    iVar1 = *(int *)(param_1 + 200);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x11) = 1;
      *(int *)(param_1 + 200) = 0;
    }
    sub_080032EC(0x71);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x2b;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


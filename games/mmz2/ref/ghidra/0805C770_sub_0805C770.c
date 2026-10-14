// sub_0805C770 at 0x0805C770 (thumb)

undefined4 sub_0805C770(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa91c);
    sub_0807AE7C(param_1,0,0);
    sub_080032EC(0x71);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      uVar1 = 0x2b;
    }
    else {
      uVar1 = 0x2a;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


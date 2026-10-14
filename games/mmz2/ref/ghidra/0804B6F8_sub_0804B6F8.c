// sub_0804B6F8 at 0x0804B6F8 (thumb)

undefined4 sub_0804B6F8(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa111);
    uVar1 = sub_080032EC(0x6c);
    *(undefined2 *)(param_1 + 0xc0) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


// sub_0805EE20 at 0x0805EE20 (thumb)

undefined4 sub_0805EE20(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202ebbd = DAT_0202ebbd | 1;
    sub_080127E4(param_1,0xaa15);
    sub_08006E08(param_1 + 0x74,&DAT_0833cf0c);
    uVar1 = sub_080BD70C(param_1,2,0);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    sub_080032EC(0xfa);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


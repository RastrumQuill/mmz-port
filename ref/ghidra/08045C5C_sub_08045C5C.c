// sub_08045C5C at 0x08045C5C (thumb)

undefined4 sub_08045C5C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x26;
    sub_080014E8(&DAT_084e02e4,(DAT_02022fca - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e02f0,(DAT_02023005 - 8) * 0x20 + 0x200);
    sub_08072604(param_1,0);
    sub_08072604(param_1,1);
    DAT_02023648 = param_1;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x100;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x50);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 9;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  return in_lr;
}


// sub_0802E0E4 at 0x0802E0E4 (thumb)

undefined4 sub_0802E0E4(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x03') || (*(char *)(param_1 + 0xc1) == '\x03')) {
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 2;
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835add4 + (uint)*(byte *)(param_1 + 0xed) * 4));
  }
  else {
    *(undefined *)(param_1 + 0xec) = 0;
    uVar1 = sub_08025BEC(param_1);
    sub_08017700(param_1,uVar1);
  }
  return in_lr;
}


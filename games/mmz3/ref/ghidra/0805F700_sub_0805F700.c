// sub_0805F700 at 0x0805F700 (thumb)

undefined4 sub_0805F700(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0806096C();
  if (0 < cVar1) {
    *(undefined2 *)(param_1 + 0xe) = 3;
    *(char *)(param_1 + 0xb7) = cVar1;
    sub_08060A10(param_1,(cVar1 + 0x12) * 0x1000000 >> 0x18);
    sub_0805F734(param_1);
  }
  return in_lr;
}


// sub_080453DC at 0x080453DC (thumb)

undefined4 sub_080453DC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa000);
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0)
       ) goto LAB_0804540e;
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(char *)(param_1 + 0xe) = cVar1;
LAB_0804540e:
  sub_080128D4(param_1);
  return in_lr;
}


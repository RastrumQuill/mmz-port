// sub_080CB20C at 0x080CB20C (thumb)

undefined4 sub_080CB20C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = bVar1 | 2;
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 6;
    sub_0800736C(param_1 + 0x74,&DAT_0836c59c,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80cb435;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
  }
  else {
    sub_080CAF74(param_1,bVar2,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CB27C(param_1);
  return in_lr;
}


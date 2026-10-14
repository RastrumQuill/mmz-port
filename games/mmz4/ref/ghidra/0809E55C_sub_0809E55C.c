// sub_0809E55C at 0x0809E55C (thumb)

undefined4 sub_0809E55C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
  }
  else {
    sub_080D0894(2,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}


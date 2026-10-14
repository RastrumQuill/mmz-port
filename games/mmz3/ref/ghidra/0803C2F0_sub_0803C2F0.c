// sub_0803C2F0 at 0x0803C2F0 (thumb)

undefined4 sub_0803C2F0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
    sub_0800471C(0x2b);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
    sub_0803C348(param_1);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  return in_lr;
}


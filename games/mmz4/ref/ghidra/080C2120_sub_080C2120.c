// sub_080C2120 at 0x080C2120 (thumb)

undefined4 sub_080C2120(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined *)(param_1 + 0xbe) = 0x10;
  *(undefined *)(param_1 + 0xbc) = 0x40;
  iVar2 = (*(int *)(*(int *)(param_1 + 0x28) + 0xb4) -
          (*(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x2000)) + -0x600;
  cVar1 = sub_0810CCF0(0xffffe000,iVar2);
  *(char *)(param_1 + 0xbd) = cVar1 + -0x40;
  *(int *)(param_1 + 0xc0) = iVar2;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080C2244(param_1);
  return in_lr;
}


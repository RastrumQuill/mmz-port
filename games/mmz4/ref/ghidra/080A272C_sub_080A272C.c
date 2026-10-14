// sub_080A272C at 0x080A272C (thumb)

undefined4 sub_080A272C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_08005784(param_1 + 0x74,&DAT_0885e7bc);
    sub_0801CF00(param_1,0x8402);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 8;
    *(undefined4 *)(param_1 + 0x60) = 0x300;
    *(uint *)(param_1 + 0x68) = (bVar1 >> 4 & 1) * 2 + -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (*(int *)(param_1 + 0x60) < iVar2) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x60);
  }
  return in_lr;
}


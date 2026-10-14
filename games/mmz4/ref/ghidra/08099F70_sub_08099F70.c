// sub_08099F70 at 0x08099F70 (thumb)

undefined4 sub_08099F70(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801CE54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x6100);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885d9ec,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x60;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  iVar3 = (int)*(short *)((int)&DAT_08128c10 +
                         ((*(byte *)(param_1 + 0x12) + 0xc0) * 0x1000000 >> 0x17));
  *(int *)(param_1 + 0x5c) = iVar3 << 2;
  iVar2 = (int)*(short *)((int)&DAT_08128c10 +
                         ((*(byte *)(param_1 + 0x12) + 0x80) * 0x1000000 >> 0x17));
  *(int *)(param_1 + 0x60) = iVar2 << 2;
  *(int *)(param_1 + 100) = iVar3 >> 3;
  *(int *)(param_1 + 0x68) = iVar2 >> 3;
  *(undefined *)(param_1 + 0x13) = 0x10;
  *(undefined2 *)(param_1 + 0xbe) = 0xe0;
  return in_lr;
}


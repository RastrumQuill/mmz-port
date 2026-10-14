// sub_08056C14 at 0x08056C14 (thumb)

undefined4 sub_08056C14(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xf8);
    sub_0801CF00(param_1,0xa01f);
    *(char *)(param_1 + 0x12) = (char)(((bVar1 >> 4 & 1) + 1 & 1) << 7);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (*(int *)(param_1 + 0x68) < iVar2) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x68);
  }
  iVar2 = (int)*(short *)((int)&DAT_08128c10 +
                         ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) *
          *(int *)(param_1 + 0x5c);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar2 = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
  *(int *)(param_1 + 0x54) = iVar2;
  if (0x28000 < (iVar2 - *(int *)(param_1 + 0xcc)) + 0x5000U) {
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


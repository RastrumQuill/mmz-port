// sub_0806BFC4 at 0x0806BFC4 (thumb)

undefined4 sub_0806BFC4(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa10);
    sub_08002B10(0xd2);
    sub_08005784(param_1 + 0x74,&DAT_08858d60);
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    *(undefined4 *)(param_1 + 100) = 0x80;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x62;
    }
    else {
      uVar1 = 0x1e;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       (iVar2 * *(short *)((int)&DAT_08128c10 +
                          ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) >> 8);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (iVar2 * (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] >> 8);
  if (iVar2 < 0x700) {
    *(int *)(param_1 + 0x5c) = iVar2 + *(int *)(param_1 + 100);
  }
  if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    sub_08002B10(0xd3);
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 +
                        ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) *
         *(int *)(param_1 + 0x5c) >> 8;
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


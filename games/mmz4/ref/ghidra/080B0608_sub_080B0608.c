// sub_080B0608 at 0x080B0608 (thumb)

undefined4 sub_080B0608(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x54) + -0x500;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xb4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    sub_080B0880(param_1);
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 - 5;
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    iVar2 = *(int *)(param_1 + 0xb8) +
            *(short *)((int)&DAT_08128c10 + ((bVar1 + 0x3b) * 0x1000000 >> 0x17)) * -5;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8) +
            *(short *)((int)&DAT_08128c10 + ((bVar1 + 0x3b) * 0x1000000 >> 0x17)) * 5;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xbc) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x13)] * 5;
  sub_080B0910(param_1);
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (((int)(uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xb7) >> *(sbyte *)(param_1 + 0x11) & 1U) ==
      0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


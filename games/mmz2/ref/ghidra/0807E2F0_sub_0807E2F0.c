// sub_0807E2F0 at 0x0807E2F0 (thumb)

undefined4 sub_0807E2F0(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * 4;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 0xf) == 0) {
    sub_080B7330(param_1,1,0);
  }
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


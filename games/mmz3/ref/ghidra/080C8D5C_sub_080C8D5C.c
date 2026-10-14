// sub_080C8D5C at 0x080C8D5C (thumb)

undefined4 sub_080C8D5C(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080177F4();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = (&DAT_080fe64c)[*(byte *)(param_1 + 0x12)];
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x03';
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + sVar1 * 8 + *(int *)(param_1 + 0x5c);
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) + 0x100) - (uVar2 * 0x80 >> 0x17);
  iVar3 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = iVar3 + -1;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C8DE8(param_1);
  }
  return in_lr;
}


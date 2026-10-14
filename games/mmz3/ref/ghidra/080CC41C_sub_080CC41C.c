// sub_080CC41C at 0x080CC41C (thumb)

undefined4 sub_080CC41C(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    sub_08007390(param_1 + 0x74,&DAT_0836c774);
    sub_08017700(param_1,0x3900);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = sub_080FE390((uint)(ushort)DAT_0202f4ac + (*(byte *)(param_1 + 0x10) & 3) * -0x43 + 1,
                       0x10c);
  if (0xec < iVar1) {
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0xc0) + -0x200 + (uVar2 * 0x40 >> 0x16);
  }
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}


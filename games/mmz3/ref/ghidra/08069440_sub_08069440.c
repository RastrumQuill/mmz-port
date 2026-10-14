// sub_08069440 at 0x08069440 (thumb)

undefined4 sub_08069440(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x2d);
    uVar2 = *(byte *)(param_1 + 0x24) + 0x80;
    uVar3 = uVar2 & 0xff;
    local_18 = *(short *)((int)&DAT_080fe64c + (uVar2 * 0x1000000 + 0x40000000 >> 0x17)) * 0x1c +
               *(int *)(param_1 + 0x54);
    local_14 = (short)(&DAT_080fe64c)[uVar3] * 0x1c + *(int *)(param_1 + 0x58);
    sub_0800471C(0x2d);
    sub_0809CCA8(&local_18,0x500,uVar3);
    *(undefined *)(param_1 + 0x12) = 4;
    sub_08017700(param_1,0x704);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


// sub_080A577C at 0x080A577C (thumb)

undefined4 sub_080A577C(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083682e0);
    sub_08017700(param_1,*(undefined2 *)(&DAT_08368312 + (uint)*(byte *)(param_1 + 0x12) * 2));
    iVar4 = sub_08017B8C(param_1);
    sub_080040A8(0x57,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_080fe64c +
                   (((uint)*(byte *)(param_1 + 0x12) * -0x20 + -0x40) * 0x1000000 >> 0x17)) * 3;
    *(int *)(param_1 + 0x60) =
         *(short *)((int)&DAT_080fe64c +
                   (((uint)*(byte *)(param_1 + 0x12) * -0x20 + -0x80) * 0x1000000 >> 0x17)) * 3;
    bVar1 = 2 < *(byte *)(param_1 + 0x12);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080041E4(0x57);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


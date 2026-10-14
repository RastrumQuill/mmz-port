// sub_08013AC8 at 0x08013AC8 (thumb)

undefined4 sub_08013AC8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar5 = *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar2] = (ushort)uVar5 | 0x8045;
    (&DAT_020023cc)[uVar2] = 0;
    sub_080FE110("NqOqPqQqNqOqPqQqNqOqPqQqNqOqPqQqNqOqPqQqNqOqPqQqNqOqPqQqNqOqPqQqnqoqpqqqnqoqpqqqnqoqpqqqnqoqpqqqnqoqpqqqnqoqpqqqnqoqpqqqnqoqpqqq"
                 ,(uVar5 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080FE110(&DAT_08531c98,((ushort)(&DAT_020023c4)[uVar2] & 0x1f00) * 8 + 0x6000800,0x200);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  DAT_0200241d = DAT_0200241d & 0xf7;
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar3 = sub_080D8A10();
    *(undefined4 *)(param_1 + 0x68) = uVar3;
  }
  if (DAT_0202e48c < 0x22800) {
    uVar1 = *(short *)(param_1 + 0x10) + 1;
    *(ushort *)(param_1 + 0x10) = uVar1;
    if (0x13 < uVar1) {
      *(undefined2 *)(param_1 + 0x10) = 4;
    }
    sub_080D8AB8(*(undefined4 *)(param_1 + 0x68));
    iVar4 = sub_080047C0(0x124);
    if (iVar4 == 0) {
      sub_0800471C(0x124);
    }
    if (((*(ushort *)(param_1 + 0x10) & 1) != 0) &&
       (uVar2 = DAT_0202f4ac * 0x343fd + 0x269ec3, DAT_0202f4ac = uVar2 & 0x7fffffff,
       (uVar2 * 2 >> 0x11 & 1) != 0)) {
      DAT_02002402 = 0xc0a;
      return in_lr;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x10) = 3;
    sub_080D8AC8(*(undefined4 *)(param_1 + 0x68));
    iVar4 = sub_080047C0(0x124);
    if (iVar4 != 0) {
      sub_08004768(0x124);
    }
  }
  DAT_02002402 = 0xc04;
  return in_lr;
}


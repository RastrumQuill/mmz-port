// sub_080741F8 at 0x080741F8 (thumb)

undefined4 sub_080741F8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    sub_0800561C(param_1 + 0x74,&DAT_082b15e4);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') &&
     ((*(char *)(param_1 + 0x10) == '\0' ||
      (((int)(uint)(byte)(&DAT_02022ad4)[(ushort)L"+,-./012345"[*(byte *)(param_1 + 0x11)] >> 3] >>
        ((ushort)L"+,-./012345"[*(byte *)(param_1 + 0x11)] & 7) & 1U) != 0)))) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


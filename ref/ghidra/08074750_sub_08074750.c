// sub_08074750 at 0x08074750 (thumb)

undefined4 sub_08074750(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar2 + -0x100;
    sub_080033F0(param_1 + 0x6c,0);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (((int)(uint)(byte)(&DAT_02022ad4)[(ushort)L"+,-./012345"[*(byte *)(param_1 + 0x11)] >> 3] >>
       ((ushort)L"+,-./012345"[*(byte *)(param_1 + 0x11)] & 7) & 1U) != 0) {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b15e4,param_1 + 0x4c,0xc);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x8074089;
    if (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c) < 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


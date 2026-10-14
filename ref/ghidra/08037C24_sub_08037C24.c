// sub_08037C24 at 0x08037C24 (thumb)

undefined4 sub_08037C24(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 200) = 0;
  cVar1 = *(char *)(param_1 + 0x12);
  bVar3 = cVar1 + 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  bVar2 = cVar1 + 1;
  if (bVar2 < 0x50) {
    if ((bVar3 & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    if (bVar2 < 0x70) {
      if ((bVar3 & 2) != 0) {
        bVar2 = *(byte *)(param_1 + 10) | 1;
        goto LAB_08037c80;
      }
    }
    else if ((bVar3 & 3) != 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_08037c80;
    }
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
LAB_08037c80:
  *(byte *)(param_1 + 10) = bVar2;
  *(short *)(param_1 + 0x4a) =
       (short)((uint)(ushort)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 0x10000 + 0x1000000 >>
              0x10);
  if (*(char *)(param_1 + 0x12) == -0x80) {
    sub_0800561C(param_1 + 0x74,&DAT_082ad86c);
    sub_08029654(param_1);
    sub_08038A5C(param_1,0xf);
    *(undefined4 *)(param_1 + 200) = 8;
    *(undefined2 *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0x10;
  }
  return in_lr;
}


// sub_08033A38 at 0x08033A38 (thumb)

undefined4 sub_08033A38(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029710(param_1);
    sub_08029778(param_1,0x1b);
    *(undefined2 *)(param_1 + 0x48) = 0x100;
    *(undefined2 *)(param_1 + 0x4a) = 0x100;
    *(undefined *)(param_1 + 0x1f) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x80;
  }
  sub_080297C0(param_1);
  bVar2 = *(byte *)(param_1 + 0xf);
  if (bVar2 == 1) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x10';
    *(ushort *)(param_1 + 0x48) = 0x100 - (ushort)*(byte *)(param_1 + 0x12);
    if (0xe0 < *(byte *)(param_1 + 0x12)) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else if (bVar2 < 2) {
    if ((bVar2 == 0) &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (bVar2 == 2) {
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x800;
    if (0x14 < bVar2) {
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  }
  return in_lr;
}


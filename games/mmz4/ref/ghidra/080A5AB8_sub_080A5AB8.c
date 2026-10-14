// sub_080A5AB8 at 0x080A5AB8 (thumb)

undefined4 sub_080A5AB8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08002B10(0x2c);
        sub_0801CF00(param_1,0x8809);
        cVar2 = sub_0810CD50(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                             *(undefined4 *)(DAT_0202dbf0 + 0x54),
                             *(int *)(DAT_0202dbf0 + 0x58) + -0x1000);
        sub_080BD0F0(param_1 + 0x54,0x280,cVar2 + -0x80);
        *(undefined *)(param_1 + 0x12) = 0x18;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_0801CFF0(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_0885ef18);
    sub_0801CF00(param_1,0x8807);
    sub_0801D3D0(param_1,5);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}


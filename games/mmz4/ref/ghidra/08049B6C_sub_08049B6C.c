// sub_08049B6C at 0x08049B6C (thumb)

undefined4 sub_08049B6C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x8c);
  if ((uVar2 & 0x204) != 0) {
    if ((uVar2 & 0x200) != 0) {
      sub_0802AB70(1,0xff,param_1 + 0x54);
    }
    sub_080D0894(2,param_1 + 0x54);
    sub_08002B10(0x2a);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08049850(param_1);
    return in_lr;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x30;
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
      if (uVar2 < 0x1001) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    uVar2 = sub_081284E0((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) * 0x10 >> 0x10,
                         (*(int *)(DAT_0202dbf0 + 0x58) - (*(int *)(param_1 + 0x58) + 0xf00)) * 0x10
                         >> 0x10);
    uVar2 = ((int)((uVar2 & 0xffff) + 0x4000) >> 8) * 0x1000000;
    *(int *)(param_1 + 0x5c) = (int)*(short *)((int)&DAT_08128c10 + (uVar2 >> 0x17)) << 2;
    *(int *)(param_1 + 0x60) =
         (int)*(short *)((int)&DAT_08128c10 + (uVar2 + 0xc0000000 >> 0x17)) << 2;
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_08002B10(0x6b);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


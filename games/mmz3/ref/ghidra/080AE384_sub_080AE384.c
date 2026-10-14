// sub_080AE384 at 0x080AE384 (thumb)

undefined4 sub_080AE384(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        sub_08017700(param_1,0x8003);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08369248);
    *(undefined *)(param_1 + 0x13) = 0x4c;
    sub_08017700(param_1,0x8002);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(iVar4 + 0x54);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x54) =
       iVar3 + *(short *)((int)&DAT_080fe64c +
                         ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) * 0x18;
  sub_080177F4(param_1);
  if ('\x02' < *(char *)(param_1 + 0x71)) {
    sub_08007390(param_1 + 0x74,&DAT_083691e8);
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      cVar2 = *(char *)(param_1 + 0x12) + -4;
    }
    else {
      cVar2 = *(char *)(param_1 + 0x12) + '\x04';
    }
    *(char *)(param_1 + 0x12) = cVar2;
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if ((cVar2 == '\0') || (1 < *(byte *)(iVar4 + 0xc))) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(byte *)(param_1 + 0x12) < 0x81) {
    *(undefined *)(param_1 + 0x25) = 0x19;
  }
  else {
    *(undefined *)(param_1 + 0x25) = 0x17;
  }
  return in_lr;
}


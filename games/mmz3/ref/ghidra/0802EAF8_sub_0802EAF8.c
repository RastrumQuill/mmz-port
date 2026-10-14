// sub_0802EAF8 at 0x0802EAF8 (thumb)

undefined4 sub_0802EAF8(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar2 = false;
  if (*(char *)(param_1 + 0xc0) == '\x03') {
    cVar4 = sub_08034598(param_1,0);
    uVar5 = *(uint *)(param_1 + 0x218) & 0x2000;
  }
  else {
    cVar4 = sub_08034598(param_1,1);
    uVar5 = *(uint *)(param_1 + 0x218) & 0x8000;
  }
  if (uVar5 == 0) {
    if (*(char *)(param_1 + 0x225) == '\x03') {
      cVar4 = '\x02';
    }
    if (((*(ushort *)(param_1 + 0xc6) & 0x800) != 0) && (*(char *)(param_1 + 0x22d) == '\x03')) {
      cVar4 = '\x02';
      bVar2 = true;
    }
  }
  else {
    cVar4 = '\0';
  }
  if (cVar4 == '\x02') {
    if (((*(ushort *)(param_1 + 0xc6) & 0x800) == 0) ||
       (((*(uint *)(param_1 + 0x218) & 0x80) == 0 && (!bVar2)))) {
      bVar3 = (byte)(*(ushort *)(param_1 + 0xc6) >> 8) & 4;
      if ((*(ushort *)(param_1 + 0xc6) & 0x400) == 0) {
        bVar1 = bVar3 >> 2;
        *(byte *)(param_1 + 0xe) = bVar1;
        *(byte *)(param_1 + 0xf) = bVar1;
        *(undefined *)(param_1 + 0xed) = 3;
        *(byte *)(param_1 + 0xee) = bVar3 >> 2;
        sub_0802E390(param_1);
      }
      else {
        *(undefined *)(param_1 + 0xed) = 4;
        *(undefined *)(param_1 + 0xee) = 0;
        sub_0802EDD4(param_1);
      }
    }
    else {
      *(undefined *)(param_1 + 0xed) = 5;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802EDE4(param_1);
    }
  }
  else {
    cVar4 = sub_080341A4(param_1,0);
    if (cVar4 == '\x02') {
      *(undefined *)(param_1 + 0xed) = 1;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802EC50(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xec) = 0;
      sub_080177CC(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
  }
  return in_lr;
}


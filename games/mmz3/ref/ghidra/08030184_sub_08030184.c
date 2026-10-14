// sub_08030184 at 0x08030184 (thumb)

undefined4 sub_08030184(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0xc0) == '\x03') {
    cVar2 = sub_08034598(param_1,0);
    uVar3 = *(uint *)(param_1 + 0x218) & 0x2000;
  }
  else {
    cVar2 = sub_08034598(param_1,1);
    uVar3 = *(uint *)(param_1 + 0x218) & 0x8000;
  }
  if (uVar3 == 0) {
    if (*(char *)(param_1 + 0x225) == '\x03') {
      cVar2 = '\x02';
    }
    if (((*(ushort *)(param_1 + 0xc6) & 0x800) != 0) && (*(char *)(param_1 + 0x22d) == '\x03')) {
      cVar2 = '\x02';
      bVar1 = true;
    }
  }
  else {
    cVar2 = '\0';
  }
  if (cVar2 == '\x02') {
    if (((*(ushort *)(param_1 + 0xc6) & 0x800) == 0) ||
       (((*(uint *)(param_1 + 0x218) & 0x80) == 0 && (!bVar1)))) {
      if ((*(ushort *)(param_1 + 0xc6) & 0x400) == 0) {
        *(undefined *)(param_1 + 0xed) = 3;
        *(byte *)(param_1 + 0xee) = ((byte)(*(ushort *)(param_1 + 0xc6) >> 8) & 4) >> 2;
        sub_08030408(param_1);
      }
      else {
        *(undefined *)(param_1 + 0xed) = 4;
        *(undefined *)(param_1 + 0xee) = 0;
        sub_080304B4(param_1);
      }
    }
    else {
      *(undefined *)(param_1 + 0xed) = 5;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_08030560(param_1);
    }
  }
  else {
    cVar2 = sub_080341A4(param_1,0);
    if (cVar2 == '\x02') {
      *(undefined *)(param_1 + 0xed) = 1;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_080302E4(param_1);
    }
    else {
      if (*(char *)(param_1 + 0xe) == '\x01') {
        sub_080177CC(param_1,0x403,2,1);
      }
      else {
        sub_080177CC(param_1,0x404,2,1);
      }
      *(undefined *)(param_1 + 0xec) = 0;
    }
  }
  return in_lr;
}


// sub_0802E140 at 0x0802E140 (thumb)

undefined4 sub_0802E140(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0xc0) == '\x03') {
    cVar2 = sub_08034598(param_1,0);
    uVar4 = *(uint *)(param_1 + 0x218) & 0x2000;
  }
  else {
    cVar2 = sub_08034598(param_1,1);
    uVar4 = *(uint *)(param_1 + 0x218) & 0x8000;
  }
  if (uVar4 == 0) {
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
        sub_0802E390(param_1);
      }
      else {
        *(undefined *)(param_1 + 0xed) = 4;
        *(undefined *)(param_1 + 0xee) = 0;
        sub_0802E430(param_1);
      }
    }
    else {
      *(undefined *)(param_1 + 0xed) = 5;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802E4D0(param_1);
    }
  }
  else {
    cVar2 = sub_080341A4(param_1,0);
    if (cVar2 == '\x02') {
      *(undefined *)(param_1 + 0xed) = 1;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802E288(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xec) = 0;
      uVar3 = sub_08025BEC(param_1);
      sub_08017700(param_1,uVar3);
    }
  }
  return in_lr;
}


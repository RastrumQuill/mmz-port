// sub_08050FF0 at 0x08050FF0 (thumb)

undefined4 sub_08050FF0(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        pcVar4 = (char *)(param_1 + 0xce);
        if (*pcVar4 == '\0') {
          uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar5 & 0x7fffffff;
          cVar2 = sub_080FE4D8(uVar5 * 2 >> 0x11,3);
          cVar2 = cVar2 + '\x01';
        }
        else {
          cVar2 = '\0';
        }
        *pcVar4 = cVar2;
        sub_08010320(*pcVar4);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sVar3 = sub_08010340();
      if (sVar3 == 0) {
        *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffeff;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x53);
    *(undefined *)(param_1 + 0xcf) = 2;
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x100;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08017700(param_1,0xaf03);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}


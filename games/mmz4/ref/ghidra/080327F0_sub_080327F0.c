// sub_080327F0 at 0x080327F0 (thumb)

undefined4 sub_080327F0(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x171) == '\0') {
    if ((*(byte *)(param_1 + 10) >> 4 & 1) == (*(byte *)(param_1 + 0x142) & 1)) {
      sub_0801CFC8(param_1,0x4a00,3,4);
    }
    else {
      sub_0801CFC8(param_1,0x4b00,3,4);
    }
  }
  else {
    if (*(char *)(param_1 + 0x172) == '\0') {
      sub_0801CFC8(param_1,0x4b00,3,4);
    }
    else {
      sub_0801CFC8(param_1,0x4a00,3,4);
    }
    *(undefined *)(param_1 + 0x171) = 0;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined *)(param_1 + 0x100) = 0;
  *(undefined *)(param_1 + 0x149) = 0xff;
  *(undefined *)(param_1 + 0x14e) = 0xff;
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 != '\x02') {
    if (cVar1 == '\b') {
      *(char *)(param_1 + 0xfa) = '\x02';
    }
    else {
      if (*(char *)(param_1 + 0xc0) == '\x02') {
        *(char *)(param_1 + 0xc0) = cVar1;
      }
      else {
        if (*(char *)(param_1 + 0xc1) != '\x02') goto LAB_080328e0;
        *(char *)(param_1 + 0xc1) = cVar1;
      }
      pcVar3 = (char *)(param_1 + 0xf8);
      cVar1 = *pcVar3;
      if (cVar1 != '\x02') {
        pcVar3 = (char *)(param_1 + 0xf9);
        cVar1 = '\x02';
      }
      *pcVar3 = cVar1;
    }
  }
LAB_080328e0:
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar2 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,0);
  if ((uVar2 & 0xf) == 0) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08032A7C(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08032930(param_1);
  }
  return in_lr;
}


// sub_080AC8B4 at 0x080AC8B4 (thumb)

undefined8 sub_080AC8B4(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(DAT_02022b20 + 0xf);
  if (cVar1 == '\x01') {
    uVar2 = 0x213;
    goto LAB_080acaf2;
  }
  if (cVar1 != '\x03') {
    if (cVar1 == '\r') {
      if (DAT_02022af5 == '\0') {
        DAT_02022af5 = '\x01';
        uVar2 = 0x21a;
      }
      else if (DAT_02022af5 == '\x01') {
        DAT_02022af5 = '\x02';
        uVar2 = 0x21b;
      }
      else {
        uVar2 = 0x21c;
      }
      goto LAB_080acaf2;
    }
    uVar4 = *(uint *)(DAT_02022b20 + 0x10);
    if ((uVar4 & 0x8000) != 0) {
      if (DAT_02022af5 == '\0') {
        DAT_02022af5 = '\x01';
        uVar2 = 0x21f;
      }
      else {
        uVar2 = 0x220;
      }
      goto LAB_080acaf2;
    }
    if ((uVar4 & 0x4000) != 0) {
      if (DAT_02022af5 == '\0') {
        DAT_02022af5 = '\x01';
        uVar2 = 0x21d;
      }
      else {
        uVar2 = 0x21e;
      }
      goto LAB_080acaf2;
    }
    if (DAT_02022af5 == '\0') {
      uVar3 = -((int)-(uVar4 & 4) >> 0x1f);
      if ((uVar4 & 0x10) != 0) {
        uVar3 = uVar3 + 1;
      }
      if ((uVar4 & 0x20) != 0) {
        uVar3 = uVar3 + 1;
      }
      if ((uVar4 & 0x40) != 0) {
        uVar3 = uVar3 + 1;
      }
      if ((uVar4 & 0x80) != 0) {
        uVar3 = uVar3 + 1;
      }
      if ((uVar4 & 0x100) != 0) {
        uVar3 = uVar3 + 1;
      }
      if ((uVar4 & 0x200) != 0) {
        uVar3 = uVar3 + 1;
      }
      if ((uVar4 & 0x400) != 0) {
        uVar3 = uVar3 + 1;
      }
      if ((uVar4 & 0x800) != 0) {
        uVar3 = uVar3 + 1 & 0xff;
      }
      if ((uVar4 & 0x1000) != 0) {
        uVar3 = uVar3 + 1 & 0xff;
      }
      if (uVar3 == 1) {
        DAT_02022af5 = '\x02';
      }
    }
    if ((DAT_02022ae9 & 8) == 0) {
      DAT_02022af5 = '\x04';
      DAT_02022ae9 = DAT_02022ae9 | 8;
    }
    switch(DAT_02022af5) {
    case '\0':
      DAT_02022af5 = DAT_02022af5 + '\x01';
      uVar2 = 0x218;
      break;
    default:
      uVar2 = 0x219;
      break;
    case '\x02':
      DAT_02022af5 = DAT_02022af5 + '\x01';
      uVar2 = 0x216;
      break;
    case '\x03':
      uVar2 = 0x217;
      break;
    case '\x04':
      DAT_02022af5 = DAT_02022af5 + '\x01';
      if ((*(byte *)(DAT_0202286c + 0x1ab) & 0x80) == 0) goto LAB_080ac904;
    case '\x05':
switchD_080aca7e_caseD_5:
      uVar2 = 0x215;
    }
LAB_080acaf2:
    return CONCAT44(in_lr,uVar2);
  }
  if ((DAT_02022af5 == '\0') &&
     (DAT_02022af5 = '\x01', (*(byte *)(DAT_0202286c + 0x1ab) & 0x80) == 0)) {
    DAT_02022ae9 = DAT_02022ae9 | 8;
LAB_080ac904:
    uVar2 = 0x214;
    goto LAB_080acaf2;
  }
  goto switchD_080aca7e_caseD_5;
}


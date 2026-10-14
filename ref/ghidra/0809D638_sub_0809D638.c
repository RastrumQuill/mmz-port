// sub_0809D638 at 0x0809D638 (thumb)

undefined4 sub_0809D638(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (((DAT_02022add & 0x20) != 0) && ((DAT_0200520c & 0x7f) != 7)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    sub_0809C930(param_1,0);
    sub_0800561C(param_1 + 0x74,&DAT_082b534c);
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (DAT_02022b60 == 0) {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      cVar2 = '\x04';
    }
    *(char *)(param_1 + 0xe) = cVar2;
    sub_0809C980(param_1);
    return in_lr;
  case 1:
    sub_0809C980(param_1);
    if (DAT_020236e2 != '\0') {
      return in_lr;
    }
    if ((*(ushort *)(param_1 + 0x90) & 0x2000) == 0) {
      return in_lr;
    }
    if (DAT_02022874 == '\0') {
      return in_lr;
    }
    uVar4 = sub_0809CA38(0);
    if ((int)uVar4 < 1) {
      if (((DAT_02022ad4 & 4) != 0) || (((DAT_02022ad5 & 4) == 0 && ((DAT_02022adc & 0xc) == 0)))) {
        sub_080BF0A4(&DAT_020236e0,0x10300);
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (((DAT_02022ad5 & 1) == 0) && ((DAT_02022ad4 & 0x80) == 0)) {
      sub_080BC808(uVar4 & 0xffff);
    }
    else {
      sub_080BC8F8(uVar4 & 0xffff);
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    sub_0809C980(param_1);
    if ((DAT_0202365a != 0) && (DAT_0202365a != 3)) {
      return in_lr;
    }
    bVar1 = DAT_02022ad4 & 0x40;
    if ((DAT_02022ad4 & 0x40) == 0) {
      if (DAT_02022af3 == '\x01') {
        if (*(char *)(DAT_02022b20 + 0xf) == '\x03') {
          DAT_02022ad4 = DAT_02022ad4 | 8;
          sub_080BC818(0x11b,0x5a);
        }
        DAT_02022874 = bVar1;
        *(undefined *)(param_1 + 0xe) = 1;
        return in_lr;
      }
      sub_080BF0A4(&DAT_020236e0,0x10300);
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      if ((DAT_0202365f & 0xf0) == 0x10) {
        DAT_02022ad4 = DAT_02022ad4 | 0x80;
      }
      else {
        DAT_02022ad5 = DAT_02022ad5 | 1;
      }
      DAT_02022874 = '\0';
      DAT_02022ad4 = DAT_02022ad4 & 0xbf;
      cVar2 = '\x01';
    }
    break;
  case 3:
    sub_0809C980(param_1);
    if (DAT_020236e2 != '\0') {
      return in_lr;
    }
    DAT_02022874 = DAT_020236e2;
    cVar2 = '\x01';
    break;
  case 4:
    sub_0809C980(param_1);
    if ((*(ushort *)(param_1 + 0x90) & 0x2000) == 0) {
      return in_lr;
    }
    if (DAT_02022874 == '\0') {
      return in_lr;
    }
    sub_080BC808(*(undefined2 *)(&DAT_082b53ce + (uint)DAT_02022b60 * 2));
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 5:
    sub_0809C980(param_1);
    if (DAT_0202365a != 0) {
      return in_lr;
    }
    DAT_02022874 = '\0';
    cVar2 = *(char *)(param_1 + 0xe) + -1;
    break;
  default:
    goto switchD_0809d64c_caseD_6;
  }
  *(char *)(param_1 + 0xe) = cVar2;
switchD_0809d64c_caseD_6:
  return in_lr;
}


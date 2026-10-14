// sub_0803FD94 at 0x0803FD94 (thumb)

undefined4 sub_0803FD94(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0xc0;
  if (0x393000 < *(int *)(param_1 + 0x54) + 0xf000) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (bVar1 < 0x21) {
    return in_lr;
  }
  if (*(char *)(*(int *)(param_1 + 0xd4) + 0x71) != '\0') {
    return in_lr;
  }
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar4 & 0x7fffffff;
  uVar4 = uVar4 * 2 >> 0x11 & 0xff;
  pcVar5 = (char *)(param_1 + 0xbc);
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
    bVar1 = sub_080EF330(uVar4,0xf);
    if (bVar1 < 6) {
LAB_0803fe90:
      cVar2 = '\x02';
    }
    else if (bVar1 < 0xc) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\x03';
    }
LAB_0803fe92:
    *pcVar5 = cVar2;
  }
  else {
    if (cVar2 == '\x01') {
      bVar1 = sub_080EF330(uVar4,0xf);
      if (bVar1 < 6) goto LAB_0803fe90;
      if (bVar1 < 0xc) goto LAB_0803fe84;
      cVar2 = '\x03';
      goto LAB_0803fe92;
    }
    if (cVar2 != '\x02') {
      bVar1 = sub_080EF330(uVar4,0xf);
      if (bVar1 < 5) goto LAB_0803fe84;
      if (9 < bVar1) goto LAB_0803fe90;
      cVar2 = '\x01';
      goto LAB_0803fe92;
    }
    bVar1 = sub_080EF330(uVar4,0xf);
    if (4 < bVar1) {
      if (bVar1 < 10) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\x03';
      }
      goto LAB_0803fe92;
    }
LAB_0803fe84:
    *pcVar5 = '\0';
  }
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
    uVar3 = 3;
  }
  else {
    if (cVar2 == '\x01') {
      if (*(int *)(param_1 + 0xd8) != 0) {
        uVar3 = 4;
        goto LAB_0803fec0;
      }
    }
    else if (cVar2 == '\x02') {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      goto LAB_0803fec2;
    }
    uVar3 = 5;
  }
LAB_0803fec0:
  *(undefined *)(param_1 + 0xd) = uVar3;
LAB_0803fec2:
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}


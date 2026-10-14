// sub_08044C48 at 0x08044C48 (thumb)

undefined4 sub_08044C48(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    uVar5 = sub_0804246C(param_1);
    *(undefined *)(param_1 + 0x13) = (&DAT_082ae873)[uVar5 & 0xff];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_08042AFC(param_1,0,6);
    sub_08042AFC(param_1,1,6);
    sub_08042AFC(param_1,2,6);
    sub_08042AFC(param_1,3,6);
    bVar1 = sub_08042CE8(param_1,0,6);
    bVar2 = *(byte *)(int *)(param_1 + 0xe0);
    if ((bVar1 != bVar2) && (bVar1 < bVar2)) {
      sub_080429D4(param_1,0);
    }
    bVar2 = sub_08042CE8(param_1,1,6);
    if ((bVar2 != *(byte *)(param_1 + 0xe1)) && (bVar2 < *(byte *)(param_1 + 0xe1))) {
      sub_080429D4(param_1,1);
    }
    bVar2 = sub_08042CE8(param_1,2,6);
    if ((bVar2 != *(byte *)(param_1 + 0xe2)) && (bVar2 < *(byte *)(param_1 + 0xe2))) {
      sub_080429D4(param_1,2);
    }
    bVar2 = sub_08042CE8(param_1,3,6);
    if ((bVar2 != *(byte *)(param_1 + 0xe3)) && (bVar2 < *(byte *)(param_1 + 0xe3))) {
      sub_080429D4(param_1,3);
    }
    sub_08042C24(param_1,0,6);
    sub_08042C24(param_1,1,6);
    sub_08042C24(param_1,2,6);
    sub_08042C24(param_1,3,6);
    if (*(int *)(param_1 + 0xe0) == 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080297C0(param_1);
    break;
  case 4:
    if (-1 < *(short *)(param_1 + 0xbc)) {
      sub_08001EE8();
      *(short *)(param_1 + 0xbc) = -1;
    }
    sub_0808588C(*(undefined4 *)(param_1 + 0xc0));
    sub_0808588C(*(undefined4 *)(param_1 + 0xc4));
    sub_0808588C(*(undefined4 *)(param_1 + 200));
    sub_0808588C(*(undefined4 *)(param_1 + 0xcc));
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 3;
    sub_08029778(param_1,0x15);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar3 = sub_08042DE4(param_1);
    if (cVar3 == '\0') {
      iVar4 = *(int *)(param_1 + 0x58) + 0x40;
      *(int *)(param_1 + 0x58) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x58) = 0x700;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      uVar5 = sub_080426A0(param_1);
      if ((uVar5 & 1) != 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080297C0(param_1);
    }
  }
  return in_lr;
}


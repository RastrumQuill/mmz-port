// sub_080BF540 at 0x080BF540 (thumb)

undefined4 sub_080BF540(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined4 in_lr;
  
  cVar1 = DAT_02022878;
  bVar4 = false;
  if (((*(short *)(param_1 + 0x1af0) != 0) || (DAT_02022888 != 0)) || (DAT_02022870 != '\0')) {
    bVar4 = true;
  }
  *(int *)(param_1 + 0x1aec) = *(int *)(param_1 + 0x1aec) + 1;
  sub_080033CC(param_1 + 0x99c);
  DAT_0202287c = 0;
  if ((((DAT_02022ae0 & 2) != 0) && (!bVar4)) && (cVar1 == '\0')) {
    if (DAT_02022868 == 0) {
      sub_08001DFC();
      DAT_02022ae0 = DAT_02022ae0 & 0xfd;
      iVar3 = sub_08001F08(0xe9);
      if (iVar3 != 0) {
        sub_08001EE8(0xe9);
      }
    }
    else {
      if ((DAT_02022868 & 0x8000) == 0) {
        if (DAT_02022868 < 0xb4) {
          iVar3 = sub_08001F08(0xe7);
          if (iVar3 != 0) {
            sub_08001EE8(0xe7);
          }
          iVar3 = sub_08001F08(0xe9);
          if (iVar3 == 0) {
            sub_08001EAC(0xe9);
          }
        }
      }
      else {
        sub_08001DC8();
        sub_08001EAC(0xe7);
        DAT_02022868 = DAT_02022868 & 0x7fff;
      }
      DAT_02022868 = DAT_02022868 - 1;
    }
  }
  uVar2 = 0;
  if ((bVar4) || (cVar1 != '\0')) {
    uVar2 = 1;
  }
  iVar3 = sub_0800FA94(uVar2);
  if (iVar3 == 0) {
    if (!bVar4) {
      if ((DAT_02022b64 & 1) != 0) {
        if (((DAT_02022b6e & 1) == 0) && ((DAT_02022b64 & 4) == 0)) {
          if (DAT_02022b28 < 359999) {
            DAT_02022b28 = DAT_02022b28 + 1;
          }
          if (*(uint *)(DAT_02022b20 + 8) < 21599999) {
            *(uint *)(DAT_02022b20 + 8) = *(uint *)(DAT_02022b20 + 8) + 1;
          }
        }
      }
      sub_0801591C();
      if (cVar1 == '\0') {
        sub_0800DBAC(DAT_02023118);
        sub_0800DBAC(DAT_02022e94);
        sub_0800DB7C(DAT_02022e98);
        sub_0800DB7C(DAT_02022e8c);
        sub_080764E4();
        sub_0800DB7C(DAT_02022e90);
        sub_0800DB7C(DAT_020231fc);
      }
      sub_0800DBAC(DAT_0202320c);
      sub_080880B0();
      sub_08005564();
      if (cVar1 == '\0') {
        sub_0800DC4C(DAT_02023118);
        sub_0800DC4C(DAT_02022e94);
        sub_0800DC4C(DAT_02022e98);
        sub_0800DC4C(DAT_02022e8c);
        sub_0800DC4C(DAT_02022f74);
        sub_0800DC4C(DAT_02022e90);
        sub_0800DC4C(DAT_020231fc);
        sub_0800DC4C(DAT_0202320c);
      }
    }
    sub_080C2028(param_1);
    sub_08005580();
    if ((((((((DAT_02004ca8 & 8) != 0) && ((DAT_0202b630 & 0x40) == 0)) && (DAT_0202b62c != 0)) &&
          (((DAT_02022b64 & 0x80) == 0 && ((DAT_02022b64 & 1) != 0)))) &&
         (((DAT_02022b6e & 1) == 0 && (((DAT_02022b64 & 8) == 0 && (DAT_02022cb0 == 0)))))) &&
        (*(char *)(param_1 + 2) == '\0')) && ((cVar1 == '\0' && (DAT_02004f90 == 0)))) {
      if ((DAT_02022ae0 & 2) == 0) {
        sub_08001DC8();
      }
      *(undefined2 *)(param_1 + 0x1af0) = 1;
      sub_080BF0A4(param_1,0x400);
    }
    iVar3 = param_1 + 0x99c;
    sub_0800DD7C(DAT_02023118,iVar3);
    sub_0800DD7C(DAT_02022e94,iVar3);
    sub_0800DD7C(DAT_02022e98,iVar3);
    sub_0800DD7C(DAT_02022e8c,iVar3);
    sub_0800DCB0(DAT_0202320c,iVar3);
    sub_08025B38(iVar3);
    sub_0800DCB0(DAT_02022f74,iVar3);
    sub_0800DCB0(DAT_0202300c,iVar3);
    sub_0800DD7C(DAT_020231fc,iVar3);
    sub_080C2108(param_1);
    sub_080BC7BC();
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cbe64 + (uint)*(byte *)(param_1 + 2) * 4));
    uVar2 = 0;
    if ((bVar4) || (cVar1 != '\0')) {
      uVar2 = 1;
    }
    sub_0800FB38(uVar2);
    if ((!bVar4) && (cVar1 == '\0')) {
      if ((DAT_0202285c != '\0') && ((DAT_02004fa1 & 2) == 0)) {
        sub_08001EAC(5);
      }
      DAT_0202285c = '\0';
    }
    DAT_02022870 = DAT_02004fa2;
  }
  else {
    DAT_02004f30 = DAT_02004f30 & 0xf0ff | 0x100;
    sub_080BF0A4(param_1,0x600);
  }
  return in_lr;
}


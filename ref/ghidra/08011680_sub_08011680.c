// sub_08011680 at 0x08011680 (thumb)

undefined4 sub_08011680(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  pcVar2 = (char *)(param_1 + 0x174);
  if (*pcVar2 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a4008);
      *pcVar2 = '\x01';
    }
    else if (DAT_02022aec == '\x01') {
      sub_08014444(&DAT_02022b6c,&DAT_082a43b8);
      *pcVar2 = '\x03';
    }
  }
  else if ((DAT_0200520c & 0x7f) == 3) {
    if ((*pcVar2 == '\x01') && (*(int *)(iVar3 + 0x4c) >> 0xc == 0x468)) {
      sub_08014444(&DAT_02022b6c,&DAT_082a4070);
      *pcVar2 = '\x02';
    }
    else if ((*(char *)(param_1 + 0x174) == '\x02') && ((DAT_02022b64 & 0x20) != 0)) {
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a4160);
      DAT_02022b6e = DAT_02022b6e & 0xfffd;
      DAT_02022b64 = DAT_02022b64 & 0xfffd | 1;
      sub_0800FBF4(1);
      *(char *)(param_1 + 0x174) = '\x03';
    }
    else {
      pcVar2 = (char *)(param_1 + 0x174);
      if (*pcVar2 == '\x03') {
        DAT_02004fa0 = DAT_02004fa0 & 0x7f;
        DAT_02004fa1 = 0;
        sub_0800DFCC(0x80);
        *(undefined4 *)(param_1 + 0x17c) = 0x2a30;
        *pcVar2 = '\x04';
      }
      else if ((*pcVar2 == '\x04') && (*(int *)(iVar3 + 0x4c) >> 0xc == 0x476)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a4210);
        *pcVar2 = '\x05';
      }
      else if ((*(char *)(param_1 + 0x174) == '\x05') && (*(int *)(iVar3 + 0x4c) >> 0xc == 0x4c4)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a4248);
        *(char *)(param_1 + 0x174) = '\x06';
      }
      else if (((*(char *)(param_1 + 0x174) == '\x06') && (*(int *)(iVar3 + 0x4c) >> 0xc == 0x4f6))
              && (*(int *)(iVar3 + 0x50) >> 0xc < 0x14)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a4280);
        *(char *)(param_1 + 0x174) = '\a';
      }
      else if ((*(char *)(param_1 + 0x174) == '\a') && ((DAT_02022b64 & 4) != 0)) {
        DAT_02004fa0 = DAT_02004fa0 | 0x80;
        DAT_02022b64 = DAT_02022b64 & 0xfffe;
        sub_08014444(&DAT_02022b6c,&DAT_082a42f0);
        *(char *)(param_1 + 0x174) = '\b';
      }
      else {
        if (3 < *(byte *)(param_1 + 0x174)) {
          iVar1 = *(int *)(param_1 + 0x17c);
          if ((iVar1 != 0) && (((DAT_02022ae0 & 4) == 0 || ((*(uint *)(param_1 + 8) & 1) != 0)))) {
            *(int *)(param_1 + 0x17c) = iVar1 + -1;
          }
          if (*(int *)(param_1 + 0x17c) == 0x708) {
            sub_080BC818(0xa0e,0x3c);
            DAT_02022ad9 = DAT_02022ad9 | 2;
          }
          if (*(int *)(param_1 + 0x17c) == 0) {
            DAT_02004fa0 = DAT_02004fa0 | 0x80;
            DAT_02022b64 = DAT_02022b64 & 0xfffe | 8;
            sub_08014444(&DAT_02022b6c,&DAT_082a4338);
            DAT_02022ad9 = DAT_02022ad9 | 4;
            *(undefined *)(param_1 + 0x174) = 7;
            return in_lr;
          }
        }
        if ((5 < *(byte *)(param_1 + 0x174)) && (*(int *)(iVar3 + 0x4c) >> 0xc == 0x4c2)) {
          *(undefined4 *)(iVar3 + 0x4c) = 0x4c3000;
          sub_08014444(&DAT_02022b6c,&DAT_082a42b8);
        }
      }
    }
  }
  return in_lr;
}


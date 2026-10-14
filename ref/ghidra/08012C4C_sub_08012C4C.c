// sub_08012C4C at 0x08012C4C (thumb)

undefined4 sub_08012C4C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  cVar1 = *(char *)(param_1 + 0x174);
  if (cVar1 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a60d4);
      *(char *)(param_1 + 0x174) = '\x01';
      return in_lr;
    }
    if (DAT_02022aec != '\x01') {
      return in_lr;
    }
    sub_08014444(&DAT_02022b6c,&DAT_082a64c4);
    uVar2 = 7;
  }
  else if ((DAT_0200520c & 0x7f) == 6) {
    if (cVar1 == '\x01') {
      iVar4 = *(int *)(iVar6 + 0x4c) >> 0xc;
      iVar3 = sub_080C8AD0(iVar4,0xf);
      if (((iVar3 == 9) && (iVar3 = sub_080C8AD0(*(int *)(iVar6 + 0x50) >> 0xc,10), iVar3 == 0x2e))
         && (iVar4 < 0x94)) {
        DAT_02004fa1 = DAT_02004fa1 | 2;
        sub_08014444(&DAT_02022b6c,&DAT_082a6154);
        uVar2 = 2;
        goto LAB_080130a2;
      }
    }
    if ((*(char *)(param_1 + 0x174) == '\x02') &&
       (DAT_02004fa1 = 0, *(int *)(iVar6 + 0x4c) >> 0xc < 0x87)) {
      sub_08014444(&DAT_02022b6c,&DAT_082a618c);
      *(char *)(param_1 + 0x174) = '\x03';
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x174) == '\x03') && ((DAT_02022add & 6) == 6)) {
      sub_08014444(&DAT_02022b6c,&DAT_082a6204);
      *(char *)(param_1 + 0x174) = '\x04';
      return in_lr;
    }
    if (*(char *)(param_1 + 0x174) == '\x04') {
      iVar4 = *(int *)(iVar6 + 0x4c) >> 0xc;
      iVar3 = sub_080C8AD0(iVar4,0xf);
      if (((iVar3 == 8) && (iVar3 = sub_080C8AD0(*(int *)(iVar6 + 0x50) >> 0xc,10), iVar3 == 0x2b))
         && (0x79 < iVar4)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a6224);
        uVar2 = 5;
        goto LAB_080130a2;
      }
    }
    if ((*(char *)(param_1 + 0x174) == '\x05') && ((DAT_02022b64 & 0x20) != 0)) {
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a62ec);
      DAT_02022b6e = DAT_02022b6e & 0xfffd;
      DAT_02022b64 = DAT_02022b64 & 0xffdd | 1;
      DAT_02022add = DAT_02022add | 8;
      uVar2 = 6;
    }
    else {
      pcVar5 = (char *)(param_1 + 0x174);
      if (*pcVar5 == '\x06') {
        DAT_02004fa0 = DAT_02004fa0 & 0x7f;
        DAT_02004fa1 = 0;
        *pcVar5 = '\a';
      }
      if (((*pcVar5 == '\a') && (0xd2 < *(int *)(iVar6 + 0x4c) >> 0xc)) &&
         (*(int *)(iVar6 + 0x50) >> 0xc < 0x19a)) {
        DAT_02004fa1 = DAT_02004fa1 | 2;
        sub_08014444(&DAT_02022b6c,&DAT_082a636c);
        *pcVar5 = '\b';
        return in_lr;
      }
      if (((*(char *)(param_1 + 0x174) == '\b') && (0xe1 < *(int *)(iVar6 + 0x4c) >> 0xc)) &&
         (*(int *)(iVar6 + 0x50) >> 0xc < 0x19a)) {
        DAT_02004fa1 = 0;
        sub_08014444(&DAT_02022b6c,&DAT_082a63a4);
        sub_0800FBF4(1);
        *(char *)(param_1 + 0x174) = '\t';
        return in_lr;
      }
      if ((*(char *)(param_1 + 0x174) != '\t') || ((DAT_02022b64 & 0x20) == 0)) {
        pcVar5 = (char *)(param_1 + 0x174);
        if (*pcVar5 == '\n') {
          DAT_02004fa0 = DAT_02004fa0 & 0x7f;
          DAT_02004fa1 = 0;
          *pcVar5 = '\v';
        }
        if ((*pcVar5 == '\v') && ((*(byte *)(iVar6 + 0x1a9) & 4) != 0)) {
          sub_08014444(&DAT_02022b6c,&DAT_082a651c);
          *pcVar5 = '\f';
          return in_lr;
        }
        if ((*(char *)(param_1 + 0x174) == '\f') &&
           ((0x105 < *(int *)(iVar6 + 0x4c) >> 0xc && (*(int *)(iVar6 + 0x50) >> 0xc < 0x19a)))) {
          sub_08014444(&DAT_02022b6c,&DAT_082a6534);
          *(char *)(param_1 + 0x174) = '\r';
          return in_lr;
        }
        if (*(char *)(param_1 + 0x174) != '\r') {
          return in_lr;
        }
        if (((*(char *)(param_1 + 0x175) == '\0') && (0x10a < *(int *)(iVar6 + 0x4c) >> 0xc)) &&
           (*(int *)(iVar6 + 0x50) >> 0xc < 0x19a)) {
          sub_08014444(&DAT_02022b6c,&DAT_082a6574);
          *(char *)(param_1 + 0x175) = '\x01';
          return in_lr;
        }
        if (*(char *)(param_1 + 0x175) != '\x01') {
          return in_lr;
        }
        if (*(int *)(iVar6 + 0x4c) >> 0xc < 0x10f) {
          return in_lr;
        }
        sub_08014444(&DAT_02022b6c,&DAT_082a65ac);
        DAT_02022b64 = DAT_02022b64 & 0xfffe;
        DAT_02022add = DAT_02022add | 0x10;
        *(char *)(param_1 + 0x175) = '\x02';
        return in_lr;
      }
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a642c);
      DAT_02022b6e = DAT_02022b6e & 0xfffd;
      DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
      uVar2 = 10;
    }
  }
  else {
    if (cVar1 != '\r') {
      return in_lr;
    }
    sub_08014444(&DAT_02022b6c,&DAT_082a65e4);
    DAT_02022b64 = DAT_02022b64 & 0xfffe;
    uVar2 = 0xe;
  }
LAB_080130a2:
  *(undefined *)(param_1 + 0x174) = uVar2;
  return in_lr;
}


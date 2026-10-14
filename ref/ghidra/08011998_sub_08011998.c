// sub_08011998 at 0x08011998 (thumb)

undefined4 sub_08011998(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  cVar1 = *(char *)(param_1 + 0x174);
  if (cVar1 == '\0') {
    uVar3 = 1;
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec != '\0') {
      if (DAT_02022aec != '\x01') {
        if (DAT_02022aec != '\x02') {
          return in_lr;
        }
        sub_08014444(&DAT_02022b6c,&DAT_082a48ec);
LAB_08011b26:
        *(undefined *)(param_1 + 0x174) = 6;
        return in_lr;
      }
      puVar2 = &DAT_082a489c;
LAB_08011a34:
      sub_08014444(&DAT_02022b6c,puVar2);
      *(char *)(param_1 + 0x174) = '\x02';
      return in_lr;
    }
    puVar2 = &DAT_082a4504;
  }
  else {
    if ((DAT_0200520c & 0x7f) != 4) {
      return in_lr;
    }
    if ((cVar1 == '\x01') && (*(int *)(iVar5 + 0x4c) >> 0xc < 0x195)) {
      puVar2 = &DAT_082a456c;
      goto LAB_08011a34;
    }
    if ((*(char *)(param_1 + 0x174) == '\x02') && (*(int *)(iVar5 + 0x4c) >> 0xc < 0x49)) {
      DAT_02004fa1 = DAT_02004fa1 | 2;
      *(char *)(param_1 + 0x174) = '\x03';
      return in_lr;
    }
    pcVar4 = (char *)(param_1 + 0x174);
    if (*pcVar4 == '\x03') {
      DAT_02004fa1 = 0;
      sub_08014444(&DAT_02022b6c,&DAT_082a457c);
      sub_0800FBF4(1);
      *pcVar4 = '\x04';
      return in_lr;
    }
    if ((*pcVar4 == '\x04') && ((DAT_02022b64 & 0x20) != 0)) {
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a463c);
      DAT_02022b6e = DAT_02022b6e & 0xfffd;
      DAT_02022b64 = DAT_02022b64 & 0xfffd | 1;
      sub_0800FBF4(2);
      *pcVar4 = '\x05';
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x174);
    if (cVar1 == '\x05') {
      DAT_02004fa0 = DAT_02004fa0 & 0x7f;
      DAT_02004fa1 = 0;
      goto LAB_08011b26;
    }
    if ((cVar1 == '\x06') && (*(int *)(iVar5 + 0x4c) >> 0xc < 0x29)) {
      sub_08014444(&DAT_02022b6c,&DAT_082a46dc);
      *(char *)(param_1 + 0x174) = '\a';
      return in_lr;
    }
    if (*(char *)(param_1 + 0x174) != '\a') {
      return in_lr;
    }
    uVar3 = 8;
    if ((DAT_02022b64 & 8) == 0) {
      if (*(int *)(*(int *)(param_1 + 0x3c) + 0x4c) >> 0xc < 0x1bb) {
        return in_lr;
      }
      if (*(int *)(iVar5 + 0x4c) >> 0xc < 0x1bf) {
        return in_lr;
      }
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 4;
      puVar2 = &DAT_082a47b4;
    }
    else {
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      puVar2 = &DAT_082a4834;
    }
  }
  sub_08014444(&DAT_02022b6c,puVar2);
  *(undefined *)(param_1 + 0x174) = uVar3;
  return in_lr;
}


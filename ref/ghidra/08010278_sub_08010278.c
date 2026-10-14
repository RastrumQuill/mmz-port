// sub_08010278 at 0x08010278 (thumb)

undefined4 sub_08010278(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  pcVar5 = (char *)(param_1 + 0x174);
  if (*pcVar5 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      puVar3 = &DAT_082a0b8c;
    }
    else {
      if (DAT_02022aec != '\x01') {
        if (DAT_02022aec != '\x02') {
          return in_lr;
        }
        if ((DAT_0202a606 & 0x80) == 0) {
          sub_0801CC08(&DAT_0202a614,0,1);
        }
        else {
          sub_0801CC08(&DAT_0202a614,1,1);
        }
        sub_0801C7EC(&DAT_0202b5a0,&DAT_0202a604);
        sub_08014444(&DAT_02022b6c,&DAT_082a2184);
        *(undefined *)(param_1 + 0x174) = 4;
        return in_lr;
      }
      puVar3 = &DAT_082a20cc;
    }
    sub_08014444(&DAT_02022b6c,puVar3);
    *pcVar5 = '\x01';
    return in_lr;
  }
  if (*pcVar5 == '\x01') {
    sub_0800FBF4(1);
    *pcVar5 = '\x02';
  }
  if ((*pcVar5 == '\x02') && (*(int *)(iVar6 + 0x4c) >> 0xc == 0x2a8)) {
    DAT_02004fa0 = DAT_02004fa0 | 0x80;
    DAT_02004fa1 = DAT_02004fa1 | 2;
    sub_08014444(&DAT_02022b6c,&DAT_082a1a34);
    uVar1 = 3;
  }
  else {
    pcVar5 = (char *)(param_1 + 0x174);
    if (*pcVar5 == '\x03') {
      DAT_02004fa0 = DAT_02004fa0 & 0x7f;
      DAT_02004fa1 = 0;
      sub_08014444(&DAT_02022b6c,&DAT_082a1a5c);
      *pcVar5 = '\x04';
      return in_lr;
    }
    if ((*pcVar5 == '\x04') && (*(int *)(iVar6 + 0x4c) >> 0xc == 0x2c6)) {
      sub_0800FBF4(2);
      sub_08014444(&DAT_02022b6c,&DAT_082a1c84);
      DAT_02022b64 = DAT_02022b64 | 2;
      *(undefined4 *)(param_1 + 0x178) = 0xe10;
      *(undefined2 *)(param_1 + 0x176) = *(undefined2 *)(iVar6 + 0x8c);
      *pcVar5 = '\x05';
      return in_lr;
    }
    if (*(char *)(param_1 + 0x174) == '\x05') {
      iVar4 = *(int *)(param_1 + 0x2c);
      iVar2 = *(int *)(param_1 + 0x178);
      if (((((iVar2 == 0) || (iVar2 = iVar2 + -1, *(int *)(param_1 + 0x178) = iVar2, iVar2 == 0)) ||
           (*(short *)(iVar4 + 0x8c) < 0x16)) ||
          ((int)*(short *)(iVar6 + 0x8c) <= (int)(uint)(*(ushort *)(param_1 + 0x176) >> 1))) &&
         ((*(char *)(iVar4 + 0xd) == '\0' && (*(char *)(iVar4 + 0xbc) == '\0')))) {
        DAT_02004fa0 = DAT_02004fa0 | 0x80;
        sub_08014444(&DAT_02022b6c,&DAT_082a1e34);
        *(undefined *)(param_1 + 0x174) = 6;
        return in_lr;
      }
    }
    if ((*(char *)(param_1 + 0x174) == '\x06') && ((DAT_02022b64 & 0x20) != 0)) {
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a1f1c);
      DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
      *(char *)(param_1 + 0x174) = '\a';
      return in_lr;
    }
    pcVar5 = (char *)(param_1 + 0x174);
    if (*pcVar5 == '\a') {
      DAT_02004fa0 = DAT_02004fa0 & 0x7f;
      DAT_02004fa1 = 0;
      *pcVar5 = '\b';
    }
    if ((*pcVar5 == '\b') && (*(int *)(iVar6 + 0x4c) >> 0xc == 0x2f1)) {
      sub_08014444(&DAT_02022b6c,&DAT_082a2054);
      uVar1 = 9;
    }
    else {
      if (*(char *)(param_1 + 0x174) != '\t') {
        return in_lr;
      }
      if ((DAT_0200520c & 0x7f) == 0) {
        return in_lr;
      }
      DAT_02022b64 = DAT_02022b64 & 0xfffe;
      sub_08014444(&DAT_02022b6c,&DAT_082a209c);
      uVar1 = 10;
    }
  }
  *(undefined *)(param_1 + 0x174) = uVar1;
  return in_lr;
}


// sub_08010E64 at 0x08010E64 (thumb)

undefined4 sub_08010E64(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  pcVar4 = (char *)(param_1 + 0x174);
  if (*pcVar4 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a33d0);
      *pcVar4 = '\x01';
      return in_lr;
    }
    if (DAT_02022aec != '\x01') {
      return in_lr;
    }
    sub_08014444(&DAT_02022b6c,&DAT_082a3770);
    *pcVar4 = '\x03';
    return in_lr;
  }
  if ((DAT_0200520c & 0x7f) != 2) {
    return in_lr;
  }
  if (*pcVar4 == '\x01') {
    iVar2 = *(int *)(iVar3 + 0x4c) >> 0xc;
    if ((*(char *)(param_1 + 0x175) == '\0') && (iVar2 == 0x311)) {
      sub_080BC818(0x707,0x3c);
      *(char *)(param_1 + 0x175) = '\x01';
      return in_lr;
    }
    if (iVar2 == 0x3ed) {
      sub_08014444(&DAT_02022b6c,&DAT_082a3438);
      uVar1 = 2;
      goto LAB_080111d6;
    }
  }
  if ((*(char *)(param_1 + 0x174) == '\x02') && ((DAT_02022ad5 & 0x10) != 0)) {
    sub_08014444(&DAT_02022b6c,&DAT_082a3448);
    *(char *)(param_1 + 0x174) = '\x03';
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x174) == '\x03') && (*(int *)(iVar3 + 0x4c) >> 0xc == 0x42a)) {
    sub_08014444(&DAT_02022b6c,&DAT_082a3488);
    *(undefined4 *)(param_1 + 0x17c) = 0x2a30;
    sub_0800FBF4(1);
    *(char *)(param_1 + 0x174) = '\x04';
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x174) == '\x04') && (*(int *)(iVar3 + 0x4c) >> 0xc == 0x4b0)) {
    DAT_02004fa1 = DAT_02004fa1 | 2;
    sub_08014444(&DAT_02022b6c,&DAT_082a3538);
    *(char *)(param_1 + 0x174) = '\x05';
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x174) == '\x05') && (*(int *)(iVar3 + 0x4c) >> 0xc == 0x4bf)) {
    DAT_02004fa1 = 0;
    sub_08014444(&DAT_02022b6c,&DAT_082a3550);
    *(char *)(param_1 + 0x174) = '\x06';
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x174) == '\x06') && ((DAT_02022b64 & 0x20) != 0)) {
    DAT_02004fa0 = DAT_02004fa0 | 0x80;
    DAT_02004fa1 = DAT_02004fa1 | 2;
    sub_08014444(&DAT_02022b6c,&DAT_082a35d0);
    DAT_02022b6e = DAT_02022b6e & 0xfffd;
    DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
    *(char *)(param_1 + 0x174) = '\a';
    return in_lr;
  }
  pcVar4 = (char *)(param_1 + 0x174);
  if (*pcVar4 == '\a') {
    local_18 = 0x4db000;
    local_14 = 0x5c000;
    sub_080060B4(&DAT_02022c7c,0x10);
    sub_0800DFCC(0x10);
    DAT_02004fa0 = DAT_02004fa0 & 0x7f;
    DAT_02004fa1 = 0;
    sub_08015698(0xc,&local_18);
    sub_08014444(&DAT_02022b6c,&DAT_082a3640);
    *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
    *pcVar4 = '\b';
    return in_lr;
  }
  if ((*pcVar4 == '\b') && ((*(byte *)(iVar3 + 0x1aa) & 0x20) != 0)) {
    sub_08014444(&DAT_02022b6c,&DAT_082a37b8);
    DAT_02022b64 = DAT_02022b64 & 0xfffe;
    *pcVar4 = '\t';
  }
  if (2 < (byte)(*(char *)(param_1 + 0x174) - 4U)) {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x17c);
  if ((iVar3 != 0) && (((DAT_02022ae0 & 4) == 0 || ((*(uint *)(param_1 + 8) & 1) != 0)))) {
    *(int *)(param_1 + 0x17c) = iVar3 + -1;
  }
  if (*(int *)(param_1 + 0x17c) == 600) {
    sub_080BC818(0x705,0x3c);
  }
  if (*(int *)(param_1 + 0x17c) != 0) {
    return in_lr;
  }
  DAT_02004fa0 = DAT_02004fa0 | 0x80;
  DAT_02022b64 = DAT_02022b64 & 0xfffe | 8;
  sub_08014444(&DAT_02022b6c,&DAT_082a36d0);
  uVar1 = 9;
LAB_080111d6:
  *(undefined *)(param_1 + 0x174) = uVar1;
  return in_lr;
}


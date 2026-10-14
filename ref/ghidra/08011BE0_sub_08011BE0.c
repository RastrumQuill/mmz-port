// sub_08011BE0 at 0x08011BE0 (thumb)

undefined4 sub_08011BE0(int param_1)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  pcVar3 = (char *)(param_1 + 0x174);
  if (*pcVar3 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a4a34);
      *pcVar3 = '\x01';
      return in_lr;
    }
    if (DAT_02022aec != '\x01') {
      return in_lr;
    }
    sub_08014444(&DAT_02022b6c,&DAT_082a4d7c);
    *pcVar3 = '\x05';
    return in_lr;
  }
  if ((DAT_0200520c & 0x7f) != 4) {
    return in_lr;
  }
  if ((*pcVar3 == '\x01') && (*(int *)(iVar5 + 0x4c) >> 0xc < 0x1b3)) {
    sub_08014444(&DAT_02022b6c,&DAT_082a4b04);
    *(undefined2 *)(param_1 + 0x176) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *pcVar3 = '\x02';
    return in_lr;
  }
  if ((byte)(*(char *)(param_1 + 0x174) - 2U) < 2) {
    DAT_02022ca4 = DAT_02022c7c + 0x7800;
    if (DAT_02022c7c + 0x6800 < *(int *)(iVar5 + 0x4c)) {
      *(int *)(iVar5 + 0x4c) = DAT_02022c7c + 0x6800;
    }
  }
  if (*(char *)(param_1 + 0x174) != '\x02') goto LAB_08011ddc;
  puVar4 = (uint *)(param_1 + 0x178);
  if (*puVar4 < 0xe10) {
    *puVar4 = *puVar4 + 1;
  }
  if ((*puVar4 < 0x4b1) &&
     (uVar1 = *(ushort *)(param_1 + 0x176), *(ushort *)(param_1 + 0x176) = uVar1 + 1, 199 < uVar1))
  {
LAB_08011d5c:
    local_28 = DAT_02022c7c + -0x8800;
    local_24 = sub_08008360(local_28,0x31000);
    sub_08049730(&local_28,3);
    *(undefined2 *)(param_1 + 0x176) = 0;
  }
  else {
    if (*puVar4 - 0x4b1 < 0x95f) {
      uVar1 = *(ushort *)(param_1 + 0x176);
      *(ushort *)(param_1 + 0x176) = uVar1 + 1;
      iVar2 = sub_080C8C38(*puVar4 - 0x4b0,300);
      if (iVar2 * -0xf + 200U <= (uint)uVar1) goto LAB_08011d5c;
    }
    if ((0xe0f < *puVar4) &&
       (uVar1 = *(ushort *)(param_1 + 0x176), *(ushort *)(param_1 + 0x176) = uVar1 + 1, 0x4f < uVar1
       )) goto LAB_08011d5c;
  }
  if (*(int *)(iVar5 + 0x4c) >> 0xc < 0xa5) {
    local_20 = DAT_02022c7c + -0xa000;
    local_1c = 0x26000;
    sub_080AAC14(&local_20,0,1);
    sub_080BC818(0xc03,0x3c);
    *(undefined *)(param_1 + 0x174) = 3;
    return in_lr;
  }
LAB_08011ddc:
  if ((*(char *)(param_1 + 0x174) == '\x03') && (*(int *)(iVar5 + 0x4c) >> 0xc < 0x54)) {
    DAT_02004fa1 = DAT_02004fa1 | 2;
    DAT_02022aae = DAT_02022aae | 1;
    *(char *)(param_1 + 0x174) = '\x04';
  }
  else {
    pcVar3 = (char *)(param_1 + 0x174);
    if (*pcVar3 == '\x04') {
      DAT_02004fa1 = 0;
      sub_08014444(&DAT_02022b6c,&DAT_082a4b3c);
      sub_0800FBF4(1);
      *pcVar3 = '\x05';
    }
    else if ((*pcVar3 == '\x05') && ((DAT_02022b64 & 0x20) != 0)) {
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a4cf4);
      DAT_02022b6e = DAT_02022b6e & 0xfffd;
      DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
      *pcVar3 = '\x06';
    }
    else {
      pcVar3 = (char *)(param_1 + 0x174);
      if (*pcVar3 == '\x06') {
        DAT_02004fa0 = DAT_02004fa0 & 0x7f;
        DAT_02004fa1 = 0;
        DAT_02022aae = DAT_02022aae & 0xfffe;
        *pcVar3 = '\a';
      }
      if ((*pcVar3 == '\a') && ((*(byte *)(iVar5 + 0x1a7) & 0x20) != 0)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a4d54);
        DAT_02022b64 = DAT_02022b64 & 0xfffe;
        *pcVar3 = '\b';
      }
    }
  }
  return in_lr;
}


// sub_0801242C at 0x0801242C (thumb)

undefined4 sub_0801242C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  bVar1 = *(byte *)(param_1 + 0x174);
  if (bVar1 == 0) {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a564c);
      *(byte *)(param_1 + 0x174) = 1;
      return in_lr;
    }
    if (DAT_02022aec != '\x01') {
      if (DAT_02022aec != '\x02') {
        return in_lr;
      }
      sub_08014444(&DAT_02022b6c,&DAT_082a5b34);
      DAT_02022adc = DAT_02022adc | 1;
LAB_08012734:
      *(undefined *)(param_1 + 0x174) = 7;
      return in_lr;
    }
    sub_08014444(&DAT_02022b6c,&DAT_082a5acc);
  }
  else {
    if ((DAT_0200520c & 0x7f) != 5) {
      if ((DAT_0200520c & 0x7f) != 4) {
        return in_lr;
      }
      if (((*(char *)(param_1 + 0x175) == '\x01') && (bVar1 < 3)) &&
         ((*(ushort *)(param_1 + 6) & 1) != 0)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a56cc);
        *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) ^ 1;
        return in_lr;
      }
      iVar5 = 0x175;
      uVar2 = 1;
LAB_080128d2:
      *(undefined *)(param_1 + iVar5) = uVar2;
      return in_lr;
    }
    if (((*(char *)(param_1 + 0x175) == '\0') && (bVar1 < 3)) &&
       ((*(ushort *)(param_1 + 6) & 1) == 0)) {
      sub_08014444(&DAT_02022b6c,&DAT_082a56ec);
      *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 1;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x175) = 0;
    if ((*(char *)(param_1 + 0x174) == '\x01') && (*(int *)(iVar5 + 0x4c) >> 0xc == 0x159)) {
      *(undefined4 *)(iVar5 + 0x4c) = 0x159000;
      sub_08014444(&DAT_02022b6c,&DAT_082a570c);
      *(char *)(param_1 + 0x174) = '\x02';
      return in_lr;
    }
    if (((*(char *)(param_1 + 0x174) != '\x02') || (*(int *)(iVar5 + 0x4c) >> 0xc != 0xee)) ||
       (*(int *)(iVar5 + 0x50) >> 0xc != 0x6b)) {
      if (((*(char *)(param_1 + 0x174) == '\x03') && (*(int *)(iVar5 + 0x4c) >> 0xc == 0xfd)) &&
         (*(int *)(iVar5 + 0x50) >> 0xc == 0x57)) {
        *(undefined4 *)(iVar5 + 0x4c) = 0xfd000;
        sub_08014444(&DAT_02022b6c,&DAT_082a57e4);
        *(char *)(param_1 + 0x174) = '\x04';
        return in_lr;
      }
      if (*(char *)(param_1 + 0x174) == '\x04') {
        iVar4 = 0;
        if (((int)(uint)DAT_02022adb >> 2 & 1U) == 0) {
          puVar3 = &DAT_0829ff44;
          do {
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + 1;
            if (5 < iVar4) break;
          } while (((int)(uint)(byte)(&DAT_02022ad4)[(int)*puVar3 >> 3] >> (*puVar3 & 7) & 1U) == 0)
          ;
        }
        if (iVar4 != 6) {
          sub_08014444(&DAT_02022b6c,&DAT_082a589c);
          iVar5 = 0x174;
          uVar2 = 5;
          goto LAB_080128d2;
        }
      }
      if (*(char *)(param_1 + 0x174) == '\x05') {
        iVar4 = 0;
        if (((int)(uint)DAT_02022adb >> 2 & 1U) != 0) {
          puVar3 = &DAT_0829ff44;
          do {
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + 1;
            if (5 < iVar4) break;
          } while (((int)(uint)(byte)(&DAT_02022ad4)[(int)*puVar3 >> 3] >> (*puVar3 & 7) & 1U) != 0)
          ;
        }
        if (iVar4 == 6) {
          sub_08014444(&DAT_02022b6c,&DAT_082a58d4);
          DAT_02022adc = DAT_02022adc | 1;
          *(undefined *)(param_1 + 0x174) = 6;
          return in_lr;
        }
      }
      if ((((byte)(*(char *)(param_1 + 0x174) - 4U) < 2) && (*(int *)(iVar5 + 0x4c) >> 0xc == 0x100)
          ) && (*(int *)(iVar5 + 0x50) >> 0xc == 0x57)) {
        *(undefined4 *)(iVar5 + 0x4c) = 0x101000;
        sub_08014444(&DAT_02022b6c,&DAT_082a5864);
        return in_lr;
      }
      if (((*(char *)(param_1 + 0x174) != '\x06') || (*(int *)(iVar5 + 0x4c) >> 0xc != 0xda)) ||
         (*(int *)(iVar5 + 0x50) >> 0xc < 0x78)) {
        if (((*(char *)(param_1 + 0x174) == '\a') && (*(int *)(iVar5 + 0x4c) >> 0xc == 0xeb)) &&
           (0x77 < *(int *)(iVar5 + 0x50) >> 0xc)) {
          DAT_02004fa1 = DAT_02004fa1 | 2;
          DAT_02022aae = DAT_02022aae | 1;
          sub_0800FBF4(2);
          *(char *)(param_1 + 0x174) = '\b';
          return in_lr;
        }
        pcVar6 = (char *)(param_1 + 0x174);
        if (*pcVar6 == '\b') {
          DAT_02004fa1 = 0;
          sub_08014444(&DAT_02022b6c,&DAT_082a5954);
          *pcVar6 = '\t';
          return in_lr;
        }
        if ((*pcVar6 == '\t') && ((DAT_02022b64 & 0x20) != 0)) {
          DAT_02004fa0 = DAT_02004fa0 | 0x80;
          DAT_02004fa1 = DAT_02004fa1 | 2;
          sub_08014444(&DAT_02022b6c,&DAT_082a5a4c);
          DAT_02022b6e = DAT_02022b6e & 0xfffd;
          DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
          DAT_02022adc = DAT_02022adc | 2;
          *pcVar6 = '\n';
          return in_lr;
        }
        pcVar6 = (char *)(param_1 + 0x174);
        if (*pcVar6 == '\n') {
          DAT_02004fa0 = DAT_02004fa0 & 0x7f;
          DAT_02004fa1 = 0;
          *pcVar6 = '\v';
        }
        if (*pcVar6 != '\v') {
          return in_lr;
        }
        if ((*(byte *)(iVar5 + 0x1aa) & 4) == 0) {
          return in_lr;
        }
        sub_08014444(&DAT_02022b6c,&DAT_082a5b7c);
        DAT_02022b64 = DAT_02022b64 & 0xfffe;
        *pcVar6 = '\f';
        return in_lr;
      }
      sub_08014444(&DAT_02022b6c,&DAT_082a591c);
      goto LAB_08012734;
    }
    *(undefined4 *)(iVar5 + 0x4c) = 0xee000;
    sub_08014444(&DAT_02022b6c,&DAT_082a5754);
    sub_0800FBF4(1);
  }
  *(undefined *)(param_1 + 0x174) = 3;
  return in_lr;
}


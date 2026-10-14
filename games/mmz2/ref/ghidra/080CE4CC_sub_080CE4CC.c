// sub_080CE4CC at 0x080CE4CC (thumb)

undefined4 sub_080CE4CC(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  byte abStack_2c [12];
  undefined auStack_20 [12];
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_080EF3F0(abStack_2c,&DAT_080ef7d4,10);
  sub_080EF3F0(auStack_20,&DAT_080ef7de,10);
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) != '\0') {
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0xb4)) {
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      iVar5 = *(int *)(param_1 + 0x58) + iVar5;
      *(int *)(param_1 + 0x58) = iVar5;
      iVar3 = *(int *)(param_1 + 0xb4);
      if (iVar3 < iVar5) {
        *(int *)(param_1 + 0x58) = iVar3;
      }
    }
    if (*(int *)(DAT_0202e130 + 0x54) + -0xf000 <= *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(undefined *)(param_1 + 0xf) = 1;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(*(int *)(iVar5 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xbc);
  iVar3 = *piVar2;
  if ((iVar3 == 0) || ((*(byte *)(iVar3 + 0xc) < 2 && (*(byte *)(iVar3 + 0xd) < 5)))) {
    switch(*(undefined *)(param_1 + 0xd)) {
    case 0:
      pcVar4 = (char *)(iVar5 + 0xb8);
      if (*pcVar4 == '\0') {
        return in_lr;
      }
      if ((abStack_2c[*(byte *)(param_1 + 0x11)] != 0xff) &&
         (((int)(uint)(byte)(&DAT_0202ebb4)
                            [(ushort)(&DAT_083498e0)[abStack_2c[*(byte *)(param_1 + 0x11)]] >> 3] >>
           ((ushort)(&DAT_083498e0)[abStack_2c[*(byte *)(param_1 + 0x11)]] & 7) & 1U) == 0)) {
        return in_lr;
      }
      *pcVar4 = '\0';
      pcVar4[*(byte *)(param_1 + 0x11) + 2] = '\x01';
      iVar5 = sub_0808FF1C(param_1,0,auStack_20[*(byte *)(param_1 + 0x11)]);
      *piVar2 = iVar5;
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
      break;
    case 1:
      if (*(char *)(*piVar2 + 0xd) != '\x04') {
        return in_lr;
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_083498f4;
      *(undefined2 *)(param_1 + 0x26) = 0x401;
      sub_0800860C((*(int *)(param_1 + 0x54) >> 0xc) + -1,(*(int *)(param_1 + 0x58) >> 0xc) + -2,
                   &DAT_08319ae4);
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
      break;
    case 2:
      iVar5 = *(int *)(param_1 + 0x58) + -0x100;
      *(int *)(param_1 + 0x58) = iVar5;
      if (*(int *)(param_1 + 0xb4) + -0x14000 <= iVar5) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080CE184(param_1);
      return in_lr;
    case 3:
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      iVar3 = *(int *)(param_1 + 0x58) + iVar3;
      *(int *)(param_1 + 0x58) = iVar3;
      if (iVar3 <= *(int *)(param_1 + 0xb4)) {
        return in_lr;
      }
      *(undefined *)(iVar5 + (uint)*(byte *)(param_1 + 0x11) + 0xba) = 0;
      iVar5 = *(int *)(param_1 + 0xb4);
      *(int *)(param_1 + 0x58) = iVar5;
      sub_0800860C((*(int *)(param_1 + 0x54) >> 0xc) + -1,(iVar5 >> 0xc) + -2,&DAT_08319af0);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      *(undefined *)(param_1 + 0x12) = 0x40;
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
      break;
    case 4:
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      cVar1 = '\0';
      break;
    default:
      goto switchD_080ce5aa_caseD_5;
    }
  }
  else {
    *piVar2 = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    cVar1 = '\x03';
  }
  *(char *)(param_1 + 0xd) = cVar1;
switchD_080ce5aa_caseD_5:
  return in_lr;
}


// sub_0808C718 at 0x0808C718 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_0808C718(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    iVar4 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    if (*(int *)(DAT_0202e130 + 0x54) == *(int *)(param_1 + 0x54) || iVar4 < 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = 0 < iVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (0 < iVar4) << 4;
  case 1:
    bVar3 = *(byte *)(param_1 + 10);
    uVar6 = ~(uint)(bVar3 >> 4) & 1;
    if (uVar6 == 0) {
      bVar3 = bVar3 & 0xef;
    }
    else {
      bVar3 = bVar3 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  case 2:
    break;
  case 3:
    goto switchD_0808c72c_caseD_3;
  case 4:
    sub_08006E08(param_1 + 0x74,&DAT_08341cc0);
    sub_080127E4(param_1,0x7502);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xbd) == '\x02') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      bVar3 = *(byte *)(param_1 + 10);
      uVar6 = ~(uint)(bVar3 >> 4) & 1;
      if (uVar6 == 0) {
        bVar3 = bVar3 & 0xef;
      }
      else {
        bVar3 = bVar3 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(char *)(param_1 + 0x4c) = (char)uVar6;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
      sub_0808C9E0(param_1);
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
    return in_lr;
  default:
    return in_lr;
  }
  sub_08006E08(param_1 + 0x74,&DAT_08341cc0);
  sub_080127E4(param_1,0x7501);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  *(undefined *)(param_1 + 0x12) = 0x50;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808c72c_caseD_3:
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar5 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
  iVar4 = iVar5;
  if (iVar5 < 0) {
    iVar4 = -iVar5;
  }
  if (iVar4 < 0x8000) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar5 < 0) goto LAB_0808c844;
    }
    else if (-1 < iVar5) {
LAB_0808c844:
      uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar6 & 0x7fffffff;
      if ((uVar6 * 2 >> 0x11 & 0xf) < 0xc) {
        uVar1 = 2;
      }
      else {
        uVar1 = 3;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}


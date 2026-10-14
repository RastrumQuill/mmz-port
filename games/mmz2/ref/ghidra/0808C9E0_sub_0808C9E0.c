// sub_0808C9E0 at 0x0808C9E0 (thumb)

undefined4 sub_0808C9E0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0xe) = 3;
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      iVar4 = *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
      iVar3 = iVar4 + 0x10;
      if (0 < iVar4) {
        iVar3 = iVar4 + -0x10;
      }
      *(int *)(param_1 + 0x5c) = iVar3;
      cVar2 = sub_0808BC04(param_1);
      if (cVar2 == '\0') {
        iVar3 = *(int *)(param_1 + 0x5c);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (0x2f < iVar3) goto LAB_0808cb92;
      }
      sub_0808BACC(param_1);
LAB_0808cb92:
      sub_0808BBE0(param_1);
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    iVar3 = -0x180;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = 0x180;
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = iVar4 + iVar3;
    cVar2 = sub_0808BC04(param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x54) = iVar4;
      sub_080127E4(param_1,0x7501);
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 2;
      return in_lr;
    }
    sub_0808BBE0(param_1);
    sub_080032EC(0x3b);
    sub_08006E08(param_1 + 0x74,&DAT_08341d20);
    iVar3 = sub_08006B50(DAT_0202f078);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 0x25) = 0x18;
      *(undefined *)(iVar3 + 9) = 0x42;
      *(undefined4 *)(iVar3 + 0x14) = 0x808beb9;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      *(undefined *)(iVar3 + 0x22) = 0;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
      *(undefined *)(iVar3 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
      *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined *)(iVar3 + 0x10) = 3;
      *(undefined *)(iVar3 + 0x11) = 0;
      *(int *)(iVar3 + 0x28) = param_1;
    }
    sub_080127E4(param_1,0x7500);
    sub_080128D4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar2 = sub_0808BC04(param_1);
  if (cVar2 != '\0') {
    sub_0808BACC(param_1);
    *(undefined *)(param_1 + 0xbd) = 0;
    return in_lr;
  }
  sub_0808BBE0(param_1);
  if (*(char *)(param_1 + 0xbd) == '\x02') goto LAB_0808cb50;
  iVar3 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar3 < 0) {
LAB_0808cb44:
      if (*(char *)(param_1 + 0xbd) != '\x01') goto LAB_0808cb50;
    }
  }
  else if (-1 < iVar3) goto LAB_0808cb44;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0808cb50:
  sub_080128D4(param_1);
  return in_lr;
}


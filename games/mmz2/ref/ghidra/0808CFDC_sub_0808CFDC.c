// sub_0808CFDC at 0x0808CFDC (thumb)

undefined4 sub_0808CFDC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0808d02a:
    *(undefined4 *)(param_1 + 0x60) = 0;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080128D4(param_1);
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_08006E08(param_1 + 0x74,&DAT_08341db0);
    sub_080127E4(param_1,0x750a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0x12) = 2;
    goto LAB_0808d02a;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      return in_lr;
    }
    goto LAB_0808d10c;
  }
  iVar4 = *(int *)(param_1 + 0xc0);
  iVar6 = *(int *)(param_1 + 0x54) - iVar4;
  if (iVar6 < 0) {
    iVar6 = iVar4 - *(int *)(param_1 + 0x54);
  }
  if (0x10000 < iVar6) {
    bVar1 = *(byte *)(param_1 + 10);
    if (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xc0) < 1) {
      if ((bVar1 >> 4 & 1) != 0) goto LAB_0808d092;
    }
    else if ((bVar1 >> 4 & 1) != 1) {
LAB_0808d092:
      uVar5 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar5 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    }
  }
  sub_0801260C(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  sub_080127E4(param_1,0x7504);
  uVar3 = 0x180;
  *(undefined4 *)(param_1 + 0x5c) = 0x180;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar3 = 0xfffffe80;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x600;
  *(undefined *)(param_1 + 0x12) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0808d10c:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar6;
  if (0x700 < iVar6) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar2 = *(char *)(param_1 + 0x12) + '\n';
  *(char *)(param_1 + 0x12) = cVar2;
  *(char *)(param_1 + 0x24) = cVar2;
  sub_0808BC04(param_1);
  cVar2 = sub_0808BB60(param_1);
  if ((cVar2 != '\0') && (0 < *(int *)(param_1 + 0x60))) {
    sub_0808BBE0(param_1);
    *(undefined *)(param_1 + 0xbd) = 0;
    sub_08012580(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(char *)(param_1 + 0x24) = '\0';
    sub_080127E4(param_1,0x750a);
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}


// sub_0808CBA4 at 0x0808CBA4 (thumb)

undefined4 sub_0808CBA4(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0801260C(param_1);
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
        sub_080127E4(param_1,0x7509);
        uVar5 = 0xffffff40;
        *(undefined4 *)(param_1 + 0x5c) = 0xffffff40;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar5 = 0xc0;
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar5;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
        *(undefined2 *)(param_1 + 0xbe) = 0x2000;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar4 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      psVar6 = (short *)(param_1 + 0xbe);
      sVar2 = *psVar6;
      *psVar6 = sVar2 + -0xc0;
      if ((ushort)(sVar2 + 0x7f3fU) < 0x5fff) {
        *psVar6 = -0x2000;
      }
      *(undefined *)(param_1 + 0x24) = (char)((ushort)*psVar6 >> 8);
      sub_0808BC04(param_1);
      cVar3 = sub_0808BB60(param_1);
      if ((cVar3 != '\0') && (0 < *(int *)(param_1 + 0x60))) {
        sub_0808BBE0(param_1);
        sub_08012580(param_1);
        *(undefined *)(param_1 + 0x24) = 0;
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
        sub_080127E4(param_1,0x750a);
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_08006E08(param_1 + 0x74,&DAT_08341d20);
    iVar4 = sub_08006B50(DAT_0202f078);
    if (iVar4 != 0) {
      *(undefined *)(iVar4 + 0x25) = 0x18;
      *(undefined *)(iVar4 + 9) = 0x42;
      *(undefined4 *)(iVar4 + 0x14) = 0x808beb9;
      *(undefined2 *)(iVar4 + 0x20) = 0;
      *(undefined *)(iVar4 + 0x22) = 0;
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) | 0x10;
      *(undefined *)(iVar4 + 0x1d) = *(undefined *)(iVar4 + 0x1c);
      *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined *)(iVar4 + 0x10) = 3;
      *(int *)(iVar4 + 0x28) = param_1;
      *(undefined *)(iVar4 + 0x11) = 1;
    }
    sub_08006E08(param_1 + 0x74,&DAT_08341d80);
    sub_080127E4(param_1,0x750a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0x12) = 2;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}


// sub_0808F06C at 0x0808F06C (thumb)

undefined4 sub_0808F06C(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 1;
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 10;
      if (*(byte *)(param_1 + 0x13) < 8) {
        if ((8 < *(short *)(DAT_0202f078 + 10)) && (iVar4 = sub_08006B50(DAT_0202f078), iVar4 != 0))
        {
          *(undefined *)(iVar4 + 0x25) = 0x18;
          *(undefined *)(iVar4 + 9) = 0x46;
          *(undefined4 *)(iVar4 + 0x14) = 0x808f1e1;
          *(undefined2 *)(iVar4 + 0x20) = 0;
          *(undefined *)(iVar4 + 0x22) = 0;
          *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) | 0x10;
          *(undefined *)(iVar4 + 0x1d) = *(undefined *)(iVar4 + 0x1c);
          *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_1 + 0x54);
          *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(param_1 + 0x58);
          *(byte *)(iVar4 + 0x12) = *(byte *)(param_1 + 0x13) & 1;
          *(undefined4 *)(iVar4 + 0x60) = 0xfffffd00;
          *(int *)(iVar4 + 0x60) =
               *(int *)(&DAT_0834211c + (uint)(*(byte *)(param_1 + 0x13) >> 1) * 4) + -0x300;
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
      }
      else {
        *(undefined *)(param_1 + 0x12) = 0xff;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080127E4(param_1,0x7802);
    sub_080128D4(param_1);
    sub_080032EC(0xca);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == ' ') {
    sub_080032EC(0xca);
  }
  if (*(byte *)(param_1 + 0x12) < 0x20) {
    sVar2 = (&DAT_080ef450)[(byte)(('\x1f' - *(byte *)(param_1 + 0x12)) * ' ')];
    *(short *)(param_1 + 0x50) = 0x100 - (sVar2 >> 3);
    *(short *)(param_1 + 0x52) = (sVar2 >> 3) + 0x100;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(short *)(param_1 + 0x50) = 0x100;
      *(short *)(param_1 + 0x52) = 0x100;
    }
  }
  return in_lr;
}


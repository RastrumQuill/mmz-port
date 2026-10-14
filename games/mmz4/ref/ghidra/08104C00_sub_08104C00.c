// sub_08104C00 at 0x08104C00 (thumb)

undefined4 sub_08104C00(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      goto LAB_08104cb8;
    }
    *(byte *)(param_1 + 0x12) = cVar1 - 1U;
    if (0x27 < (byte)(cVar1 - 1U)) goto LAB_08104cb8;
    if ((cVar1 - 1U & 2) == 0) goto LAB_08104cb0;
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (*(char *)(param_1 + 0xb6) == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(char *)(param_1 + 0xb6) = '\x01';
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
      if (sVar3 != 0) {
        if (*(char *)(param_1 + 0x11) == '\x04') {
          iVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          iVar4 = iVar4 + -0x400;
        }
        else {
          iVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        }
        *(int *)(param_1 + 0x58) = iVar4;
        *(undefined *)(param_1 + 0x12) = 0xdc;
        *(undefined *)(param_1 + 0xb5) = 1;
      }
      goto LAB_08104cb8;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
LAB_08104cb0:
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_08104cb8:
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}


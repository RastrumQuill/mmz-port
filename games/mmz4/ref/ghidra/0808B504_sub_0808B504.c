// sub_0808B504 at 0x0808B504 (thumb)

undefined4 sub_0808B504(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x2100);
    bVar2 = *(byte *)(param_1 + 10);
    uVar3 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar3 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_0885c048 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_0885c1b0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0x2100) * 4)) *
               0x18);
  sub_0808BA04(param_1);
  cVar1 = *(char *)(param_1 + 0xb9);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xb9) = cVar1 + -1;
  }
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}


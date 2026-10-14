// sub_08082F64 at 0x08082F64 (thumb)

undefined4 sub_08082F64(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0xfe;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(ushort *)(param_1 + 0x48) = (ushort)*(byte *)(param_1 + 0x12);
      *(ushort *)(param_1 + 0x4a) = (ushort)*(byte *)(param_1 + 0x12);
      cVar2 = *(char *)(param_1 + 0x12) + -2;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
      }
      goto LAB_0808302c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08076674(param_1);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      sub_080033F0(param_1 + 0x6c,1);
    }
    else {
      sub_080033F0(param_1 + 0x6c,3);
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
LAB_0808302c:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

